#include<std_lib_facilities.h>
using namespace std;
/* 

Pseudo code Input: an integer n > 1.
 
 Let A be an array of Boolean values, indexed by integers 2 to n,
 initially all set to true.
 
 for i = 2, 3, 4, ..., not exceeding √n:
   if A[i] is true:
     for j = i2, i2+i, i2+2i, i2+3i, ..., not exceeding n:
       A[j] := false.
 
 Output: all i such that A[i] is true.
*/
int main()

{

	vector<int>A(100000);
	int max;
	cout<<"Enter the maximum value \n";
	cin>>max;
	for (int i = 2; i < max; i++)
	{
		 for (int j = i * i; j < max; j+=i)
		{
	            A[j - 1] = 1;
		 }
	}

	for (int i = 1; i < max; i++)
	    {
	        if (A[i - 1] == 0)
	            cout << i << "\t";
		}
	cout<<'\n';
}
