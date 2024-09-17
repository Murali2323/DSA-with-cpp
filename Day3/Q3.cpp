#include<iostream>
using namespace std ;

int main(){
    int x;
    cout<<"Enter the number of trems: ";
    cin>>x;

    int count=0;
    int n=1;

    while(count < x){
        int term=3*n+2;
        if(term%4 != 0){
            cout<<term<<" ";
            count++;
        }n++;

    }
    cout<<endl;
    return 0;
}