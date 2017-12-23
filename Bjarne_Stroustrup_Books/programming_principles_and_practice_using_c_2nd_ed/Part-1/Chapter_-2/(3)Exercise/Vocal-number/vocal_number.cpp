#include<std_lib_facilities.h>
#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
int main()
{
string s;
cout<<"Enter the number in vocal form"<<endl;

while(cin>>s)
{
 if(s=="zero")
  cout<<"0"<<endl;
  else if(s=="one")
  cout<<"1"<<endl;
    else if(s=="two")
     cout<<"2"<<endl;
       else if(s=="three")
        cout<<"3"<<endl;
         else if(s=="four")
           cout<<"4"<<endl;
            else
             cout<<"Not a number i know";

}
return 0;
}
