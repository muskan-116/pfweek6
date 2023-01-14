#include <iostream>
using namespace std;
float lowestprice(int distance,string time);
main()
{
int distance ;
string time ;
float price;
cout<<"enter  distance :";
cin>>distance;
cout<<"enter  time :";
cin>>time;
price=lowestprice( distance,time);
cout<<price;
}
float lowestprice(int distance,string time)
{
    float checkpoint;
if(distance<20 && time=="day" )
{
checkpoint=0.79*distance;
checkpoint=checkpoint+0.70;
}
else if(distance<20 && time=="night" )
{
checkpoint=(0.90+0.70)*distance;
}
else if ( distance >=20 )
{
checkpoint=(0.09*distance);
}
else  
{
 checkpoint=(0.06*distance);   
}
return checkpoint;
}