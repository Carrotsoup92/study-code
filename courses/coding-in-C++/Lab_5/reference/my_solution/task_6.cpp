
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

    return 0;
}