#include <iostream>
using namespace std; 
long long int fact(int n)
{
	long long int fact=1;
	for(int i=1;i<=n;i++)
	{
		fact*=i;
	}
	return fact;
}
int main()
{
	int n;
	cin>>n;
	cout<<fact(n)<<endl;
    return 0;
}
