#include<iostream>
using namespace std;
int main(){
    char x;
    cout<<"Enter any character";
    cin>>x;
    if(x>='A' && x<='Z'){
        cout<<x<<"is an uppercase character\n";
    }
    else if(x>='a' && x<='z'){
        cout<<x<<" is an lowercase character\n";
    }
    else{
        cout<<x<<" is not an aplhabet\n";
    }
return 0;

}