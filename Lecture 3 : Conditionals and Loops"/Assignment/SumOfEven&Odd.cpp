#include<iostream>
using namespace std;

int main() {
	int n,p,q;
    cin>>n;
    int sum_of_even=0;
    int sum_of_odd=0;
    while(n>0){
        p=n/10;
        q=n%10;
        if(q%2==0){
            sum_of_even=sum_of_even+q;
        }
           else{
               sum_of_odd=sum_of_odd+q;
           }
      	n=p;
    }
		cout<<sum_of_even<<" "<<sum_of_odd;
	
}
