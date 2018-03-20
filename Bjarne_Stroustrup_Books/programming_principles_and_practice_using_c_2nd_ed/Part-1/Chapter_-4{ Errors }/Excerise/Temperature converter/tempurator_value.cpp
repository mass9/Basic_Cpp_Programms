#include<std_lib_facilities.h>
using namespace std;

double ctok(double c)
{
if(c<= -273)
 error("The value cannot be less than -273 C,Try Again \n");

int k = c + 273.15;
return k;
}

double ktoc(double k)
{
if(k<= 0)
 error("The value cannot be less than 0,Try Again \n");

int c=k- 273.15;
return c;
}

int main()
try{
double c = 0,k=0;
string u;
cout<<"Enter the temperature follow by its unit \n";
cin>>c>>u;
 if(u=="C"||u=="c" ){ 
cout<<"Conversion for Celcious to Kelvin takes place \n";
double k1 =ctok(c);
cout<< k1<<" K"<< '\n' ;
}

 if(u=="K"||u=="k" ){
cout<<"Conversion for Kelvin to Celcious takes place \n";
double c1 =ktoc(c);
cout<<c1<<" C"<< '\n' ;
}


}

catch (runtime_error& e)
 {
cout<<" "<<e.what();
}
