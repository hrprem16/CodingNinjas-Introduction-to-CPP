#include<iostream>
using namespace std;


int main(){

	int S,W,E,C;
    cin>>S>>E>>W;
    while(S<=E){
        C=(5.0/9)*(S-32);
        cout<<S<<" "<<C<<endl;
        S=S+W;
    }
}

