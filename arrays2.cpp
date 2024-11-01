#include <iostream>
#include <string>
using namespace std;

int main()
{
    int array[7];
    
    for (int i = 0; i<7; i++) {
        array[i] = (i+1)*100;
    }

    for (int i = 6; i>=0; i--) {
        cout << array[i] << " ";
    }

    return 0;
}