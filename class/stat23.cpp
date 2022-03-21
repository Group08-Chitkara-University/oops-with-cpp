#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,e,p;
    cout<<"Please enter Physics Marks (out of 100) : ";
    cin>>a;
    cout<<"Please enter Chemistry Marks (out of 100) : ";
    cin>>b;
    cout<<"Please enter Biology Marks (out of 100) : ";
    cin>>c;
    cout<<"Please enter Mathematics Marks (out of 100) : ";
    cin>>d;
    cout<<"Please enter Computer Marks (out of 100) : ";
    cin>>e;
    p=((a+b+c+d+e)/5);
    if(p>=90 and p<=100)
    {
        cout<<"Grade A with perecentage ="<<p<<"%"<<endl;
    }
    else if (p<90 and p>=80)
    {
        cout<<"Grade B with perecentage ="<<p<<"%"<<endl;
    }
    else if (p<80 and p>=70)
    {
        cout<<"Grade C with perecentage ="<<p<<"%"<<endl;
    }
    else if (p<70 and p>=60)
    {
        cout<<"Grade D with perecentage ="<<p<<"%"<<endl;
    }
    else if (p<60 and p>=40)
    {
        cout<<"Grade E with perecentage ="<<p<<"%"<<endl;
    }
    else if (p<40 and p>=0)
    {
        cout<<"Grade F ";
    }
    else
    {
        cout<<"Invalid grade!!";
    }
    return 0;

}
