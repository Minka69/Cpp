#include <iostream>
#include <string>
using namespace std;

int main()
{
    int array[5] = {0, 50, 100, 150, 200};
    string array2[5] = {"He", "Her", "I", "You", "They"};
    char array3[5] = {'a', '#', '(', 'p', 'k'};
    bool array4[5] = {0, 1, 0, 1, 0};
    
    for (int i = 0; i<5; i++) {
        cout << array[i] << " ";
    }
    
    cout << "\n";
    for (int i = 0; i<5; i++) {
        cout << array2[i] << " ";
    }
    
        cout << "\n";
    for (int i = 0; i<5; i++) {
        cout << array3[i] << " ";
    }
    
    cout << "\n";
    for (int i = 0; i<5; i++) {
        cout << array4[i] << " ";
    }
    

    return 0;
}
