#include <iostream>
using namespace std;

void printPattern(int N) {
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            cout << i;
        }
        cout << endl;
    }
}

int main() {
    int N;
    cin>>N;
    cout<<"Enter the number of row: 0"<<endl;
    printPattern(N);
    return 0;
}
