#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main(void)
{
	int n,x,y;
	scanf("%d %d %d",&n,&x,&y);
	int tt;
	if((y*n)%100!=0)
	{
		tt=((y*n)/100)+1;	
	}else
	{
		tt=((y*n)/100);
	}
	if((tt-x)>0){
	cout<<tt-x<<endl;}
	else{
		cout<<0<<endl;
	}
	return 0;
}
