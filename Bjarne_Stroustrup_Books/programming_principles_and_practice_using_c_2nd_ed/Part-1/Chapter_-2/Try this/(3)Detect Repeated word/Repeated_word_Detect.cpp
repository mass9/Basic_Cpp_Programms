
#include<std_lib_facilities.h>

using namespace std;
int main()
{
string previous ="" ; //previous word , first no word is instialized
string current;




while(cin>>current){ 
  if(previous==current)
     cout<<"Repeated Words ="<<current<<endl;
    
     previous = current;

 }
keep_window_open();
 return 0;
}
