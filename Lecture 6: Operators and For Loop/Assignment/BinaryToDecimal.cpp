#include<iostream>
using namespace std;

int main() {
	int n,a,b;
    int pv=1;
    int ans=0;
    cin>>n;
    while(n!=0){
        a=n/10;
        b=n%10;
        ans=ans+b*pv;
        pv=pv*2;
        n=a;
        
    }
    cout<<ans;
	
}
