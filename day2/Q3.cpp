#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int basic;
    char grade;
    double totalSalary, HRA, DA, Allow,PF;

    cout<< "Enter the grade salary: ";
    cin>> basic;
    cout<< "Enter the grade: ";
    cin>> grade;

    HRA = 0.20* basic;
    DA = 0.50* basic;
    //Allow = 1700* grade
    if(grade == 'A'){
        Allow = 1700;
    }
    else if(grade == 'B'){
        Allow = 1500;
    }
    else{
        Allow = 1300;
    }  
    PF = 0.11* basic;  
    totalSalary = basic + HRA + DA + Allow-PF;
    cout<<"total salary: "<<round(totalSalary)<<endl;
    
    return 0;

}