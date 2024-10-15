#include <iostream>
#include <string>

int main() {
    std::string name;
    int age;
    int year;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    std::cout << "Enter your age: ";
    std::cin >> age;

    std::cout << "What year you were born in: ";
    std::cin >> year;

    std::cout << "Hello, " << name << "! You are " << age << " years old and you were born in " << year << "!" << std::endl;

    std::cout << "Press Enter to exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}
