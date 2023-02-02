
#include<iostream>
using namespace std;
main()
{ int size,number;
    cout<<"enter the size:";
    cin>>size;
    int array[size];
    int index=0;
   int smallest=array[index];
   
    for(int index=0; index<size; index++)
    {
     cout<<"enter the value:"<<index+1<<" ";
     
     cin>>array[index];
    }
   for(int index=0; index<size; index++)
   {
     if(array[index]<smallest)
      {
         smallest=array[index];


      }




   }
   cout<<smallest;

}