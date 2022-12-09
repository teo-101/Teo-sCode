#include <iostream>
#include <cmath>
#include <Windows.h>
#include <iomanip>
using namespace std;

int main()
{   cout<<setw(75);
    cout<<"~Rezolvarea ecuatiilor de gradul 2~"<<endl;  system("pause");
    cout<<"Introdu coeficienti de forma ax^2+bx+c=0"<<endl;
    float a,b,c;
    cin>>a>>b>>c;
    float Delta=b*b-4*a*c;
    if (Delta<0)
    { 
        system("chcp 65001");   system ("cls");
        cout<<"Nu exista valoare pt x din R, deoarece Δ="<<Delta<<endl;
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