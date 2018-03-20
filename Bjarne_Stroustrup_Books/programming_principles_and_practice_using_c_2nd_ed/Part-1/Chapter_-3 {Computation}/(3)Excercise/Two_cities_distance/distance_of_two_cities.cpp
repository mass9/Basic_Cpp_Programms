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

int main()
{
vector<double>distance_between_cities;
cout<<"Enter the distance between two cities on given route "<<endl;
for(double distance ; cin>>distance;)
    distance_between_cities.push_back(distance);
double smallest=0.0;
double largest=0.0;
double mean=0.0;
double sum=0.0;
int count=0;
for(double x : distance_between_cities)
{  sum+=x;
if (count==0)
   largest=smallest=x;
if(smallest>x)
{
   smallest=x;
}
else if(largest<x)
{
   largest=x;
}
count++;

  
}
cout<<"The total distance between two cities is :"<<sum<<endl;

cout<<"The smallest distance is : "<<smallest<<'\n';
cout<<"The largest distance is  : "<<largest<<'\n';
mean=sum/distance_between_cities.size();
cout<<"The mean of the distance between two cities are "<<mean<<'\n';

return 0;
}
