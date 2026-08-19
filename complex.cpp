#include<iostream>
using namespace std;

class complex {
private:
  int a1, a2 ,i1,i2;

public:
void input(){
cout<<"the value of a1:";
cin>>a1;
cout<<"the value of i1:";
cin>>i1;

cout<<"the value of a2:";
cin>>a2;
cout<<"the value of i1:";
cin>>i2;
}
void add(){
cout<<"addition: "<<a1+a2<<"+"<<i1+i2<<"i";
}

};

int main(){
    complex c;
    c.input();
    c.add();
}