#include<iostream>

using namespace std;

class shape
{
    public :
    int a, b;
    shape()
    {
    cout<<"enter two value:-";
        cin>>a>>b;
    cout<<"a+b="<<a+b<<endl;
    }
    
};
int main()
{
    shape x;
    return 0;
}

OUTPUT:-
enter two value:-5
4
a+b=9