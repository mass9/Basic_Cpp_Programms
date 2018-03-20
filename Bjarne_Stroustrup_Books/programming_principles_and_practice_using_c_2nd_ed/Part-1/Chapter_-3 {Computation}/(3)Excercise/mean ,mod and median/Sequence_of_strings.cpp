#include<std_lib_facilities.h>
    using namespace std;
 

int main()
{
vector<string>t;
for(string x;cin>>x;)
  t.push_back(x);

sort(t);
cout<<"Sorted list is \n";
for(int i=0; i<t.size(); ++i)
      cout<<t[i]<<"\n";

string min;
string max;

max =t[t.size()-1];
min = t[0];

cout<<"Min  :"<<min<<endl;
cout<<"MAx  :"<<max<<endl;


//Mode 
 

 int maxCount=1;
     int count=1;
    string value;
for(int i=0;i<t.size();i++)
    {
   
        for(int j=0;j<t.size();j++)
            {
              if(t[i]==t[j])
                     count++;
             } 
         
      if(count>maxCount)
      {maxCount = count;
       value=t[i];
   }
    count=1;
}
cout<<"Mode :"<<value <<endl;



return 0;
    }
