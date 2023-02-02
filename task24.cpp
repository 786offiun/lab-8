
#include <iostream>
using namespace std;
main()
{
 string latter;
 cout<<"enter a latter:"<<endl;
 getline(cin,latter);
 int index=0;
 while(latter[index]!='\0')
 {
    if(latter[index]=='a'||latter[index]=='i'||latter[index]=='e'||latter[index]=='u'||latter[index]=='o')
    {
         index=index+1;
         continue;
       

    }
    
     cout<<latter[index];
      index=index+1;

 }
}