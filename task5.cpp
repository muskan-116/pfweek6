#include <iostream>
using namespace std;
float totalIncome(string screen,int rows,int column);
main()
{
    int rows,column;
    string screen;
    float ticket; 
    cout<<" enter rows :";
    cin>>rows;
cout<<" enter column :";
    cin>>column;
    cout<<"enter screen :  ";
    cin>>screen;
ticket=totalIncome(screen,rows,column);
cout<<ticket;
}
float totalIncome(string screen,int rows,int column)
{
    float ticks;
    if(screen=="premiere") 
 {

    ticks=12.00*rows*column;
}
else if ( screen=="normal")
{
    ticks=7.500*rows*column;
}
else if (screen=="discount")
{
ticks=5.00*rows*column;
}
return ticks;
}