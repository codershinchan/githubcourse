#include <bits/stdc++.h>
#include <cstdio>
using namespace std; 
map<int,long long int> arr;
long long res(long long int x)
{
	if(x==0) return 0;
	if(arr[x]!=0)
	{
		return arr[x];
	}else
	{
		arr[x]=max(x,res(x/2)+res(x/4)+res(x/3));
	}
	return arr[x];
}
int main()
{
	long long int t;
	while(scanf("%lld",&t)!=EOF)
	{
		
		cout<<res(t)<<endl;
	}
    return 0;
}
