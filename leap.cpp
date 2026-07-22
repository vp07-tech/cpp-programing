#include<iostream>
using namespace std;

int main(){
int year;

cout<<"year:";
cin>>year;

cout<<endl;

if (year%4==0 && year%100!=0){
cout<<"year is leap";
}

else if(year%400==0){
cout<<"year is leap";
}

else{
cout<<"year is not leap";
}

return 0;
}

