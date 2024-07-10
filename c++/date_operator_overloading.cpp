#include <iostream>
using namespace std;
 class date{
 	int day;
 	int month;
 	int year;
 	public:
 	
 	date(int d,int m, int y){
 		day=d;
 		month=m;
 		year=y;
 		
	 }
	 void display(){
	 	cout<<day<<"-"<<month<<"-"<<year;
	 }
	  
	 void operator++(); 
 };
 void date:: operator++(){
 	if(day<31)
 	{
 		day++;
	 }
	 else
	 {
	 	day=1;
	 }
	 if(month<12){
	 	month++;
	 }
	 else{
	 	month=1;
	 	
	 }
	 year++;
	 
 }



int main() {
	date d1(2,3,4);
	++d1;
	cout<<"New Date after increment: ";
	d1.display();
	return 0;
}
