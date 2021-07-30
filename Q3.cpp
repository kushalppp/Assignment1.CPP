#include <iostream>

using namespace std;

class shape{
    public :
    int area(int l)
     {  
   return (l*l);
     }
   int area(int l,int b)
    {
    return (l*b);
     }
     int area(int l,int b,int h)
      { 
      return (l*b*h);
       }
};
int main()
{
    shape a;
    cout<<"area is="<<endl <<a.area(9)<<endl<<a.area(10,9)<<endl<<a.area(10,9,8);
    return 0;
}

OUTPUT:-
area is=
81
90
720