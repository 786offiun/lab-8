
#include<iostream>
using namespace std;
main()
{
    string name;
    cout<<"enter the name:"<<endl;
    getline(cin,name);
    int i =0;
    while( name[i]!='\0')
    {
                
           i=i+1;

    }
    i=i-1;
    cout<<i;
}