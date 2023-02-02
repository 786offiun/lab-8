
#include<iostream>
using namespace std;
main()
{
    int size;
    cout<<"enter the no of resistance in the circut:"<<endl;
    cin>>size;
    float sum=0;
    float resistance[size];
     for(int index=0; index<size; index++)
     {
        cout<<"enter the the amount of resistance of resistor"<<index+1<<endl;
        cin>>resistance[index];


     }

     for(int index=0; index<size; index++)
     {
        sum=sum+resistance[index];

     }

     cout<<"total resistance:"<<sum<<endl;




}






