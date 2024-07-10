#include <iostream>
using namespace std;



int main() {
	int j,i,a,b,flag;
	cout<<"Enter the first number : ";
	cin>>a;
	cout<<"Enter the second number : ";
	cin>>b;
	for(i=a;i<=b;i++)
	{
	if(i==1||i==0)
	continue;
	flag=1;
	for(j=2;j<=i/2;j++)
	{
		if(i%j==0)
		{
		
		flag=0;
		break;
    	}
    	
	
	
	}
	
	
	if(flag==1)
    	cout<<i<<" ";
		
	}
	return 0;
}
