#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Please enter the 1st angle : ";
    cin>>a;
    cout<<"Please enter the 2nd angle : ";
    cin>>b;
    cout<<"Please enter the 3rd angle : ";
    cin>>c;

    if(a+b+c==180){
        if(a+b>=c)
        {
            cout<<"The triangle is valid.";
        }
        else if(b+c>=a)
        {
            cout<<"The triangle is valid.";
        }
        else if(a+c>=b)
        {
            cout<<"The triangle is valid.";
        }
        else
        {
            cout<<"The triangle is not valid.";
        }
    }
    else
    {
        cout<<"The triangle is not valid.";
    }
    return 0;
}

