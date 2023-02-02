#include<iostream>
using namespace std;
main()
{ int size;
    cout<<"enter the size:";
    cin>>size;
    int array[size];
    for(int index=0; index<size; index++)
    {
     cout<<"enter the value:"<<" "<<index+1;
     
     cin>>array[index];
    }
   
   for(int index=size-1; index>=0; index--)
{

    cout<<array[index];
    cout<<endl;
}


}