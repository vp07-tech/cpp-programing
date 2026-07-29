#include<iostream>
using namespace std;

int main(){
int n;
cout<<"the value of n";
cin>>n;
cout<<endl;
int reverse=0;
int remainder;

while( n>0){
remainder=n%10;
reverse=(reverse*10)+remainder;
n/=10;
}
cout<<reverse<<endl;
return 0;
}
