#include<iostream>
using namespace std;
main()
{ int size;
cout<<"enter the size:";
cin>>size;
int student[size];
for(int index=0; index<size; index++)
{

    cout<<"enter a valur of"<<index+1<<":"<<endl;
    cin>>student[index];
    
}
cout<<endl;
for(int index=0; index<size; index++)
{

    cout<<" "<<student[index];
    
}

}