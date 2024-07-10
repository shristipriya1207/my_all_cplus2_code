#include <iostream>
#include<fstream>
using namespace std;



int main() {
	fstream file("shristi.txt" ,ios::in | ios::out | ios::app);
	if(!file.is_open()){
		cout<<"error";
	file<<"error occour";
	
}
else{
	cout<<"correct";
	file<<"hello shristi how r you!!!!";
	file.seekg(10);
	string line;
	
	while(file.good()){
		getline(file,line);
		cout<<line;
	}
	
	
	
	
}
file.close();

	return 0;
}
