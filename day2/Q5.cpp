#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    int x;

    cout<<"Enter two integer x and n separeted space ";
    cin>>n,x;

    int result = pow (x,n);
    cout<<x<<"^"<<n<<result<<endl;

    0<=x<=8;
    0<=n<=9;
    
}