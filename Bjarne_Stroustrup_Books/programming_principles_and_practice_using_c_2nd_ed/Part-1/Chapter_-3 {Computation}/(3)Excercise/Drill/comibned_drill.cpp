#include<std_lib_facilities.h>
using namespace std;

double convert_unit_meter(double distance, string unit)
{
	double distance_in_m{ 0 };
	if (unit == "cm")
		distance_in_m = distance/100.0;
	else if (unit == "m")
		distance_in_m = distance;
	else if (unit == "in")
		distance_in_m = 2.54 * distance / 100.0;
	else if (unit == "ft")
		distance_in_m = 12 * 2.54 * distance / 100.0;

	return distance_in_m;
}


int main()
{
	double number{ 0 };
	double smallest{ 0.0 };
	double largest{ 0.0 };
        int round{0};
        double sum_in_m{ 0.0 };
	string unit; //Unit of distance
        vector<double>list_of_values;
	cout << "Please enter distance with unit(To exit type '|'): ";


	while (cin >> number>> unit) //If number are double cin>>number is true else it is false
	{
	if (unit == "cm" || unit == "in" || unit == "ft"||unit == "m")
		{
			double converted_distance = convert_unit_meter(number, unit); //Call the function and do the required converion.
			sum_in_m += converted_distance;

			if (round == 0) //If the loop is run for first time the smallest and largest is assigned the value of number.
				smallest = largest = converted_distance;

			if (converted_distance < smallest) //Check if the new number is smmaller than than the samallest number
			{
				smallest = converted_distance;//Overwrite the largest number
				cout << smallest << " meter the samallest number so far.\n";
			}
			if (converted_distance > largest) //Check if the new number is larger than the largest number
			{
				largest = converted_distance; //Overwrite the largest number
				cout << largest << " meter is the largest number so far.\n";
			}

			list_of_values.push_back(converted_distance);
		}
		else
		{
			cout << "Vaiue illigal rejected\n\a";
			--round; //Take the loop number back if unwanted value is given.
		}

		round++;//Increase the round number
		cout << "\nEnter the number with unit(Type | to exit): ";
	}
	cout << "\n\tThe sum of entered values are: " << sum_in_m << " meter\n"
		<< "\n\tThe largest number is: " << largest << " meter\n"
		<< "\n\tThe smallest number is: " << smallest << " meter\n"
		<< "\n\tThe total number entered are: " << round << "\n"
		<< "\n\tThe list of all value stored is:\n\n";

     sort(list_of_values);
	for(double x:list_of_values)
               cout << "\t\t" << x << " meter \n";


 int maxCount=1;
     int count=1;
     double value=0;
for(int i=0;i<list_of_values.size();i++)
    {
   
        for(int j=0;j<list_of_values.size();j++)
            {
              if(list_of_values[i]==list_of_values[j])
                     count++;
             } 
         
      if(count>maxCount)
      {maxCount = count;
       value=list_of_values[i];
   }
    count=1;
}
cout<<"\t\t"<<"Mode :"<<value <<endl;





	return 0;
}
