#include <iostream>
using namespace std;
string checkspeed(float speedo);
main()
{
float speedo;
string result;
cout<<"enter speed : ";
cin>>speedo;
result=checkspeed(speedo);
cout<<result;
}
string checkspeed(float speedo)
{
    string test;
    if(speedo<=10)
    {
test="slow";
}
else if(speedo>10 && speedo<=50) 
{
test="average";
}
else if (speedo>50 && speedo<=150)
{
    test="fast";
}
else if(speedo>150 && speedo<=1000) 
{
test="ultra fast";
}
else
{
    test="extremely fast";
}
return test;
}







