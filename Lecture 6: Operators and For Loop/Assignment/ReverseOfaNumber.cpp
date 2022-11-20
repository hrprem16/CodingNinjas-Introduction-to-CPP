#include<iostream>
using namespace std;
int main(){
    int n,a,b;
    cin>>n;
    int rev=0;
    while(n!=0){
        a=n/10;
        b=n%10;
        rev=rev*10+b;
        n=a;
    }
    cout<<rev;
}
