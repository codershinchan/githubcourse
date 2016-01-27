#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main(void)
{
	long int n;
	long int ans=0;
	cin>>n;
	for(int i=1;i<=sqrt(n);i++)
	{
		ans+=(n/i-i+1);
	}
	cout<<ans<<endl;
	return 0;
}
