#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void area()
    {
        cout << "Area of Shape" << endl;
    }
};

class Circle : public Shape
{
private:
    float radius;

public:
    Circle(float r)
    {
        radius = r;
    }

    void area() override
    {
        cout << "Area of Circle = " << 3.14 * radius * radius << endl;
    }
};

class Rectangle : public Shape
{
private:
    float length, width;

public:
    Rectangle(float l, float w)
    {
        length = l;
        width = w;
    }

    void area() override
    {
        cout << "Area of Rectangle = " << length * width << endl;
    }
};

class square : public Shape
{
private:
    float side;

public:
    square(float s)
    {
        side=s;
    }

    void area() override
    {
        cout << "Area of square = " <<side*side << endl;
    }
};
int main()
{
    
    Circle c(5);
    Rectangle r(10, 4);
    square s(5);
    c.area();
    r.area();
    s.area();

    return 0;
}
