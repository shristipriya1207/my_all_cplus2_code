//#include <iostream>
//using namespace std;
//
//class sample{
//	int data[25][25],size;
//	public:
//		sample():size(0){
//		}
//		sample(int x):size(x){
//		}
//		void input(){
//			for(int i=0;i<size;i++){
//				for(int j=0;j<size;j++){
//					cin>>data[i][j];
//				}
//			}
//		}
//		void display(){
//				for(int i=0;i<size;i++){
//				for(int j=0;j<size;j++){
//					cout<<data[i][j]<<" ";
//				}
//				cout<<endl;
//			}
//			
//		}
//		sample operator*(sample);
//		
//};
//sample sample :: operator*(sample s1)
//{
//	sample temp(size);
//	
//	for(int i=0;i<size;i++)	{
//		for(int j=0;j<size;j++){
//			if(i==j){
//			temp.data[i][j]=data[i][j]*s1.data[i][j];}
//			else if(i<j)
//			temp.data[i][j]=data[i][j]*s1.data[i][j];
//			else
//			temp.data[i][j]=data[i][j]*s1.data[i][j];
//			
//			
//		}
//		
//	}
//	return temp;
//	
//}
//
//int main() {
//	sample v1(2),v2(2);
//	cout<<"enter the array"<<endl;
//	v1.input();
//	v2=v1*v1;
//	cout<<"the array"<<endl;
//	v1.display();
//	cout<<"final array after multiplication"<<endl;
//	v2.display();
//	return 0;
//}
#include <iostream>
#include<math.h>
using namespace std;

class sample{
	int data[25][25],size;
	public:
		sample():size(0){
		}
		sample(int x):size(x){
		}
		void input(){
			for(int i=0;i<size;i++){
				for(int j=0;j<size;j++){
					cin>>data[i][j];
				}
			}
		}
		void display(){
				for(int i=0;i<size;i++){
				for(int j=0;j<size;j++){
					cout<<data[i][j]<<" ";
				}
				cout<<endl;
			}
			
		}
	friend	sample operator*(sample,int);
		
};
sample operator*(sample s1,int y)
{
	sample temp(s1.size);
	
	for(int i=0;i<s1.size;i++)	{
		for(int j=0;j<s1.size;j++){
			temp.data[i][j]=pow(s1.data[i][j],y);
//			if(i==j){
//			    temp.data[i][j]=pow(s1.data[i][j],y);
//			}
//			else if(i<j)
//		      	temp.data[i][j]=pow(s1.data[i][j],y);
//			else
//		        temp.data[i][j]=pow(s1.data[i][j],y);


			
			
		}
		
	}
	return temp;
	
}

int main() {
    int n;
	sample v1(2),v2(2);
	cout<<"enter the array"<<endl;
	v1.input();
	cout<<"enter the number :";
	cin>>n;
	v2=v1*n;
	cout<<"the array"<<endl;
	v1.display();
	cout<<"final array after multiplication"<<endl;
	v2.display();
	return 0;
}
