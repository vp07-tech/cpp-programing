#include <iostream>
using namespace std;

int main()
{
    int a = 4, b = 32;
    int c;
    c = a;
    a = b;
    b = c;
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;

    return 0;
}