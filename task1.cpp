#include <iostream>
using namespace std;
char marks( int number);
main()
{
int number;
char total;
cout<<"enter number :",
cin>>number;

total=marks(number);
cout<<total;
}
char marks( int number)
{
    int Marks;
if(number <50)
{
    Marks='F';
}
else if(number >=50 && number<=60)
{
    Marks='E';
}
else if(number >=61 && number<=70)
{
    Marks='D';
}
else if(number >=71 && number<=80)
{
    Marks='C';
}
else if(number >=81 && number<=85)
{
    Marks='B';
}
else
{
    Marks='A';
}
return Marks;
}
























