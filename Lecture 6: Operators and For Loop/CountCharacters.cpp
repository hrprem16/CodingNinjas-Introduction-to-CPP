#include<iostream>
using namespace std;

int main(){

   char c;
	c=cin.get();
    int num=0;
    int alpha=0;
    int spaces=0;
    while(c!='$'){
        
        if(c>='a'&&c<='z'){
            alpha++;
        }
        else if (c == ' ' || c == '\t' || c == '\n'){
            spaces++;
        }
        else{
            num++;
        }
        c=cin.get();
        
    }
    cout<<alpha<<" "<<num<<" "<<spaces;
}


