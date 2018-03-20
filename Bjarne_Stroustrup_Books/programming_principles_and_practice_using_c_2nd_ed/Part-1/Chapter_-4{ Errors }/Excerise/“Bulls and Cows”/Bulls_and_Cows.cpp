#include<std_lib_facilities.h>
#include<ctime>
using namespace std;

vector<int>ui; //user input
vector<int>ci(4); //computer input
int track=0; // to track the status of the user input in program
int bull=0;
int cow=0;
int const guess=4;//only 4 number are allowed my smart boy


//this is the function which will use to generate the  random number
//the random suffle will suffle the result in the vector of computer input
int rand_gene(int p) 
 
{
	 srand(p);
	 for (int i=0; i <ci.size(); i++)
          ci[i] = randint(9);
 
 }
//This fuction will check for the repeatness in a user input
//This function will also warn the user if they entered the value is more than 9 as this exceeds the range

int input_check(int y)
{
 	for(int i=0;i<ui.size();i++)
 	{if(track>0 && y==ui[i])
 	   error("Two number cannot be same");
	}
	 if(y>9)
	   error("The entered number is greater than ( kindly put the number between 0 to 9");
 ui.push_back(y);
}


//This function tell us about the score of the programme
int bull_cow()
{
	 if(ui[track]==ci[track])
	  {
	     bull+=1;
	  }
	 for(int i=0;i<guess;i++)
	  {
	     if(ui[track]==ci[i] && ui[track]!=ci[track])
	      cow+=1;
	  }
}


//When user have entered all the correct answer
int win_game(int x)
{
	if(x==guess)
	 cout<<"You got the right answer ! , Celebrate it now with MODALS \n";
	
	return 0;
}
	

//This fuction will activate when user have entered 4 values and also tell how many inputs it have been taken by user to guess the correct number
void end_guess()
{

	if(track==guess ){
	   cout<<"Bull:  "<<bull<<" Cows :"<<cow;
	   ui.erase(ui.begin(),ui.end());
	   bull=0;
	cow=0;
	track=0;//set everything back to intial value , Which means zer0
	}

}


int main()
try{
	char choice{'y'};

	int n=0;


	while(choice=='y' || choice=='Y' ){
	 cout<<"Please enter the number ";
	cin>>n;
	rand_gene(n);

	cout<<"Enter 4 digit , press enter after each digit\n";

	int inputs;
	while(ui.size()<guess && cin>>inputs){
      	input_check(inputs);
        bull_cow();
        ++track;
        win_game(bull);
      
        }
	for(int x: ci)
		cout<<x<<", ";
       end_guess();
	cout << "\nYou want to play more (y/n): ";
	cin >> choice;

	if (choice != 'y' && choice != 'Y' && choice != 'n' && choice != 'N')
				error("Wrong choice , use your God Damm mind");		
    		if(ui.size()>guess){error("only 4 guess");}
     	}


	keep_window_open();	

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

