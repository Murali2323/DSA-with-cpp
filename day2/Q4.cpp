#include<iostream>
using namespace std;
int main(){
    int n;
    int evenSum = 0;
    int  oddSum = 0;
    
    cout<<"Enter the integer";
    cin>> n;

    while(n>0){
        int digit = n % 10;
    
        if(digit % 2 == 0){
           evenSum+= digit;
        }else{
            oddSum += digit;
        }
        n = n/10;
    }
    cout<<"Sum of even munbers: "<<evenSum<<endl;
    cout<<"sum of the odd numbers :"<<oddSum<<endl;
   
    return 0;
}    