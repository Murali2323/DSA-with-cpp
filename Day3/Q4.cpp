#include<iostream>
using namespace std;

int main(){
    int n, reverse=0;
    cout<<"Enter the numbre n: ";
    cin>>n;


    while(n>0){
        int lastDigit=n%10;
        reverse = reverse*10+lastDigit;
        n=n/10;

    }
    cout<<"reversed number "<<reverse<<endl;

   return 0;

}