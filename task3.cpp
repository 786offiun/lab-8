#include<iostream>
using namespace std;
main()
{ int size,number;
bool check = true;
cout<<"enter the size:";
cin>>size;
int array[size];
cout<<"enter the required no:";
cin>>number;
for(int index=0; index<size; index++)
{

cout<<"enter the the"<<index+1<<endl;
cin>>array[index];
}
for(int index=0; index<size; index++)\
{
  if(array[index]==number)
  {
    check=false;
    break;
  }


}

if(check==false)
{

    cout<<"number is presenmt:";
}
else{

    cout<<"number is not present :";
}



}