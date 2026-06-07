/*
* File: task_2.cpp
* Description: Shot discription of the file.
*/

#include <iostream>

template <typename T, int N>
void print(T (&array)[N])
{
    for (int i = 0; i < N; i++)
    {
        std::cout << array[i] << "; ";
    }
    std::cout << "\n";
}


int main() 
{
    int array_1[] = {2,3,5,9,8,4};
    double array_2[] = {2.3, 3.0, 5.6, 5.8};
    char array_3[] = {'v', 'B', 'O', 'e'};

    print(array_1);
    print(array_2);
    print(array_3);
    
    return 0;
}