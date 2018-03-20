#include"std_lib_facilities.h"     //Bjarne Stroustrup book header file (programming principles and practices using c++)
using namespace std;

int main()
try{
	vector<double>inputs;
	vector<double>diffs;
	double values,sum=0;

	cout<<"Please enter the number of values you want to sum\n";

       if(!(cin>>values))error("You need to enter the correct number !!\n"); //if entered value is not a double.
		

	if (values<0) error("the number of elements must be a positive integer"); //if number entered is negative
         
	cout<<"Please enter some integers\n";
	 for(int temps;cin>>temps;){
	    inputs.push_back(temps);
            if(inputs.size()>=2)
                 diffs.push_back(temps-inputs[inputs.size()-2]);
                  }

                 if(inputs.size()<2)
                 {
                     error("There must be two values ,so that difference operation can take place\n");
	}else
           {
             cout << "Vector of differences:\n";
		for (int i = 0; i < diffs.size(); ++i)
			cout << diffs[i] << endl;
	   }

        


		if (inputs.size()<values) error("too few numbers; we need ", values);  //if user asked for sum of more numbers present in vector


	 for(int i=0;i<values;++i){

	  sum+=inputs[i];
	 }
           
	cout << "The sum of the first " << values << " numbers ( ";

	for (int i = 0; i<values; ++i) cout << inputs[i] << ' ';
	cout << ") is " << sum << '\n';

	return 0;
	}

catch(runtime_error& e) {	// this code is to produce error messages
	cout << e.what() << '\n';
	return 1;
}
catch(...)
{
cerr<<"Uknown Exception\n";
	return 2;
}
