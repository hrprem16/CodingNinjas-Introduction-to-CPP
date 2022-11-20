#include<iostream>
using namespace std;

int main() {
	int n,current;
    cin>>n;
    int previous;
    cin>>previous;
    int i=1;
    bool is_dec=true;
    while(n-1){
        cin>>current;
        if(current==previous){
            cout<<"false";
            return 0;
        }
        else if(current<previous){
            if(is_dec==false){
                cout<<"false";
                return 0;
            }
        }
        else{
            is_dec=false;
        }
        previous=current;
        n--;
    }
    
    if((n-1)<=0){
        cout<<"true";
    }
	return 0;
}
