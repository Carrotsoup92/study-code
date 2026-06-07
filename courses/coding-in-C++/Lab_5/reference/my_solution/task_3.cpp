/**
 * @file tast_3.cpp
 * @brief Weakest signal detector
 */

#include <iostream>

template <typename T, int N>
void print(T (&array)[N])
{
    T temp = array[0];

    for (int i = 0; i < N; i++)
    {
        if (temp > array[i])
        {
            temp = array[i];
        }
    }

    std::cout << "Smallest value: " << temp << "\n";
}


int main()
{
    int array_1[] = {5,6,8,4,9,2,3};
    double array_2[] = {1.0, 5.6, 7.8, 0.6};

    print(array_1);
    print(array_2);
}