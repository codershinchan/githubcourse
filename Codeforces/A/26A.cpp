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
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define REP(i,n) for(int i=0;i<(n);i++)
#define INP(x) scanf("%d",&x)
#define OPT(x) printf("%d\n",x)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
inline bool EQ(double a, double b) { return fabs(a-b) < 1e-9; }
const int INF = 1<<29;
typedef long long ll;
inline int two(int n) { return 1 << n; }
inline int test(int n, int b) { return (n>>b)&1; }
inline void set_bit(int & n, int b) { n |= two(b); }
inline void unset_bit(int & n, int b) { n &= ~two(b); }
inline int last_bit(int n) { return n & (-n); }
inline int ones(int n) { int res = 0; while(n && ++res) n-=n&(-n); return res; }
template<class T> void chmax(T & a, const T & b) { a = max(a, b); }
template<class T> void chmin(T & a, const T & b) { a = min(a, b); }
/////////////////////////////////////////////////////////////////////
int main()
{
 	int arr[3005];
	memset(arr,1,sizeof(arr));
	arr[0]=arr[1]=0;
	vector<int> v;
	vector<int> ap;
	for(int i=2;i*i<3005;i++)
	{
		if(arr[i])
		{
			for(int j=2*i;j<3005;j+=i)
			{
				arr[j]=0;
			}
		}
	}
	for(int i=0;i<3005;i++)
	{
		if(arr[i])
		{
			v.push_back(i);
		}
	}
	for(int i=1;i<3005;i++)
	{
		int count=0;
		for(int j=0;j<v.size();j++)
		{
			int qw=v[j];
			if(i % qw == 0)
			{
				count++;
			}
		}
		if(count == 2)
		{
			ap.push_back(i);
		}
	}	
	int t;
	INP(t);
	int q=0;
	int counti=0;
	while(true)
	{
		if(ap[q]<=t)
		{
			counti++;
			q++;
		}else
		{
			break;
		}
	}
	cout<<counti<<endl;
	 return 0;
}
