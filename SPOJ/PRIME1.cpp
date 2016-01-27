#include <iostream>
#include <sstream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cctype>
#include <string>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <algorithm>
#include <functional>
using namespace std; 
long int arr[31625];
vector<int> primes;
vector<int> segment;
void simplesieve()
{
	int i,j,k;
	memset(arr,0,sizeof(arr));
	arr[2]=0;
	for(i=3;i*i<31625;i+=2)
	{
		if(!arr[i])
		{
			for(j=i*i,k=i<<1;j<31625;j+=k)
			{
				arr[j]=1;
			}
		}
	}
}
void segmented_prime(long long int l,long long int h)
{
	int i,j,k;
	bool mark[100000];
	memset(mark,1,sizeof(mark));
	for(i=2;i*i<=h;i++)
	{
		if(!arr[i])
		{
			for(j=(l/i);(i*j)<=h;j++)
			{
				 if(( (i*j)-l) >= 0 && j!=1)
                        mark[(i*j) - l] = 0;  
			}
		}
	}
	for(k=0;k<=h-l;k++)
	{
		if(mark[k]==1 && (k+l)!=1)
		{
			cout<<k+l<<endl;
		}
	}	
}

int main()
{
	long long int l,h;
	scanf("%lld %lld",&l,&h);
	segmented_prime(l,h);
    return 0;
}
