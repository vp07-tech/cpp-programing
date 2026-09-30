#include <iostream>
using namespace std;

class binary
{
private:
    int n1,n2,n3;

public:
    void inp()
    {
        cout<<"value of n1"<<endl;
        cin>>n1;
        cout<<"value of n2"<<endl;
        cin>>n2;
        
    }

    
    void add()
    {
        n3=n1+n2;
    }

    void display()
    {
        cout << "Number = " << n3<< endl;
    }
    
};

int main()
{
   binary n;
   n.inp();
   n.add();
   n.display();
   
   return 0;
   }
