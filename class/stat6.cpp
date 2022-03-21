#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter the marks:"<<endl;
    cin>>marks;
    if (marks>=4 and marks<5)
    {
        cout<<"D";
    }
    else if(marks>=5 and marks<6)
    {
        cout<<"c";
    }
    else if(marks>=6 and marks<7)
    {
        cout<<"b";
     
    }
    else if(marks>=7 and marks<8)
    {
        cout<<"b+";
    }
    else if(marks>=8 and marks<9)
    {
        cout<<"A";
    }
    else if(marks>=9 and marks<10)
    {
        cout<<"A+";
    }
    else{
        cout<<"failed";

    }
return 0;

}