#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter the marks:"<<endl;
    cin>>marks;
    if (marks<25)
    {
        cout<<"F";
    }
    else if(marks>=25 and marks<40)
    {
        cout<<"E";
    }
    else if(marks>=50 and marks<60)
    {
        cout<<"D";
     
    }
    else if(marks>=50 and marks<60)
    {
        cout<<"C";
    }
    else if(marks>=60 and marks<80)
    {
        cout<<"B";
    }
    else{
        cout<<"A";
    }
return 0;

}