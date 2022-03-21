#include<iostream>
using namespace std;
void sum_nTerm(){
    int num;

    cout << "\nEnter a Number : ";
    cin >> num;

    cout << "\n";

    int sum_nTerm = 0;
    for (int i = 1; i <= num; i++){
        sum_nTerm += i;
    }

    cout << "Sum of n terms : " << sum_nTerm << "\n\n";

}