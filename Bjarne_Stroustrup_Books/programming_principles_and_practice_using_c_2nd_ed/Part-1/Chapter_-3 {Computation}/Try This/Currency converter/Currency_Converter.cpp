#include<std_lib_facilities.h>
using namespace std;

int main()
{
double dollar,euro,yen,pound;
const double dollar_per_euro=0.830198;
const double dollar_per_yen=111.396145;
const double dollar_per_pound=0.738356;
string conversion;

cout<<"Enter the Amount in Dollar followed by the Conversion you want "<<endl;
while(cin>>dollar>>conversion)
{
if(conversion=="euro")
 {
 if(dollar==1)
  {
   cout<<"The converted amount of $"<<dollar<<"  in euro is "<<dollar_per_euro<<" euro"<<endl;

  }
    else
  {
       cout<<"The converted amount of $"<<dollar<<"  in euros is "<<dollar_per_euro*dollar<<" euros"<<endl;
  }

 
}

else if(conversion=="yen")
  {
      if(dollar==1)
  {
   cout<<"The converted amount of $"<<dollar<<"  in yen is "<<dollar_per_yen<<" yen"<<endl;

  }
    else
  {
       cout<<"The converted amount of $"<<dollar<<"  in yens is "<<dollar_per_yen*dollar<<" yens"<<endl;
  }

  }


else if(conversion=="pound")
 {
if(dollar==1)
  {
   cout<<"The converted amount of $"<<dollar<<"  in pound is "<<dollar_per_pound<<" pound"<<endl;

  }
    else
  {
       cout<<"The converted amount of $"<<dollar<<"  in pound is "<<dollar_per_pound*dollar<<" pounds"<<endl;
  }
}

}


return 0;
}
