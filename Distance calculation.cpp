#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int x;
    float y;
    cout<<"Input total distance in Km :";
    cin>>x;
    cout<<"Input total fuel spent in litters :";
    cin>>y;
    cout<<"average consumption (km/lt)  %.3f :"<<(x/y)<<endl;
    getch();
}
