#include<iostream>
#include<cstdio>
#include<cmath>
#include<math.h>
using namespace std;
int main(void)
{
	int t;
	long long int i;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld",&i);
		long long int a=i;
		long long int b=i-2;
		if(i==1)
		{
			printf("1\n");
			continue;
		}else{
			long long int n=(a-b)*(a*a+b*b+a*b);
			printf("%lld\n",n);
		}
	}

	return 0;
}
