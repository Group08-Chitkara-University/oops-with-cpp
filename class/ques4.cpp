#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter two numbers:"<<endl;
    cin>>a;
    cin>>b;
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"Numbers after swapping are: "<<a<<" and "<<b;
    return 0;
}