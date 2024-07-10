#include <iostream>  
using namespace std;  
int main()
 {  
  int n1=0,n2=1,n3,i,num;    
 cout<<"Enter the number of elements: ";    
 cin>>num;  
 for(i=1;i<=num;i++)
 {
 	if(i==1)
 	{
 		cout<<n1<<"\n";
 		
	 }
	 if(i==2)
	 {
	 	cout<<n2<<"\n";
	 }
	 
	 n3=n1+n2;
	 cout<<n3<<"\n";
	 n1=n2;
	 n2=n3;
   }  
 
   return 0;
}
