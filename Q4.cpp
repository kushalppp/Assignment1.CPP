#include<iostream>

using namespace std;

class student
{
int admno;
char sname[20];
float eng,math,sci;
float total;

float ctotal()
{
return(eng+math+sci);
}

public :
 void take_data()
{
 cout<<"enter data of student admno,name, three subjects marks and total";
 cin>>admno>>sname>>eng>>math>>sci>>total;
}

void show_data()
{
cout<<"Admno="<<admno<<endl<<"Sname:"<<sname<<endl;
cout<<"Eng-"<<eng<<ends<<"Math-"<<math<<ends<<"Sci-"<<sci;
cout<<endl<<"Total="<<total<<ends<<"Ctotal="<<ctotal();
}

};

main()
{
student s1;
s1.take_data();
s1.show_data();
}

OUTPUT:-
enter data of student admno,name, three subjects marks and total5
GURU
45
45
50
150
Admno=5
Sname:GURU
Eng-45Math-45Sci-50
Total=150Ctotal=140