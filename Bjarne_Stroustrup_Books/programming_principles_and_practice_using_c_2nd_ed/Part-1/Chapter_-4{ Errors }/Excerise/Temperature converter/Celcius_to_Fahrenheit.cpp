#include<std_lib_facilities.h>
using namespace std;


double ctof(double c)
{
if(c<=-32)
 error("The value cannot be less than -32 C,Try Again \n");

int f = ((9/5)*c) + 32;
return f;
}

double ftoc(double k)
{
if(k<= 0)

error("The value cannot be less than 0,Try Again \n");

int c=((k-32)*5)/9;
return c;
}

int main()
try{
double number,Celsius =0.0, Fahrenheit=0.0;
string unit;
cout<<"Enter the temperature follow by its unit \n";
cin>>number>>unit;
 if(unit=="C"||unit=="c" ){ 
cout<<"Conversion for Celcious to Fahrenheit takes place \n";
double Fahrenheit1 =ctof(number);
cout<< Fahrenheit1<<" F"<< '\n' ;
}

 if(unit=="F"||unit=="f" ){
cout<<"Conversion for Fahrenheit to Celcious takes place \n";
double celsius1 =ftoc(number);
cout<<celsius1<<" C"<< '\n' ;
}


}

catch (runtime_error& e)
 {
cout<<" "<<e.what();
}

