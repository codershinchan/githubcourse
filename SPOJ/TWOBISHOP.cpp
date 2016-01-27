#include <bits/stdc++.h>
#include <string>
using namespace std;
int main(void)
{
	int x,y,x1,y1;
	int t;
	cin>>t;
	char c;
	int flag;
	while(t--)
	{
		flag=0;
		for(int i=0;i<=7;i++)
		{
			for(int j=0;j<=7;j++)
			{
				cin>>c;
				if(c != '.')
				{
					if(flag==0)
					{
						x=i;
						y=j;
						flag=1;
					}else
					{
						x1=i;
						y1=j;
					}
				}
			}
		}
		int temp1=abs(x-x1);
		int temp2=abs(y-y1);
		if(temp2 == temp1)
		{
			cout<<"Yes"<<endl;
		}else
		{
			cout<<"No"<<endl;
		}



	}
}