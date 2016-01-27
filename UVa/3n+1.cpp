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
int cycle(int n)
{
	int count=0;
	while(n!=1)
	{
		if(n%2 == 1) {n=3*n+1;n >>= 1;count+=2;}
		else {n >>= 1;count+=1;}
	}
	return count;
}
int main()
{
	int i,j;
    while(scanf("%d %d",&i,&j)!=EOF)
    {
    	int maxc=-11111111;
    	int q,w;
    	if(i>j)
    	{
    		q=j;
    		w=i;
    	}else
    	{
    		q=i;
    		w=j;
    	}
    	FOR(k,q,w)
    	{
    		maxc=max(maxc,cycle(k));
    	}
    	cout<<i<<" "<<j<<" "<<maxc+1<<endl;
	}
	return 0;
}
