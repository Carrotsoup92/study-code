
#include <iostream>
#include <vector>
#include <algorithm>

template <typename T>
T sum_of_all_values(std::vector<T>& vec)
{
    T sum = 0;

    for (T temp :vec)
    {
        sum = sum + temp;
    }

    return sum;
}

template <>
bool sum_of_all_values<bool>(std::vector<bool>& vec)
{
    int count_true = 0;
    int count_false = 0;

    for( bool temp : vec)
    {
        (temp == true) ? count_true++ : count_false++;
    }

    return (count_true >= count_false);
}

template <typename T>
T largest_value(std::vector<T>& vec)
{
    auto it = std::max_element(vec.begin(), vec.end());

    return *it;
}

template <typename T>
double average_value(std::vector<T>& vec)
{
    T sum = sum_of_all_values(vec);
    int size = vec.size();

    return static_cast<double>(sum) / static_cast<double>(size);
}

template <typename T>
void print(std::vector<T>& vec)
{
    for (T temp : vec)
    {
        std::cout << temp << ", ";
    }
}

template <typename T>
void analyzer(std::vector<T>& vec)
{
    auto sum = sum_of_all_values(vec);
    auto largest = largest_value(vec);
    auto average = average_value(vec);

    std::cout << "Data Report:\n";
    std::cout << "Raw data: ";
    print(vec);
    std::cout << "\n";
    std::cout << "Sum of all values: " << sum << "\n";
    std::cout << "Maximun value: " << largest << "\n";
    std::cout << "Average value: " << average << "\n";
}

template <>
void analyzer<bool>(std::vector<bool>& vec)
{
    std::cout << "Motor was active for most of the test run: " << std::boolalpha << sum_of_all_values(vec) << "\n";
}

template <typename T, int N>
std::vector<T> transform_array(T (&array)[N])
{
    std::vector<T> vec;

    vec.assign(array, array + N);

    return vec;
}

int main()
{
    std::vector<int> vec = {42, 17, 42, 5, 99, 17, 63, 12, 0};
    std::vector<double> vec_d = {3.5, 1.25, 7.0, 2.75, 9.9, 0.5};
    std::vector<bool> vec_b = {1,1,1,1,0,0,1,1,0,0};
    std::vector<bool> vec_b_2 = {0,0,0,0,0,0,0,0,1,1};

    int data[] = {42, 17, 42, 5, 99, 17, 63, 12, 0, 7, 9, 2};
    double data_d[] = {3.5, 1.25, 7.0, 2.75, 9.9, 0.5, 5.6, 0.3, 9.2};

    std::vector<int> vec_i_2 = transform_array(data);
    auto vec_d_2 = transform_array(data_d);

    analyzer(vec);
    analyzer(vec_d);
    analyzer(vec_i_2);
    analyzer(vec_d_2);

    analyzer(vec_b);
    analyzer(vec_b_2);

    return 0;
}