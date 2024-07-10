#include <iostream>
using namespace std;



int main() {
	float fahren,celsius;
	cout<<"enter the temperature \n";
	cin>>fahren;
	celsius=5*(fahren-32)/9;
	cout<<fahren<<"fahrenheit is equal to "<<celsius<<"centigrated\n";
	cout<<"enter the temperatuere  \n";
	cin>>celsius;
	fahren=(celsius*9/5)+32;
	cout<<celsius<<"celsius is equal to  "<<fahren;
	
	return 0;
}
