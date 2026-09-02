#include <iostream>
using namespace std;

class Time
{
    int h, m, s;

public:
    void accept()
    {
        cin >> h >> m >> s;
    }

    void add(Time t)
    {
        s = s + t.s;
        m = m + t.m;
        h = h + t.h;

        if (s >= 60)
        {
            s = s - 60;
            m++;
        }

        if (m >= 60)
        {
            m = m - 60;
            h++;
        }
    }

    void display()
    {
        cout << h << ":" << m << ":" << s;
    }
};

int main()
{
    Time t1, t2;

    cout << "Enter first time (HH MM SS): ";
    t1.accept();

    cout << "Enter second time (HH MM SS): ";
    t2.accept();

    t1.add(t2);

    cout << "Result = ";
    t1.display();

    return 0;
}