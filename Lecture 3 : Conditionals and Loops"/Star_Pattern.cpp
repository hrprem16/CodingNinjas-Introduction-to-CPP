#include<iostream>
using namespace std;
int main(){
	int N;
    cin>>N;
    int i=1;
   
    while(i<=N){
        int k=1;
        while(k<=N-i)
        {
            cout<<" ";
            k++;
        }
        
       int j=1;
    
        while(j<= 2*i-1){
            cout<<"*";
            j=j+1;
        }
        cout<<endl;
        i=i+1;  
    }
  
}


