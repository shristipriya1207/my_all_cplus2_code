#include <iostream>
using namespace std;




int main() {
	char name;
	int reg_no=0;
	 int year=0;
	 int sem=0;
	 int average;
	 int a,b,c,d,e;
     int total;	 
	cout<<" \t \t \t \t score card for student:john smith \n";
	
	cout<<"REGISTRATION NUMBER : "<<reg_no;
	cin>>reg_no;
	
	cout <<"\t \t \t \t \t \t SEMESTER : "<<sem;
	cin>>sem;
	cout <<" \t \t \t \t \t \t YEAR : "<<year;
	
	cin>>year;
	cout<<"GRADE ASSIGNED \n";
	
	cout<<"NAME:  "<<name;
	cin>>name;
	cout<<"\n \n \n SERIAL NUMBER \t \t \t \t SUBJECT NAME \t \t \t \t MARSKS SCORED(OUT OF 100 )" <<"\n \n";
	cout<<"-----------------------------------------------------------------------------------------\n";



cout<<" 01                    object orientented programming                      \n       ";
cin>>a;
cout<<"enter the dbms marks";
cin>>b;
cout<<"enter the reserach methodology marks";
cin>>c;
cout<<"enter the computational mathematic marks";
cin>>d;
cout<<"enter the web marks";
cin>>e;
	if(average>=90)
	cout<<"Grade A";
	else if(average>80 && average<89)
	cout<<"Grade B";
	else if(average>61 && average<79)
	cout<<"Grade C";
	else if(average>51 && average<59)
	cout<<"Grade D";
	else if(average>41 && average<49)
	cout<<"Grade E";
	else
	{
	
	cout<<"Grade F(fails)";
}
 
 total= a+b+c+d+e;
 average= total;

	
	
	
	return 0;
}
