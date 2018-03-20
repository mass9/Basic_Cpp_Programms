#include<std_lib_facilities.h>
using namespace std;

int main()
{
	int variable;    //For initialisation of the score
	string s;        //For initalisation of the name
	vector<string>name;
	vector<int>scores;
	cout<<"Enter the name followed your scores\n";
	while(cin>>s>>variable && s!="NoName")
	{ if(s=="|")
	   break;
	  name.push_back(s);
	 scores.push_back(variable);

	}


	for (int i=0; i<name.size(); ++i)
	cout << "\t" << name[i] << ',' << scores[i] << "\n";
	keep_window_open();

	string n;;
	cout<<"Enter the name whose score you want to find \n";
	while( cin>>n)
	{  
		 for(int i=0; i<name.size(); ++i)
		{   if(n==name[i])
		cout << "\t "<<"The score is: " << scores[i] << "\n";
		   
		  if(n !=name[i] )
		  cout<<"Number not found";
		}
	}
keep_window_open();

	int n1;
	cout<<"Enter the score to know te name of that person \n";
	while( cin>>n1)
	{
		  for(int i=0; i<name.size(); ++i)
		 {  if(n1==scores[i])
			cout << "\t "<<"The name is " << name[i] << "\n";
	
		 if(n1!=scores[i])
			 cout<<"Score not found";

		}
	}
return 0;
}
