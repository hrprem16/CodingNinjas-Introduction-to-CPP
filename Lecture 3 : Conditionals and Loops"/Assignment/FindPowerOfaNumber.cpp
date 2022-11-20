#include<iostream>
#include<math.h>
using namespace std;

int main() {
    int x,n,result;
	cin>>x>>n;
    if(n==0){
        cout<<1;
    }else{
    result=pow(x,n);
        cout<<result;
        }
}
