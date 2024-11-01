#include <iostream>
#include <string>
using namespace std;

int main()
{
    string array[3] = {"Mark", "Robert", "Albert"};
    string name = " ";
    bool check = false;

    cout << "Enter a name: ";
    cin >> name;

    for (int i = 0; i<3; i++) {
        if (array[i] == name) {
        check = true;
        }
    }


    if (check = true) {
        cout << "Name found!";
    }
    else {
        cout << "Name is not found!";
    }

    return 0;
}