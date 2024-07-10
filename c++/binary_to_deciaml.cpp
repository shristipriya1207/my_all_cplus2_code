#include <iostream>
using namespace std;


int main() {
	int temp,bin,dec,r;
	cout<<"enter the binary number";
	cin>>bin;
	while(bin!=0)
	{
		temp=bin%10;
		
		
			dec= dec + (r*temp);
		
		
		
			
		
		r=r*2;
     	
     bin=bin/10;		
	}
	cout<<"deciaml number";
	cout<<dec;
	
	
	
	
	return 0;
}
