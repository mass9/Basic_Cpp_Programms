#include<std_lib_facilities.h>
using namespace std;

int main()
{
string operation;
double first_operand,second_operand;

cout<<"Enter an Operation followed by two operands"<<endl;

while(cin>>operation>>first_operand>>second_operand)
{
if(operation=="+" || operation=="plus")                              //Addition of operands
{
cout<<"Result = "<<first_operand+second_operand<<endl;
}

else if(operation=="-"|| operation=="minus")                               //Subtration of operands
{ 
cout<<"Result = "<<first_operand-second_operand<<endl;
}

else if(operation=="*" || operation=="mul")                                //Multiplication of operands
{ 
cout<<"Result = "<<first_operand*second_operand<<endl;
}

else if(operation=="/" || operation=="div")                                //Division of operands
{ 
if(second_operand==0)
{
cout<<"Error : You cannot divide by zer0 "<<endl<<"Please use a number other than zer0"<<endl;
}
else
{
cout<<"Result = "<<first_operand/second_operand<<endl;
}
}

else 
{
cout<<"Wrong operator ..Please Try again : " ;}
}
return 0;
}
