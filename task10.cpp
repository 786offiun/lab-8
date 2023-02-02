
#include<iostream>
using namespace std;
main()
{
    string name;
    int count;
    cout<<"enter the name:"<<endl;
    getline(cin,name);
      count= name.length();
if(count%2==0)
{

    cout<<"even";
}
else
{

    cout<<"odd";
}
}