#include<std_lib_facilities.h>

int main()
{
 int  n1,n2,n3 ;
 int smallest=0;
 int middle=0;
 int largest=0;
 cout<<"Enter 3 number of your choice "<<endl;
 cin>>n1>>n2>>n3;

  if(n1<=n2 && n1<=n3)
  { smallest=n1;

    if(n2<=n3)
    {
     middle=n2;
     largest=n3;
     }

	else
      { 
      middle=n3;
      largest=n2;
      }

    }

 if(n2<=n1&& n2<=n3)
{ 
 smallest=n2; 
    if(n3<=n1)
    { 
     middle=n3;
     largest=n1;
     }
 else
    { 
     middle=n1;
     largest=n3;
     }

 }

 if(n3<n2 && n3<n1)
  {
 smallest=n3;
     if(n2<n1)
      { 
       middle=n2;
       largest=n1;
       }

   else
       { 
         middle=n1;
         largest=n2;
       }
}
 cout<<"Sorted values = "<<smallest<<","<<middle<<","<<largest<<endl;

return 0;
}

