#include <iostream>
using namespace std;
int isGreatest(int numb1,int numb2, int numb3);
main()
{
    int numb1,numb2, numb3,total;
    cout<<"enter number1  :";
    cin>>numb1;
    cout<<"enter number2  :";
    cin>>numb2;
    cout<<"enter number3  :";
    cin>>numb3;
    if(total==0)
    {
        cout<<"invalid input";
    }
    total=isGreatest(numb1,numb2,numb3);
    cout<<"the greatest number is : "<<total;
}
int isGreatest(int numb1,int numb2, int numb3)
{
    int greatest;
    if(numb1>numb2 && numb1>numb3)
    {
        greatest=numb1;
    }
 else if(numb2>numb1 && numb2>numb3)
    {
        
        greatest=numb2;
    }
     else if(numb3>numb2 && numb3>numb1)
    {
        greatest=numb3;
    
    }
    else
    {
       greatest=0;
    }
    return greatest;
}






