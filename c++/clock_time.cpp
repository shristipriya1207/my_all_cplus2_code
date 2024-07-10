#include <iostream>

using namespace std;

int main() {
	int time;
	int hour;
	int min;
	int sec;
	cout<<"enter the time";
	cin>>time;
	hour=time/3600;
	time=time%3600;
	min=time/60;
	time=time%60;
	sec=time;
	cout<< hour<<"::"<<min<<"::"<<sec;
	return 0;
}
