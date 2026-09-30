#include <iostream>
using namespace std;

class Number
{
private:
    int n;

public:
    Number(int x)
    {
        n = x;
    }

    
    void inc()
    {
        ++n;
    }
  void dec(){
       --n;
       }
    void display()
    {
        cout << "Number = " << n << endl;
    }
    
};

int main()
{
    Number obj(10);
    
    cout << "Before increment ";
    obj.display();

     
      obj.inc()
    cout << "After increment " ;
    obj.display();
  
     obj.dec()
    cout << "After dec" ;
    obj.display();

    return 0;
}
