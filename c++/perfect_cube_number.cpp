#include <iostream>
using namespace std;



int main() {
	int num,i,cube;
	
	cout<<"enter a number :";
	cin>>num;
	for(i=1;i<num;i++)
	
	{
	 cube=i*i*i;
		
		if(cube==num)
		{
				cout<< num<<"\t is  perfect cube, cube  root is   "<<i;
		}
		
		
	}
	return 0;
}
