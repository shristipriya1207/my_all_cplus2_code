#include <iostream>
#include<fstream>
using namespace std;
int main(){
cout<<"Hello"<<endl;
string s1="hello i am shristi";
ofstream out("sample.txt");

out<<s1;
 string s2;
 ifstream in("sample2.txt");
// in>>s2;
getline(in,s2);
cout<<s2;
getline(in,s2);
cout<<s2;
 
	return 0;
}
