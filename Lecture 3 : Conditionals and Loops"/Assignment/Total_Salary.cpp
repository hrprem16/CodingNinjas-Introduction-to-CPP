#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int basic,allow;
    double hra,da,pf,totalSalary;
    char grade;
    cin>>basic>>grade;
    hra=0.20*basic;
    da=0.50*basic;
    pf=0.11*basic;
    if(grade=='A'){
        allow=1700;
    }
    else if(grade=='B'){
        allow=1500;
    }
    else{
        allow=1300;
    }
    totalSalary=basic + hra + da + allow - pf;
    int x=totalSalary;
    if(totalSalary-x<0.5){
        cout<<x;
    }
    else{
        cout<<x+1<<endl;
    }
    
}
