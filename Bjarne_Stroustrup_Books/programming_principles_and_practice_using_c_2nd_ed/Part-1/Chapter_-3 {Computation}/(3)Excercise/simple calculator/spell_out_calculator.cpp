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

vector<string>numbers;
void intialize_number()
{
//This will intialized from zero to 10 varialble as we use in direct intialization 
  numbers.push_back("zero");    //numbers[0]
  numbers.push_back("one");     //numbers[1]
  numbers.push_back("two");     //numbers[2]
  numbers.push_back("three");   //numbers[3]
  numbers.push_back("four");    //numbers[4]
  numbers.push_back("five");    //numbers[5]
  numbers.push_back("six");     //numbers[6]
  numbers.push_back("seven");   //numbers[7]
  numbers.push_back("eight");   //numbers[8]
  numbers.push_back("nine");    //numbers[9]
  numbers.push_back("ten");     //numbers[10]
}

int get_number()
{
  int val ;
if(cin>>val) return val;  
cin.clear();              //clear the unwanted buffer

string s;
cin>>s;
for(int i=0;i<numbers.size();++i)  //To check weather entered string as number spell out is in string of vector or not
 if(numbers[i]==s)
  val=i;
return val;


}

int main()
{
    intialize_number();    //It is create so that every time we can use the variable
    cout<<"Enter the two floating point values seperated by and operator\n The operation can be + - * /  %  : ";
     while(true)//Until we give computational error or bad intput , the loop will be going on
{
       int val1=get_number();    //The first arguement
	
	char op=0;
	cin>>op;
	int val2=get_number();  //IF we did not created the function for value intialization , the intializtion in second arugement will not be possiable
	string oper;
	double result;

	switch(op)
	{
		case '+':
			oper = "The sum of ";
			result = val1+val2;     // sum of two variable
			break;
		case '-':
			oper = "The difference between ";
			result = val1-val2;    //differece of two variable
			break;
		case '*':
			oper = "The product of ";//product of two variable
			result = val1*val2; 
			break;
		case '/':
			oper = "The ratio of ";  //ratio of two variable
			if (val2==0) cout<<"trying to divide by zero";
			result = val1/val2; 
			break;
		case '%':
			oper = "The remainder of "; 
			if (val2==0) cout<<"trying to divide by zero (%)";
			result = val1%val2; 
			break;
		default:
				cout<<"It's the bad operator";
	}
                cout<<oper<<val1<<" and " <<val2<<" is "<<result<<endl;
}

return 0;
}
