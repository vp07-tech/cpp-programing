#include<iostream>
using namespace std;

int main(){
int n;
cout<<"the value of n is:";
cin>>n;
cout<<endl;

int factorial=1;

for(int i=1; i<=n; i++){

factorial=factorial*i;
}

cout<<"factorial of"<<n<<"is :"<<factorial;
return 0;
}
