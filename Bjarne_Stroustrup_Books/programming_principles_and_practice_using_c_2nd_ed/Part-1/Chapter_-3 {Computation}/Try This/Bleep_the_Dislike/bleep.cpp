#include"std_lib_facilities.h"
using namespace std;

int main(){
vector<string>abuse={"Fuck","Shit","MotherFucker","Asshole","Dildo","HolyShit","Ass","Kiss my Ass","Vagina","Boobs","Intercourse","Butt","Penis","fuck","shit","motherFucker","asshole","dildo","holyshit","ass","kiss my Ass","vagina","boobs","intercourse","butt","penis"};

vector<string>words;
cout<<"Enter the words \n";\
string temp;
while(cin>>temp){
for(int i=0;i<abuse.size();i++)
{
 if(temp==abuse[i])
   cout<<"BLEEP ! , Watch your language \n";
words.push_back(temp);
}

}
return 0;}
