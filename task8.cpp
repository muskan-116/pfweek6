#include <iostream>
#include <cmath>
using namespace std ;
float budget(int totalamount,int people);
float value(int totalamount,int people,string category);
main()
{
int totalamount,people;
string category;
float VIP=499.99;
float Normal=249.99;
float result,remain,safe;
cout<<"enter  the total amount for budget :";
cin>>totalamount;
cout<<"enter number of people :";
cin>>people;
cout<<"enter category  :";
cin>>category;
remain=budget(totalamount,people);
result=value(totalamount,people,category);
if(remain<result)
{
    safe=result-remain;
    cout<<"not enough money!!! you need"<<safe<< " QR"<< endl;
}
else if(remain>result)
{
    safe=remain - result;
    cout<<"yes!! you have"<<safe<< " QR left "<< endl;
}
}

float budget(int totalamount,int people)
{
float chkpost,rial;
if(people>=1 && people<=4 )
{
chkpost=0.75*totalamount;
rial=totalamount-chkpost;
}
 else if(people>=5 && people<=9 )
{
chkpost=0.60*totalamount;
rial=totalamount-chkpost;
}
else if(people>=10 && people<=24)
{
chkpost=0.50*totalamount;
rial=totalamount-chkpost;
}
else if(people>=25 && people<=49)
{
chkpost=0.40*totalamount;
rial=totalamount-chkpost;
}
else if (people>49)
{
    chkpost=0.25*totalamount;
    rial=totalamount-chkpost;
}
else if (people>49)
{
    chkpost=0.25*totalamount;
    rial=totalamount-chkpost;
}

return rial;
}
float value(int totalamount,int people,string category)
{
float rol;
if(category=="normal")
{
    rol=(249.99*people);
}
else if (category=="VIP")
{
    rol=(499.99*people);
}

return rol;
}
























