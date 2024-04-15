#include<iostream>
using namespace std;
int main(){
    int amount1;
    cout<<"Mom gives (Tk): ";
    cin>>amount1;


    int amount2;
    cout<<"Dad gives (Tk): ";
    cin>>amount2;

    int total_amount = amount1 + amount2;
    cout<<"Total amount: "<<total_amount<<" tk"<<endl;
    
    
    return 0;
}

