#include<std_lib_facilities.h>
using namespace std;
vector<string>days;

vector<int>values;

vector<string>rejected;

bool check_validity(string s)

{
if(s=="Monday" || s=="Mon" || s=="monday"||s=="mon")
 return true;
 else if(s=="Tuesday" || s=="Tue" || s=="tuesday" || s=="tue")
	 return true;
   else if(s=="Wednesday" || s=="Wed" || s=="wednesday" || s=="wed")
		 return true;
     else if(s=="Thursday" || s=="Thur" || s=="thursday"|| s=="thur")
			 return true;
         else if(s=="Friday" || s=="Fri" || s=="friday" || s=="fri")
				 return true;
              else if(s=="Saturday" || s=="Sat" || s=="saturday" || s=="sat")
					 return true;
                   else if(s=="Sunday" || s=="Sun" || s=="sunday" || s=="sun")
						 return true;
                     else
			{ rejected.push_back(s); 
                      return false;
			}
}

int main()
try{
	cout<<"Please enter the days followed by values\n";
	int x;
	string y;
	while(cin>>y>>x)
	{if(check_validity(y))//To check if the entered name of day is true or not
 		{  values.push_back(x);
  			days.push_back(y);
		}

	}
	cout<<"The Accepted days are \n";
	for(string a : days){

	cout<<"\t"<<a;
	}

		cout<<endl;

	int sum=0;

	cout<<"The values you have entered for accepted days are  ";
	for(int b : values)
		{
		cout<<endl;
		sum+=b;
		cout<<"\t"<<b;

		}
	cout<<endl;
	cout<<"Sum is "<<sum<<"\n";
	cout<<"Rejected days  are \n";
		for(string w : rejected)
		{
	
		cout<<w<<"\t";
		}
	return 0;
}

catch(runtime_error& e)
{
cout<<e.what();
return 1;
}
