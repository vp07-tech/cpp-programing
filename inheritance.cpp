#include<iostream>
using namespace std;

class student
{
protected:
      string name;
      int roll_no;
public :
      void getstudents()
        {
          cout<<"Enter name :";
          cin>>name;
          cout<<"enter roll no. :";
          cin >>roll_no;
          }
          };
class studentexam : public student 
{
 protected:
    int m1 , m2 , m3 , m4 , m5 ;
public:
      void getmarks()
      {
      cout<<"subject 1 mark is :";
      cin>>m1;
      cout<<"subject 2 mark is :";
      cin>>m2;
      cout<<"subject 3 mark is :";
      cin>>m3;
      cout<<"subject 4 mark is :";
      cin>>m4;
      cout<<"subject 5 mark is :";
      cin>>m5;
      }
      };
class studentresult : public studentexam
{
   public :
          void displayresult()
          {
           int total=m1+m2+m3+m4+m5;
          float  percentage=total/5.0;
          
          cout <<"student name:"<< name<<endl;
          cout <<"student roll no.:"<< roll_no<<endl;
          cout<< "total marks:"<<total<<endl;
          cout<<"Percentage:"<<percentage<<"%"<<endl;
          }
          };
  int main(){
        studentresult s;
        s.getstudents();
        s.getmarks();
        s.displayresult();
        
        return 0;
        }
     
