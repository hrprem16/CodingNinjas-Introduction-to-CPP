#include<iostream>
using namespace std;
int main(){
	int N;
    cin>>N;
    int i=1;
    int val=1;
    while(i<=N){
        int k=1;
    	while(k<=N-i){
        cout<<" ";
        k=k+1;
    }
        int j=1;
        val=i;
        while(j<=i){
            cout<<val;
            j=j+1;
            val=val+1;
        }
        cout<<endl;
        i=i+1;  
    }
  
}


