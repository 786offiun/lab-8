#include<iostream>
using namespace std;
main()
{ int number,average,sum=0;
cout<<"enter the number:";
cin>>number;
int array[number];
for(int index=0; index<number; index++)
{

    cout<<"enter a valur of"<<index+1<<":"<<endl;
    cin>>array[index];
     sum=sum+array[index];   
}
cout<<endl;
average=sum/number;

cout<<sum;
cout<<endl;
cout<<average;
}