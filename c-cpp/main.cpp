#include <iostream>
#include <string>

std::string addNumbers(int a, int b);
std::string subtractNumbers(int a, int b);

std::string addNumbers(int a, int b)
{
    int sum = a + b;
    const std::string s = std::to_string(sum);
    return s;
}

std::string subtractNumbers(int a, int b)
{
    int sum = a - b;
    const std::string s = std::to_string(sum);
    return s;
}

int main()
{
    int i = 0;
    do
    {
        std::cout << "Iteration: " << i << std::endl;
        i++;
    } while (i < 5);
    return 0;
}