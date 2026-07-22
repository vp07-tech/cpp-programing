#include<iostream>
using namespace std;
int main(){
int a,b,c;

cout<<"the value of a is:";
cin>>a;

cout<<"the value of b is:";
cin>>b;

cout<<"the value of c is:";
cin>>c;

if (a>=b && a>=c){
cout<<"a is greater";
}

else if (b>=a && b>=c){
cout<<"b is greater";
}

else{
cout<<"c is greater";
}
return 0;
}

