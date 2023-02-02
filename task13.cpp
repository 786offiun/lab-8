
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
    if(latter[index]=='a')
    {
        latter[index]='b';
    }
    else if(latter[index]=='b')
    {
        latter[index]='c';
    }
    else if(latter[index]=='c')
    {
        latter[index]='d';
    }
    else if(latter[index]=='d')
    {
        latter[index]='e';
    }
    else if(latter[index]=='e')
    {
        latter[index]='f';
    }
    else if(latter[index]=='f')
    {
        latter[index]='g';
    }
  else  if(latter[index]=='g')
    {
        latter[index]='h';
    }
else if(latter[index]=='h')
    {
        latter[index]='i';
    }



    else if(latter[index]=='i')
    {
        latter[index]='j';
    }
    else if(latter[index]=='j')
    {
        latter[index]='k';
    }
    else if(latter[index]=='k')
    {
        latter[index]='l';
    }
    else if(latter[index]=='l')
    {
        latter[index]='m';
    }
    else if(latter[index]=='m')
    {
        latter[index]='n';
    }
    else if(latter[index]=='n')
    {
        latter[index]='o';
    }
    else if(latter[index]=='o')
    {
        latter[index]='p';
    }
    else if(latter[index]=='p')
    {
        latter[index]='q';
    }
    else if(latter[index]=='q')
    {
        latter[index]='r';
    }
    else if(latter[index]=='r')
    {
        latter[index]='s';
    }
    else if(latter[index]=='s')
    {
        latter[index]='t';
    }
    else if(latter[index]=='t')
    {
        latter[index]='u';
    }
    else if(latter[index]=='u')
    {
        latter[index]='v';
    }
    else if(latter[index]=='v')
    {
        latter[index]='w';
    }
    else if(latter[index]=='w')
    {
        latter[index]='x';
    }
    else if(latter[index]=='x')
    {
        latter[index]='y';
    }
    else if(latter[index]=='y')
    {
        latter[index]='z';
    }
    else  if(latter[index]=='z')
    {
        latter[index]='a';
    }
      
cout<<latter[index];
 index=index+1;}
}