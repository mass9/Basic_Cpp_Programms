#include<std_lib_facilities.h>
#include<ctime>      //Its time calling function , which help srand to seed the randomness
using namespace std;

int main()
{
	int v1;  // It will stone the value of computer 
	string computer,user;
	cout<<"Enter your choice to Play \n"<<"Stone\n"<<"Paper\n"<<"Scissor\n"<<"And Your choice is : \n";
while(cin>>user){      //Loop is there for Unlimited fun 
	srand((int)time(0));   //srand funtion is main function to create randomness
	v1=rand()%3+1;         //random fundtion ...3+1 state that it will go from 1 to 3

		switch(v1)             //By random number we can get the random string
		{
			 case 1:
			 computer="stone";
			 break;

			case 2: computer="scissor";
			break;

			default:
			 computer =" paper";


		}
		cout<<"The User choice is : \n"<<user<<endl;

		cout<<"The Compuer choice is : \n"<<computer<<endl;

	if(user=="paper"&&computer =="stone"||user=="stone"&&computer=="scissor")
    cout<<"User is a Winner\n";

	  else if (computer=="paper"&&user=="stone"||computer=="stone"&&user=="scissor")
            cout<<"Computer is a Winner\n";

		 else
		  cout<<"CLASH:Same choice by both \n"<<"Try Again , I know you can win \n";
		cout<<"Your choice is \n";
 }
return 0;
}
