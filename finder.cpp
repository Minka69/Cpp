#include <iostream>
#include <string>
using namespace std;

int main()
{
    string vards;
    char simbols;
    int skaits = 0;
    
    cout << "Ievadi vardu:";
    cin >> vards;
    
    cout << "ievadi simbolu: ";
    cin >> simbols;
    
    for (char c : vards) {
        if (c == simbols) {
            skaits++;
        }
    }
    cout << "\nAtrada " << skaits << " simbolus\n";

    cout << "Press Enter to exit...";
    cin.ignore();
    cin.get();
return 0;
}