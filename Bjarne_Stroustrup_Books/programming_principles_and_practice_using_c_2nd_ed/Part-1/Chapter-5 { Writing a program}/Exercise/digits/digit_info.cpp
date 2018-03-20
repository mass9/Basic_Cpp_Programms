
#include "std_lib_facilities.h"	


int main()
try
{
	vector<int> digit;		// collect digits here
	vector<string> unit;	// unit names go here
	unit.push_back(" ones ");
	unit.push_back(" tens ");
	unit.push_back(" hundreds ");;
	unit.push_back(" thousands ");
	unit.push_back(" tens of thousands ");
	unit.push_back(" hundreds of thousands ");
	unit.push_back(" millions ");
	unit.push_back(" tens of millions ");
	unit.push_back(" hundreds of millions ");


	cout << "Please enter an integer with no more than " << unit.size()
		<< "\ndigits : ";
	char ch;
	while (cin>>ch){					
		if (ch<'0' || '9'<ch) break;	
		digit.push_back(ch-'0');     //it will store as integer
	}

	if (digit.size()==0) error("no digits");
	if (unit.size()<digit.size()) error("Sorry, cannot handle that many digits");

	// write out the number:
	for (int i =0; i<digit.size(); ++i)
		cout << char('0'+digit[i]);  //Typre casting
	cout << '\n';

	// write the digits with their units
	// also compute the integer value:
	int num = 0;
	for (int i = 0; i<digit.size(); ++i) {
		if (digit[i])	
			cout << digit[i] << unit[digit.size()-i-1];
		num = num*10+digit[i];
	}
	cout << "\nthat is " << num << '\n';

	keep_window_open("~");	
}
catch (runtime_error e) {	
	cout << e.what() << '\n';
	keep_window_open("q");	
}



