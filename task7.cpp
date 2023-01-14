#include <iostream>
using namespace std;
float checkCost(string city,string product,float quantity);
main()
{
string city,product;
float quantity,result;
cout<<"enter city name : ";
cin>>city;
cout<<"enter product  : ";
cin>>product;
cout<<"enter  quantity : ";
cin>>quantity;
result=checkCost(city,product,quantity);
cout<<result;
}
float checkCost(string city,string product,float quantity)
{
float checkpoint;
if(city=="sofia" && product=="coffee")
{

    checkpoint=0.50*quantity;
}
 else if(city=="sofia" && product=="water")
{

    checkpoint=0.80*quantity;
}
else if(city=="sofia" && product=="beer")
{

    checkpoint=1.20*quantity;
}
else if(city=="sofia" && product=="sweets")
{

    checkpoint=1.45*quantity;
}

else if(city=="sofia" && product=="peanuts")
{

    checkpoint=1.60*quantity;
}
else if(city=="plovdiv" && product=="coffee")
{

    checkpoint=0.40*quantity;
}
else if(city=="plovdiv" && product=="water")
{

    checkpoint=0.70*quantity;
}
else if(city=="plovdiv" && product=="beer")
{

    checkpoint=1.15*quantity;
}
else if(city=="plovdiv" && product=="sweets")
{

    checkpoint=1.30*quantity;
}
else if(city=="plovdiv" && product=="peanuts")
{

    checkpoint=1.50*quantity;
}

else if(city=="varna" && product=="coffee")
{

    checkpoint=0.45*quantity;
}
else if(city=="varna" && product=="water")
{

    checkpoint=0.70*quantity;
}
else if(city=="varna" && product=="beer")
{

    checkpoint=1.10*quantity;
}
else if(city=="varna" && product=="sweets")
{

    checkpoint=1.35*quantity;
}
else if(city=="varna" && product=="peanuts")
{

    checkpoint=1.55*quantity;
}
else 
{
    checkpoint=0;
}
return checkpoint;
}



















