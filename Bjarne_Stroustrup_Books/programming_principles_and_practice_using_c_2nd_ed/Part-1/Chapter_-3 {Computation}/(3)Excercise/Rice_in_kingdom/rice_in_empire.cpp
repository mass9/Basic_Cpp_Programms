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

int m,n;
cout<<"Enter the number of grains \n";
while(cin>>m)
{
cout<<"Enter the number of grains \n";
char ch;
n=log10(m)/log10(2);

cout<<"For "<<m<<" grains , Number of squares needed are "<<n<<" squares "<<endl;
cout<<"For exit use | \n";
if(ch=='|')
break;
}
return 0;
}
