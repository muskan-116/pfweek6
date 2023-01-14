#include <iostream>
using namespace std;
string checktitle(char gender ,int age);
main()
{
int age;
char gender;
string  result;
cout<<"enter your age :";
cin>>age;
cout<<"enter your gender :";
cin>>gender;
result=checktitle(gender,age);
cout<<result;
}
string checktitle(char gender ,int age)
{
    string  result;
    if(age>=16 && gender=='m')
    {
      result="MR.";
    }
 else if(age<16 && gender=='m')
    {
      result="MASTER";
    }
else if(age>=16 && gender=='f')
 {
    result="MS";
 }
 else if(age<16 && gender=='f')
 {
    result="MISS";
 }
 else{
    result="invalid input";
 }
   return result; 
}









