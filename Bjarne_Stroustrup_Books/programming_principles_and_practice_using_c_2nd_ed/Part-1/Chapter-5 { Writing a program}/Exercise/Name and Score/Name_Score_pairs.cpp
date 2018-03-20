#include<std_lib_facilities.h>
using namespace std;

//-----------------------------------------------------------------------------------

//The class is created just like token to retrive the various value and name

class Name_value
{
  public:
  string name;
   int value;
    Name_value(string s,int v)
      :name(s),value(v) {}

};
int main()
try{
	int v;    //For initialisation of the score
	string s;        //For initalisation of the name
	vector<Name_value>pairs; //  we created the vector of the class 
	cout<<"Enter the name followed your scores\n";
	while(cin>>s>>v && s!="NoName")
	{ for(int i=0;i<pairs.size();++i)
                  if(s==pairs[i].name)
                      error("Duplication : ",s);
         pairs.push_back(Name_value(s,v));

	}


	for (int i=0; i<pairs.size(); ++i)
	cout << '(' << pairs[i].name << ',' << pairs[i].value << ")\n";
	keep_window_open();


return 0;
}


catch (runtime_error e) {	// this code is to produce error messages;
	cout << e.what() << '\n';
	keep_window_open("~");	
}
catch (...) {	// this code is to produce error messages; 
	cout << "exiting\n";
	keep_window_open("~");	// For some Windows(tm) setups
}
