#include <iostream>
using namespace std;
float discount( float totalamount,string day,string month);
main()
{
    float totalamount,total;
    string day,month;
    cout<<"enter price :";
    cin>>totalamount;
    cout<<"enter day :";
    cin>>day;
    cout<<"enter month :";
    cin>>month;
    total=discount(totalamount,day,month);
    cout<<total;
}
float discount( float totalamount,string day,string month)
{
float disc;
float afterdisc=totalamount;
if(day=="sunday" && (month=="october" || month=="march" || month=="august"))
{
    disc=0.1*totalamount;
    afterdisc=totalamount-disc;
}
else if (day=="monday" && (month=="november" || month =="december"))
{
     disc=0.05*totalamount;
    afterdisc=totalamount-disc;
}
else
{
    afterdisc=totalamount;
}
return afterdisc;
}