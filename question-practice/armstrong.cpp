#include<iostream>
#include<math.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int sum=0;
    int originalN = n;

    while (n > 0) {
        int lastDigit = n % 10;
        sum += pow(lastDigit, 3) ;
        n = n / 10;
    }

    if (sum == originalN) {
        cout << "Armstrong number" << endl;
    } else {
        cout << "Not an Armstrong number" << endl;
    }

    return 0;
}
