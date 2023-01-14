#include <iostream>
using namespace std;
bool  same(int number1,int number2,int number3);
main()
{
int number1,number2,number3;
bool result;
cout<<"enter number1 : ";
cin>>number1;
cout<<"enter number2 : ";
cin>>number2;
cout<<"enter number3 : ";
cin>>number3;
result=same(number1, number2, number3);
cout<<result;
}
bool same(int number1,int number2,int number3)
{
bool total;
if(number1 == number2 && number2== number3)
{
    total= true;
}
else
{
    total =false;
}
return total;
}





















