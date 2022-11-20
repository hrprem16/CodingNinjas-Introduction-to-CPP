#include<iostream>
using namespace std;
int main(){
	
	int n;
	//cout<<"enter the value of n"<<endl;
	cin>>n;
	int num;
	for( num=2;num<=n;num++){
		int i;
		for( i=2;i<num;i++){
			if(num%i==0){
				break;
			}
		}
		if( i== num){
			cout<<num<<endl;
		}
		
    }
}
