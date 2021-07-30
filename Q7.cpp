#include<iostream>
 using namespace std;

void set(int ,float);
void disp(void);

class dist
{
     private:
     int feet;
     float inches;
     public:
     void set(int x,float y)
        {
        feet=x;
        inches=y;
        }
      void disp()
      {
      cout<<"Distance in feet:-"<<feet<<endl<<"Distance in inches:-"<<inches;
       }
       dist operator+(dist c)
	{
         dist a;
         a.feet=feet+c.feet;
         a.inches=inches+c.inches;
         return(a);
         }
};

int main()
{
dist c1,c2,c3;
c1.set(3,4.0);
c2.set(4,5.3);
c3=c1.operator+(c2);
c3.disp();
}

OUTPUT:-
Distance in feet:-7
Distance in inches:-9.3