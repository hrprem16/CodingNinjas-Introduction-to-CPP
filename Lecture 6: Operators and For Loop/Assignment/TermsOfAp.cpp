#include<iostream>
using namespace std;

int main(){
    int n=1;
    int x;
    cin>>x;
    int term;
    int count=0;
    
		while(count<x){
        term=3*n+2;
        if(term%4!=0){
            cout<<term<<" ";
            count++;
        }
        n++;
    }
	
	
}
