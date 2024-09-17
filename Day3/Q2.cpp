#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int num) {
    if (num<2) return false;
    if (num==2) return true;  
    if (num%2==0) return false; 

    for (int i=3; i<=sqrt(num); i+=2) {
        if (num%i==0) return false;
    }
    return true;
}
void printPrimeNumbers(int n) {
    for (int i=2; i<=n; ++i) {
        if (isPrime(i)) {
            cout <<i<< " "<<endl;
        }
    }
    cout<<endl;
}
int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    printPrimeNumbers(n);
    
    return 0;
}