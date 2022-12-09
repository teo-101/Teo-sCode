#include <iostream>
#include <cmath>
#include <Windows.h>
#include <iomanip>
using namespace std;

int main()
{   cout<<setw(75);
    cout<<"~Equation of the second degree~"<<endl;  system("pause");
    cout<<"Enter the coefficients for ax^2+bx+c=0"<<endl;
    float a,b,c;
    cin>>a>>b>>c;
    float Delta=b*b-4*a*c;
    if (Delta<0)
    { 
        system("chcp 65001");   system ("cls");
        cout<<"No value for x from R Δ="<<Delta<<endl;
        system("pause");
        return 0;
    }
    float x1,x2;
    x1=(-b+sqrt(Delta))/(2*a);
    x2=(-b-sqrt(Delta))/(2*a);
    cout<<"x1 = "<<x1<<endl;
    cout<<"x2 = "<<x2<<endl;
    system("pause");
    return 0;
}
