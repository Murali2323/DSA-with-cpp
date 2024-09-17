#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n == 1 || n == 2) {
        return 1;
    }

    int a=1, b=1, fib = 0;
    for (int i=3; i<=n; ++i) {
        fib = a+b,a = b, b=fib;
    }
    return fib;
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin>>n;

    cout<<"The "<<n<<"th fibonacci number is: "<<fibonacci(n)<<endl;
    
    return 0;
}
