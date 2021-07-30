#include<iostream>

using namespace std;
int add(int , int);
int sub(int , int);
int mul(int , int);
int divi(int , int);

class arith
{
public :
int x,y;

};
 int add(int x,int y)
{
return(x+y);
}
 int sub(int x, int y)
{
return(x-y);
}
 int mul(int x, int y)
{
return(x*y);
}
int divi(int x, int y)
{
return(x/y);
}
int main()
{
cout<<"enter two value:-";
arith b1;
cin >> b1.x;
cin >> b1.y;
cout<<"Addition ="<<add(b1.x,b1.y)<<endl<<"substraction ="<<sub(b1.x, b1.y);
cout<<endl<<"multiplication ="<<mul(b1.x, b1.y)<<endl<<"division ="<<divi(b1.x, b1.y);
} 


OUTPUT:-
enter two value:-54
5
Addition =59
substraction =49
multiplication =270
division =10