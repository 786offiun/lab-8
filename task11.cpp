
#include<iostream>
using namespace std;
main()
{
    string name;
    char required;
    cout<<"enter the name:"<<endl;
    getline(cin,name);
    cout<<"enter the character required:"<<end;
    cin>>required;
    bool check=false;
    int i=0;
      while(name[i]!='\0')
      {
          if(name[i]==required)
          {

            check=true;
             break;
          }
               i=i+1;
              
          
      }
      if(check=true)
      {

        cout<<"present";
      }
      else
      {

        cout<<"not present:";
      }
      
      }