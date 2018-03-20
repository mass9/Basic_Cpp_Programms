#include"std_lib_facilities.h"
#include<limits.h>
using namespace std;

int fibonacci(int x)   // Here the funtion starts its counting to the limit
{
	int low=1, high=2,next_term; 
	cout<<" ,"<<low<<" "<<high;

	while(low<high)
	{
	cout<<low<<" , ";
	next_term=high + low;

	low = high;
	high=next_term;

	}

	cout<<"The highest value that fits in is "<<low<<"\n";
	return 0;
}
int main()
try{         
	int b = INT_MAX; //it is the higest value stored in limits.h
	
	fibonacci(b);    // call the funtion 
	return 0;
}

catch(runtime_error& e)
{
cout<<" Error "<<e.what();
}
