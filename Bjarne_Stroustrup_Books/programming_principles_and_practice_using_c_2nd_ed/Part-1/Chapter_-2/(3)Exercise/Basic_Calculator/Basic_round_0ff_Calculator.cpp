#include<std_lib_facilities.h>

int main()
{
int val1 ,val2;
int add,sub,prod,ratio;
cout<<"Enter two number of your choice"<<endl;
cin>>val1>>val2;

if(val1>val2)
 cout<<"First number is Greater "<<endl;
 else
 cout<<"Second number is Greater "<<endl;

add = val1 + val2 ;                   //Addition of two numbers
sub = val2 - val1 ;                  //Difference of two numbers 
prod = val1*val2  ;                 //product of two numbers
ratio = val1/val2  ;                //ratio of two numbers

cout<<"Addition of two values are: "<<add<<endl;

cout<<"Difference between two values are: "<<sub<<endl;

cout<<"Product of two values are: "<<prod<<endl;

cout<<"Ratio of two values are: "<<ratio<<endl;

return 0;
}
