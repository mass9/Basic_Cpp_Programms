#include <iostream>
using namespace std;
// Variable declaration:
extern int a, b;    //We will use extern keyword to declare a variable at any place. 
extern int c;
extern float f;
int main ()
{
// Variable definition:
int a, b;
int c;
float f;
// actual initialization
a = 10;
b = 20;
c = a + b;
cout <<"The result of addition of the integer = "<< c << endl ;
f = 70.0/3.0;
cout << "The result of division of the integer = "<<f << endl ;
return 0;
}
