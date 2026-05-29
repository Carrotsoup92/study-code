
#include <iostream>
#include <thread>
#include <queue>
#include <semaphore>
#include <atomic>

const int MAX_PRODUCTS = 1000000;
const int BUFFER_SIZE = 100;

std::counting_semaphore full(BUFFER_SIZE);
std::counting_semaphore empty(0);
std::binary_semaphore block_buffer(1);

std::queue<int> buffer;

std::atomic<int> prodused = 0;
std::atomic<int> consumed = 0;


void producer()
{
    while (true)
    {
        int i = ++prodused;
        if (prodused > MAX_PRODUCTS)
        {
            std::cout << "End producer." << "\n";
            break;
        }

        full.acquire();

        block_buffer.acquire();

        buffer.push(i);
        if (i % 100000 == 0)
        {
            std::cout << "Add elememt: " << i << "\n";
        }

        block_buffer.release();
        empty.release();
    }
}

void consumer(int id)
{
    while (true)
    {
        empty.acquire();

        ++consumed;
        if( consumed >= MAX_PRODUCTS)
        {
            empty.release();
            std::cout << "End consumer: " << id << "\n";
            break;
        }

        block_buffer.acquire();

        int temp = buffer.front();
        if (temp % 100000 == 0)
        {
            std::cout << "Remove element: " << temp << " by consumer: " << id << "\n";
        }
        buffer.pop();

        block_buffer.release();
        full.release();
    }
}

int main()
{
    std::thread pro{producer};
    std::thread pro_2{producer};
    std::thread con_1{consumer, 1};
    std::thread con_2{consumer, 2};

    pro.join();
    pro_2.join();
    con_1.join();
    con_2.join();
}