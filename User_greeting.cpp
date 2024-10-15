#include <iostream>
#include <string>

int main() {
    std::string name;
    int age;
    int year;

    // Ask for the user's name
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    // Ask for the user's age
    std::cout << "Enter your age: ";
    std::cin >> age;

    // Ask for the user's year of birth
    std::cout << "What year you were born in: ";
    std::cin >> year;

    // Greet the user and mention their age
    std::cout << "Hello, " << name << "! You are " << age << " years old and you were born in " << year << std::endl;

    return 0;
}
