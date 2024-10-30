#include <iostream>
#include <string>
using namespace std;
int main() {
    string name;
    int age;
    int year;
    string surname;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your surname: ";
    getline(cin, surname);

    cout << "Enter your age: ";
    cin >> age;

    cout << "What year you were born in: ";
    cin >> year;

    cout << "Hello, " << name << " " << surname <<"!" " You are " << age << " years old and you were born in " << year << "!" << std::endl;


    cout << "Press Enter to exit...";
    cin.ignore();
    cin.get();

    return 0;
}
