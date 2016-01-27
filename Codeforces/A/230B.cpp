#include <bits/stdc++.h>
using namespace std;
int ip(long long int w)
{
	for ( long long i = 2 ; i * i <= w ; i++ )
    if ( w % i == 0 )
      return 0 ;
  return 1 ;
}
int main(void){
	int n;
	cin>>n;
	while(n--)
	{
		long long int q;
		cin>>q;
		int count=2;
		if(q%2!=0){
		for(int i=2;i<=floor(sqrt(q));i++){
			if(q%i==0)
			{
				count++;
			}
			if(count>3)
			{
				break;
			}
		}
		if(count == 3){
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}else
	{
		if(floor(sqrt(q))*floor(sqrt(q)) == q && ip(floor(sqrt(q))))
		{
			cout<<"YES"<<endl;
		}
		else{cout<<"NO"<<endl;}	


	}

	}

	return 0;
}