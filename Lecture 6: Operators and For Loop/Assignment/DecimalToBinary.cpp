
#include<iostream>
using namespace std;
int main()
{
    long n,pv=1,remain;
    long ans=0;
    cin>>n;
    while(n>0)
    {
        remain=n%2;
        ans=ans+remain*pv;
        pv*=10;
        n=n/2;
       

    }
    cout<<ans;
    return 0;
    
}
