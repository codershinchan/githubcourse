#include<iostream>
#include<cstdio>
using namespace std;
long int noofzeroes(long long int x)
{
  int q=5;
  long int ans=0;
  while(true)
  {
    if(x/q!=0)
    {
      ans+=x/q;
      q=q*5;
    }else
    {
      break;
    }
  }
  return ans;
}
int main(void ) {
  int t;
  scanf("%d",&t);
  long long int a;
  while(t--)
  {
    scanf("%lld",&a);
    printf("%ld\n",noofzeroes(a));
  }
  return 0;
}