
#include<iostream>
using namespace std;
main()
{    string name;
    cout<<"enter the name:"<<endl;
    getline(cin,name);
     int counter=0;
     int i =0;
    while(name[i]!='\0')
    {
        if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u')
         {
           counter=counter+1;


         }
 
          i=i+1;
 
 
    }

cout<<counter;


}