#include<iostream>
using namespace std;

int main(){
    // char button;
    // cout<<"Enter a character: ";
    // cin>>button;

    // switch(button){
    //     case 'a':
    //         cout<<"Hello, a"<<endl;
    //         break;
    //     case 'b':
    //         cout<<"Hello, b"<<endl;
    //         break;
    //     default:
    //         cout<<"Not Matched!"<<endl;
    // }

    int n1,n2;
    cout<<"Enter two numbers: ";
    cin>>n1>>n2;


    char operat;
    cout<<"Enter an operator: ";
    cin>>operat;


    switch(operat){
        case '+':
            cout<<n1<<" + "<<n2<<" = " <<n1+n2<<endl;
            break;
        case '-':
            cout<<n1<<" - "<<n2<<" = " <<n1-n2<<endl;
            break;
        case '*':
            cout<<n1<<" * "<<n2<<" = " <<n1*n2<<endl;
            break;
        case '/':
            cout<<n1<<" / "<<n2<<" = " <<n1/n2<<endl;
            break;
        default:
            cout<<"Something went wrong! Try again..."<<endl;
    }


    return 0;
}