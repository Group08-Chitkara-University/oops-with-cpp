// questions continued

#include<iostream>
using namespace std;
void multiple_3_or_7(){
    int num;
    cout<<"\nEnter a Number : ";
    cin>>num;

    cout << "\n";

    if ((num % 3 == 0) || (num % 7 == 0)){
        cout << num << " multiple of 3 or 7\n\n";
    }
    else{
        cout << "Sorry, this " << num << " is not a multiple of 3 or 7\n\n";
    }

    
}
int main(){
    multiple_3_or_7();
}