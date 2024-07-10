#include <iostream>
using namespace std;

class sample{
	char data[25];
	int size;
	public:
		sample():size(0){
		}
		sample(int x):size(x){
		}
		void input(){
			for(int i=0;i<size;i++){
				cin>>data[i];
			}
			
		}
		void display()
		{
			for(int i=0;i<size;i++){
				cout<<data[i];
			}
			cout<<endl;
		}
		sample operator+(sample);
};
sample sample :: operator+(sample s){
	sample temp;
	for(int i=0;i<size;i++){
		if(data[i]!=s.data[i]){
		
		int flag=0;
		for(int j=0;j<size;j++){
			if(data[i]==temp.data[j]){
				flag=1;
				break;
			}
		}
	
		if(flag==0){
		  temp.data[temp.size]=	data[i];
		  temp.size++;
	}
		}
		
	}
	
	return temp;
	
	
}

int main() {
	sample s1(5),s2(5),s3(5);
	cout<<"enter first array"<<endl;
	s1.input();
	cout<<"enter second array"<<endl;
	s2.input();
	s3=s1+s2;
	cout<<"first array"<<endl;
	s1.display();
	cout<<"second array"<<endl;
	s2.display();
	cout<<"finale array"<<endl;
	s3.display();
	
	
	
	return 0;
}
