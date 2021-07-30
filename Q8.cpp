#include<iostream>
 using namespace std;

void settime(int ,int);
void showtime(void);

class time
{
  private:
   int hour;
   int min;
  public:
     void settime(int x, int y)
     	{
	hour=x;
	min=y;
	}
     void showtime()
	{
        cout<<"Time :-"<<hour<<"Hour"<<ends<<min<<"Minutes"<<endl;
	}
      time sum(time c)
	{
        time a;
        a.hour=hour+c.hour;
        a.min=min+c.min;
       return(a);
	}
};

void main()
{
class time t1,t2,t3;
 t1.settime(5,30);
 t2.settime(1,20);
 t3=t1.sum(t2);
 t1.showtime();
 t2.showtime();
 t3.showtime();
 }
     
OUTPUT:-
Time :-5Hour30Minutes
Time :-1Hour20Minutes
Time :-6Hour50Minutes

