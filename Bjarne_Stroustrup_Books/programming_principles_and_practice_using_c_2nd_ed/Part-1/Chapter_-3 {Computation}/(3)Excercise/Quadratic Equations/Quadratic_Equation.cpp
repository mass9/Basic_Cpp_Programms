#include<std_lib_facilities.h>
using namespace std;

int main()
{
double a,b,c,x1,x2,discriminant;
cout<<"Enter the values of a,b,c to form quadratic Equation  \n";
cin>>a>>b>>c;

cout<<"The following Quadratic Equation formed \n";
cout<<" "<<a<<"x2 + "<<b<<"x + "<<c<<" = 0"<<endl;

discriminant=(b*b)-(4*a*c);
  if(discriminant>0)
      { 
      cout<<"The value of discriminant is Greater than 0\n";
       cout<<"This means that the Roots of Quadratic equation is real and different \n";
       x1=(-b+sqrt(discriminant))/(2*a);
       x2=(-b+sqrt(discriminant))/(2*a);
  cout << "Roots are real and different." << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
}
  else if (discriminant==0)
     {

     cout << "Roots are real and same." << endl;
        x1 = (-b + sqrt(discriminant)) / (2*a);
        cout << "x1 = x2 =" << x1 << endl;

     } 
   else 
{
double realPart,imaginaryPart;
     realPart = -b/(2*a);
        imaginaryPart =sqrt(discriminant)/(2*a);
        cout << "Roots are complex and different."<< endl;
        cout << "x1 = " << realPart << "+" << imaginaryPart << "i" << endl;
        cout << "x2 = " << realPart << "-" << imaginaryPart << "i" << endl;
    }


}
}
return 0;
}
