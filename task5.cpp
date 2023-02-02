#include<iostream>
using namespace std;
main()
{ int size,number;
    cout<<"enter the size:";
    cin>>size;
    int array[size];
    cout<<"enter the number:";
    cin>>number;
    for(int index=0; index<size; index++)
    {
     cout<<"enter the value:"<<index+1<<" ";
     
     cin>>array[index];
    }
   for(int index=size-1; index>=size; index--)
   {
    cout<<array[index]*number<<endl;

   }
   

}