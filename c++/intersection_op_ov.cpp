#include <iostream>

using namespace std;
class sample {
	int data[25],size;
	public:
		sample():size(0){
		}
		sample(int x):size(x){
		}
		void input()
		{
			for(int i=0;i<size;i++){
				cin>>data[i];
			}
		}
	 void display() {
        for (int i = 0; i < size; i++) {
            cout << data[i] << " "; 
        }
        cout << endl; 
    }
	
		
		sample operator&(sample);
};
sample sample :: operator&(sample s1){
	sample temp;
	for(int i=0;i<size;i++){
		for(int j=0;j<s1.size;j++){
			if(data[i]==s1.data[j]){
				int flag=0;
				for(int k=0;k<temp.size;k++){
					if(data[i]==temp.data[k]){
						flag=1;
						break;
					}
				}
				if(flag==0){
					temp.data[temp.size]=data[i];
					temp.size++;
				}
			}
		}
	}
	
	
	return temp;
	

}



int main() {
	sample v1(5),v2(5),v3(5);
	cout<<"enter first array"<<endl;
	v1.input();
	cout<<"enter second array"<<endl;
	v2.input();
	v3=v1&v2;
	cout<<"first array"<<endl;
	
	v1.display();
	cout<<"second array"<<endl;
	v2.display();
	cout<<"final array"<<endl;
	v3.display();
	
	
	return 0;
}
