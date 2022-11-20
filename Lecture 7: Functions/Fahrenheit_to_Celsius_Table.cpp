void printTable(int start, int end, int step) {
     while(start<=end){
       int C=(5.0/9)*(start-32);
        cout<<start<<" "<<C<<endl;
        start=start+step;
    }
    
}







/*
------>> Your Code

void printTable(int start, int end, int step) {
     while(start<=end){
       int C=(5.0/9)*(start-32);
        cout<<start<<" "<<C<<endl;
        start=start+step;
    }
    
}

----->>> Main Code


#include<iostream>
using namespace std;
#include "Solution.h"

int main(){
    int start, end, step;
    cin >> start >> end >> step;
  
    printTable(start, end, step);

}








*/
