#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int main() {
    string name;
    string surname;
    int age;
    char choice;

    do {
        cout << "Enter your name: ";
        getline(cin, name);

        cout << "Enter your surname: ";
        getline(cin, surname);

        cout << "Enter your age: ";
        cin >> age;

        while (age <= 0 || age > 120) {
            cout << "Please enter a valid age: ";
            cin >> age;
        }

        time_t now = time(0);
        int currentYear = 1900 + localtime(&now)->tm_year;
        int birthYear = currentYear - age;

        int hour = localtime(&now)->tm_hour;
        if (hour < 12) {
            cout << "Good morning, ";
        } else if (hour < 18) {
            cout << "Good afternoon, ";
        } else {
            cout << "Good evening, ";
        }

        cout << name << " " << surname << "!" << endl;
        cout << "---------------------------------\n";
        cout << "Age: " << age << endl;
        cout << "Year of Birth: " << birthYear << endl;

        if (age < 18) {
            cout << "Fun Fact: You're young and have a whole future ahead!\n";
        } else if (age < 30) {
            cout << "Fun Fact: The 20s are a great time to explore!\n";
        } else if (age < 50) {
            cout << "Fun Fact: You're in the prime of your life!\n";
        } else {
            cout << "Fun Fact: You're wise and experienced!\n";
        }

        cout << "---------------------------------\n";
        cout << "Would you like to enter another profile? (y/n): ";
        cin >> choice;
        cin.ignore();

    } while (choice == 'y' || choice == 'Y');

    cout << "Press Enter to exit...";
    cin.ignore();
    cin.get();

    return 0;
}
