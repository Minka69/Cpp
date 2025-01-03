#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    const char* username = getenv("USER");

    if (username) {
        cout << "Hello, " << username << "!" << endl;
    } else {
        cout << "Hello, Linux user!" << endl;
    }

    return 0;
}

