#include<iostream>
using namespace std;

int main() {
    int n,c;
    cin>>n>>c;
    int sum=0;
    int product=1;
    
    for(int i=1;i<=n;i++){
        sum=sum+i;
        product=product*i;
        
    }
    if(c==1){
        cout<<sum;
    }
    else if(c==2){
        cout<<product;
    }
	else{
        cout<<-1;
    }
}
       
