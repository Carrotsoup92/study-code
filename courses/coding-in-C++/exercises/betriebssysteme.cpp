

#include <iostream>
#include <thread>
#include <semaphore>

std::binary_semaphore door(1);

const int ITERATIONS = 1000000;
int couter = 0;

void increment_loop(int interaton)
{
    for (int i = 0; i < interaton; ++i)
    {
        door.acquire();
        ++couter;
        door.release();
    }
}


int main()
{
    std::thread t1{increment_loop, ITERATIONS};
    std::thread t2{increment_loop, ITERATIONS};
    std::thread t3{increment_loop, (ITERATIONS/2)};
    
    t1.join();
    t2.join();  // wartet bis der befehl fertig ist, sonnst wird main zu früh beendet
    t3.join();

    std::cout << "Endwert: " << couter << "\n";
}