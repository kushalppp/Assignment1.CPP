#include<iostream>
using namespace std;

void setlength(float);
void setwidth(float);
float perimeter(void);
float area(void);
void show(void);
void sameArea(int, int);

class rectangle
{
private:
float length,width;

public:
  void setlength(float x)
  {
   length=x;
  }

 void setwidth(float y)
  {
   width=y;
  }

 float perimeter()
  {
  return(2*(length+width));
  }
  
 float area() 
  {
  return(length*width);
  }
   
   void show()
  {
  cout<<" length of rectamgle is"<<length<<endl<<"width of rectangle is"<<width;
  }
 
  void sameArea(int d1 , int d2)
  {
  if(d1==d2)
   cout<<" \n return 1";
   else
    cout<<"\n return 0";
  }

 };  


int main()
{
int x;
rectangle d1 ,d2;
d1.setlength(15);
d1.setwidth(6.3);
cout<<"perimeter:-"<<d1.perimeter()<<endl<<"area"<<d1.area()<<endl;
d1.show();
d2.setlength(5);
d2.setwidth(18.9);
cout<<"\nperimeter:-"<<d2.perimeter()<<endl<<"area"<<d2.area()<<endl;
d2.show();
d1.sameArea(d1.area(),d2.area());
}

OUTPUT:-
perimeter:-42.6
area94.5
 length of rectamgle is15
width of rectangle is6.3
perimeter:-47.8
area94.5
 length of rectamgle is5
width of rectangle is18.9
 return 1

 

  
  
 