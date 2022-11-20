#include<iostream>
using namespace std;

int main() {
    char values;
    cin>>values;
    if (values>='A' && values<='Z'){
        cout<<1;
        
    }
    else if (values>='a' && values<='z'){
        cout<<0;
        
    }
    else{
        cout<<-1;
    }
    
		
    
	
}
