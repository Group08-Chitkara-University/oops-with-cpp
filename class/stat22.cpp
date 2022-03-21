#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Please enter the 1st side : ";
    cin>>a;
    cout<<"Please enter the 2nd side : ";
    cin>>b;
    cout<<"Please enter the 3rd side : ";
    cin>>c;

    if(a==b and b==c)
    {
       cout<<"The triangle is equilateral";
    }
    else if(a==b or b==c or c==a)
    {
        cout<<"The triangle is isosceles";
    }
    else
    {
        cout<<"The triangle is scalence";
    }
    return 0;
}
