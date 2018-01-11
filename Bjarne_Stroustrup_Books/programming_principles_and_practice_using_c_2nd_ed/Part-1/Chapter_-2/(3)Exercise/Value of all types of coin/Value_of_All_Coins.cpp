#include<std_lib_facilities.h>
using namespace std;

int main()
{
double pennies,nickels,dimes,quarters,half_dollars,cents;
double dollars;
cout<<"How many pennies do you have ?"<<endl;
cin>>pennies;

cout<<"How many nickels do you have ?"<<endl;
cin>>nickels;

cout<<"How many dimes do you have ?"<<endl;
cin>>dimes;

cout<<"How many quarters do you have ?"<<endl;
cin>>quarters;

cout<<"How many Half dollars do you have ?"<<endl;
cin>>half_dollars;

cout<<"You have "<<pennies<<" pennies"<<endl;

cout<<"You have "<<nickels<<" nickels"<<endl;

cout<<"You have "<<dimes<<" dimes"<<endl;

cout<<"You have "<<quarters<<" quarters"<<endl;

cout<<"You have "<<half_dollars<<" half dollars"<<endl;


cout<<"The values of all of your coins is "<<pennies+5*nickels+10*dimes+25*quarters+50*half_dollars<<" cents"<<endl;

cout<<"You have $ "<<(pennies+5*nickels+10*dimes+25*quarters+50*half_dollars)/100<<endl;



return 0;
}
