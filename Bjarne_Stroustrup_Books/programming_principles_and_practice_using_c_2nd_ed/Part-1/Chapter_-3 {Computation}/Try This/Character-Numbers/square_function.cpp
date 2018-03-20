#include<std_lib_facilities.h>
using namespace std;
void square(int v)
{
for(int i=0;i<=v*v;i++)     //Loop from 0 to the Square of that number
cout<<i<<'\n';              //for showing output
}
int main()
{
 int n;
cout<<"Enter the number you want the square"<<endl;
cin>>n;
square(n);

return 0;
}
