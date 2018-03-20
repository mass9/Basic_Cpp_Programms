#include<std_lib_facilities.h>
using namespace std;
vector<int>primes;

bool is_prime(int n)
{
     for(int x=0;x<primes.size();x++)
       if(n%primes[x]==0)
        false;
return true;
}
int main()
{
int max;
 primes.push_back(2);
cout<<"Enter the number upto which you want to find Prime number\n";
cin>>max;
	for (int i = 3; i<=max; ++i)	// test all integers [3:100]
	{	if (is_prime(i))
               primes.push_back(i);	// add new prime to vector
}
	cout << "Primes: ";
	for (int p = 0; p<primes.size(); ++p)
		cout << primes[p] << '\n';

return 0;
}
