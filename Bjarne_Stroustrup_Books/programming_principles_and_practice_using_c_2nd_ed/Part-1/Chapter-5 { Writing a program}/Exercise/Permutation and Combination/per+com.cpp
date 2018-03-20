#include"std_lib_facilities.h"
using namespace std;

int fact(int f)
{
    if(f > 1)
        return f * fact(f - 1);
    else
        return 1;
 
}

double permutation(int a , int b)
{
return fact(a)/fact(a-b);
}

double combination(int a, int b)
{
return permutation(a,b)/fact(b);
}

int main()
try{
  int x,y,n;
      cout<<"Enter the value of a and b \n";
     cin>>x>>y;
	cout<<"Select one from the following , Type 1 or 2 \n";
    	cout<<"(1)->Permutation \n"<<" (2)->Combination\n"<<"(3)->for both type 12\n";
        cin>>n;
      if(n==1)
         
             cout<<"Permutation of "<<x<<" and "<<y<<" is :"<<permutation(x,y)<<endl;
       else if (n==2)
             cout<<"Combination of "<<x<<" and "<<y<<" is :"<<combination(x,y)<<endl;
            else if(n==12){ cout<<"Permutation of "<<x<<" and "<<y<<" is :"<<permutation(x,y)<<endl;
cout<<"Combination of "<<x<<" and "<<y<<" is :"<<combination(x,y)<<endl;

                        }
           else 
            cout<<"Wrong input \n";
          
   
return 0;
}

catch(runtime_error& e){
	cout<<" "<<e.what();
	return 1;
}
catch(Range_error& r)
{
	cout<<" "<<r.what();
	return 2;
}
