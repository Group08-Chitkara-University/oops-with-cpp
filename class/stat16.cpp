#include<iostream>
using namespace std;
int main(){
    int count=0;
    cout<<"break statement";
    while(count<=10){
        count=count+1;
        if (count==5){
            break;
        }
        cout<<"\ninside loop"<<count;
    }
    cout<<"\nout of while loop" ;
return 0;
}