#include<std_lib_facilities.h>

int main()
{
string first_name, friend_name;
char friend_sex;
int age;
cout<<"Enter the name of the person you want to write this letter to "<<endl;

cin>>first_name;
cout<<"Enter the name of friend of whom you wanna ask about"<<endl;
cin>>friend_name;
cout<<"Enter the sex of the friend you wanna ask about"<<endl;
cin>>friend_sex;
cout<<"Enter the age of person you are writing letter"<<endl;
cin>>age;
cout<<"Dear "<<first_name<<", "<<endl;
cout<<"How are you? I am fine. I miss you"<<endl;
cout<<"Its been a quite a while , many things have been change this year !"<<endl;
cout<<"I hope you are doing good in your respectuve field , and all the best for your job interviews"<<endl;
cout<<"I am all good here , got some fine collection of music"<<endl;
cout<<"I promise to bring up all the stored data of games for you , when i visit there ";
cout<<"Have you seen  "<<friend_name<<"  lately ?"<<endl;
 if(friend_sex=='m')
 cout<<"If you see  "<<friend_name<<" please ask him to call me "<<endl;
  else
   cout<<"If you see"<<friend_name<<"please ask her to call me"<<endl;

if(age<=0 || age> 100)
 simple_error("You are kidding!");

if(age <=12)
cout<<"Next year you will be "<<age+1<<endl;
else if(age==17)
  cout<<"Next year you will be able to vote"<<endl;
 else
   cout<<"I hope you are enjoying your Retirement"<<endl;

cout<<"Yours Sincerely"<<endl;
cout<<"Prashant Godfrey"<<endl;
return 0;
}
