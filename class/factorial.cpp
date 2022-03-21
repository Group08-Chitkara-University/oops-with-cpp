#include<iostream>
using namespace std;
void factorial(){
    int num;

    cout << "\nEnter a Number : ";
    cin>>::num;

    int factorial = 1;
    for (int i = 1; i <= ::num; i++){
        factorial = factorial * i;
    }
    cout << "\nFactorial : " << factorial << "\n";
    
}
int main(){
    factorial();

}