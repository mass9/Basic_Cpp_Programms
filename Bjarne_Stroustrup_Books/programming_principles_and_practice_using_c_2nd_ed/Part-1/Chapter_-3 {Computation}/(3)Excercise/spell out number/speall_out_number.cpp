#include<iostream>
#include<fstream>
#include<sstream>
#include<cmath>
#include<cstdlib>
#include<string>
#include<list>
#include<vector>
#include<algorithm>
#include<stdexcept>
using namespace std;

int main()
{
vector<int>digit{0,1,2,3,4,5,6,7,8,9};
vector<string>spell{"zero","one","two","three","four","five","six","seven","eight","nine"};
cout<<"Enter the spell out of number between 0-9"<<endl;
for (int i=0; i<digit.size(); ++i)
{for(string x; cin>>x;)
 {
 
if(x=="|")
break;
 if(x=="zero")
   cout<<digit[0]<<endl;
   else if(x=="one")
    cout<<digit[1]<<endl;
    else  if(x=="two")
     cout<<digit[2]<<endl;
     else  if(x=="three")
      cout<<digit[3]<<endl;
      else  if(x=="four")
       cout<<digit[4]<<endl;
       else if(x=="five")
        cout<<digit[5]<<endl;
        else if(x=="six")
         cout<<digit[6]<<endl;
         else  if(x=="seven")
          cout<<digit[7]<<endl;
          else if(x=="eight")
          cout<<digit[8]<<endl;
           else if(x=="nine")
           cout<<digit[9]<<endl;
            else
            cout<<"Invalid input, Try again"<<endl;

 cout<<"To exit  from this loop, type |"<<endl;
}
}

cout<<"Enter the number between 0-9"<<endl;
for (int i=0; i<spell.size(); ++i)
{for(int y; cin>>y;)
 {
 if(y==0)
   cout<<spell[0]<<endl;
   else if(y==1)
    cout<<spell[1]<<endl;
    else  if(y==2)
     cout<<spell[2]<<endl;
     else  if(y==3)
      cout<<spell[3]<<endl;
      else  if(y==4)
       cout<<spell[4]<<endl;
       else if(y==5)
        cout<<spell[5]<<endl;
        else if(y==6)
         cout<<spell[6]<<endl;
         else  if(y==7)
          cout<<spell[7]<<endl;
          else if(y==8)
          cout<<spell[8]<<endl;
           else if(y==9)
           cout<<spell[9]<<endl;
            else
            cout<<"Invalid input, Try again"<<endl;

 cout<<"To exit  from this loop, type |"<<endl;
}
}
return 0;
}
