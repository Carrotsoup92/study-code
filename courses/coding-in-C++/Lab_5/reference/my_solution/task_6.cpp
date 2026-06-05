
#include <iostream>
#include <vector>
#include <algorithm>

void print_vec(const std::vector<int>& vec)
{
    for (int temp : vec)
    {   
        std::cout << temp << ", "; 
    }
    std::cout << "\n";
}

void sort_vec(std::vector<int>& vec)
{
    sort(vec.begin(), vec.end());
}

void find_number(const std::vector<int>& vec, int num)
{
    auto it = find(vec.begin(), vec.end(), num);

    if (it == vec.end())
    {
        std::cout << "Number not found\n";
    }
    else 
    {
        std::cout << "Number found: "<< *it << "\n";
    }
}

void replce_neg_num(std::vector<int>& vec)
{
    for(int& temp :vec)
    {
        if(temp == -1)
        {
            temp = 0;
        }
    }
}

void find_occurences(const std::vector<int>& vec, int number)
{
    int occurences = 0;

    for (int temp : vec)
    {
        if (temp == number)
        {
            occurences ++;
        }
    }

    std::cout << number << " occurs " << occurences << " times.\n";
}

void reverse_data(std::vector<int>& vec)
{
    reverse(vec.begin(), vec.end());
}

void print_single(std::vector<int>& vec)
{
    std::vector<int>::iterator it;

    for (it = vec.begin(); it != vec.end(); ++it)
    {
        std::cout << *it << ", ";
    }
    std::cout << "\n";
}

int main()
{

    std::vector<int> vec = {42, 17, 42, 5, 99, 17, 63, 12, 0};
    std::vector<int> vec_2 = {7, -1, 13, -1, 21, 21, 8, -1, 8};

    print_vec(vec);
    sort_vec(vec);
    print_vec(vec);
    find_number(vec, 63);

    sort_vec(vec_2);
    print_vec(vec_2);
    replce_neg_num(vec_2);
    print_vec(vec_2);
    find_occurences(vec_2, 8);
    reverse_data(vec_2);
    print_vec(vec_2);

    print_single(vec);

    return 0;
}