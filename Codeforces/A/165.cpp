#include<bits/stdc++.h>
using namespace std;
int arr[205][205];
int main(void)
{
	bool u=false,d=false,l=false,r=false;
	int n;
	int count=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		int x,y;
		cin>>x>>y;
		arr[i][0]=x;
		arr[i][1]=y;
	}
	for(int i=0;i<n;i++){
		int x=arr[i][0];
		int y=arr[i][1];
		for(int j=0;j<n;j++)
		{
			if(j!=i){
				if(arr[j][0]>x && arr[j][1]==y)
				{
					//cout<<"in right "<<j<<endl;
					r=true;
				}
				if(arr[j][0]<x && arr[j][1]==y)
				{
					//cout<<"in left "<<j<<endl;
					l=true;
				}
				if(arr[j][0]==x && arr[j][1]<y)
				{
					//cout<<"in down "<<j<<endl;
					d=true;
				}
				if(arr[j][0]==x && arr[j][1]>y){
					//cout<<"in upper "<<j<<endl;
					u=true;
				}
			}
		}
		if(r==true && l==true && d==true && u==true){
			//cout<<x<<"the value "<<y<<endl;
			count++;
		}
		r=false;
		l=false;
		d=false;
		u=false;
	}
	cout<<count<<endl;
	return 0;
}
