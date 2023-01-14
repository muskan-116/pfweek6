#include <iostream>
#include <cmath>
using namespace std;
float play(int holidays,string year,int weekend);
main()
{
int holidays,weekend;
string year;
float result;
cout<<"enter the year :";
cin>>year;
cout<<"enter  number of weekend in which viladamir went to his hometown :";
cin>>weekend;
cout<<"the count of holidays in year which  is not saturday or sunday :";
cin>>holidays;
result=play(holidays,year,weekend);
result=floor(result);
cout<<result;
}
float play(int holidays,string year,int weekend)
{
float result,totalplaytime,hometown;
hometown=48-weekend;
totalplaytime=((3*hometown)/4)+((2*holidays)/3);
result=weekend+totalplaytime;
if(year=="leap")
{
result=0.15*result + result;
}
else
{
    result=result=weekend+totalplaytime;
}
return result;
}




















