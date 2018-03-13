#include <iostream>
#define MULTIPLY(x,y) x*y

using namespace std;

int main() {
    char name[256];
    cin >> name;

    cout << "Hello!" << name << MULTIPLY(1,3) << endl;

    return 0;
}