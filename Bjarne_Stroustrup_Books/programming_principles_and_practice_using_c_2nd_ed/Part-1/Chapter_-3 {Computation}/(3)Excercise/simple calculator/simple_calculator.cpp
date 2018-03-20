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
double first_argument,second_argument,result{0.0};
char operation;
cout<<"Enter the two arguments follwwed with the operation(+,-,*,/)"<<endl;
while(cin>>first_argument>>second_argument>>operation)
{
if(operation=='+')
{
result=first_argument+second_argument;
cout<<"The sum of "<<first_argument<<"and "<<second_argument<<" is "<<result<<endl;
}

else if(operation=='-')
{
result=first_argument-second_argument;
cout<<"The sum of "<<first_argument<<"and "<<second_argument<<" is "<<result<<endl;
}

else if(operation=='*')
{
result=first_argument*second_argument;
cout<<"The sum of "<<first_argument<<"and "<<second_argument<<" is "<<result<<endl;
}
else if(operation=='/')
{
result=first_argument/second_argument;
cout<<"The sum of "<<first_argument<<"and "<<second_argument<<" is "<<result<<endl;
}
else
cout<<"Invalid input of operation , Please Try Again!"<<endl;

}
return 0;
}
