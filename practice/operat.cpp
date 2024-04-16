#include<iostream>

using namespace std;

int main(){
    int i = 0;

    i = i++ - --i + ++i + i--;

    cout<<"i = "<<i<<endl;

    int j=1, k=2, m=3;

    int n = j-- - k-- - m--;

    cout<<j<<endl; //0
    cout<<k<<endl; //1
    cout<<m<<endl; //2
    cout<<n<<endl; //-4

    return 0;
}