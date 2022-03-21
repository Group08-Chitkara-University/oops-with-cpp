#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age= ";
    cin>>age;
    if(age<18 and age>=0){
        cout<<"minor not eligible";
    }
    else if(age>=60){
        cout<<"Eligible for vaccination with highest priority";
    }
    else{
        cout<<" eligible for vaccination with least priority";
    }
return 0;
}