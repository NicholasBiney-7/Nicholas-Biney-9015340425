#include <iostream>

// cout << (insertion operator)
// cout << (extraction)

int main()
{
    std::string name;
    int age;

    std::cout << "What's your age?: ";
    std::cin >> age;

    std::cout << "What's your full name?: ";
    std::getline(std::cin >> std::ws, name);


    std::cout << "Hello " << name << '\n';
    std::cout << "Your are " << age << " years old";

    return 0;
}    