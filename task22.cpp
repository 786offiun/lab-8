
#include<iostream>
using namespace std;
main()
{
    float change[4];
  
    float sum;
    float quater,dime,nickel,penny;
    float required;
    cout<<"enter the required price:"<<endl;
    cin>>required;
    for(int index=0; index<4; index++)
    {
       cout<<"enter the changes: quarter, dime, nickel, penny "<<endl;
       cin>>change[index];
    
    }

  quater=change[0]*0.25;
 dime=change[1]*0.10;
nickel=change[2]*0.05;
penny=change[3]*0.01;
sum=quater+dime+nickel+penny;
if(sum==required)
{

    cout<<"true";
}
else
{

cout<<"false";

}
}






