#include <iostream>
using namespace std;

int fact(int n)
{
    if (n < 0)
    {
        cout << "this is invalid ";
        return 0;
    }

    if (n == 0 || n == 1)
    {
        return 1;
    }

    return n * fact(n - 1);
}

int main()
{

    int num;
    cout << "the value of n is" << endl;
    cin >> num;
    cout << "factorial of " << num << " is: " << fact(num);
    return 0;
}
