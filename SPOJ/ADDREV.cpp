#include<iostream>
using namespace std;
int reverse(int x)
{
   int rev=0; 
    while(x)
    {
        rev = rev*10+(x%10);
        x/=10;
    }
    return rev;
}
int main(void)
{
    int N;
    cin>>N;
    while(N--)
    {
        int A,B;
        cin>>A>>B;
        int ans=reverse(A)+reverse(B);
        cout<<reverse(ans)<<endl;
    }
    return 0;
} 
