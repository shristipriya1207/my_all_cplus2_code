#include<iostream>
#include<fstream>
using namespace std;
int main(){
	ofstream o_file("content.txt");
	string content;
	getline(cin,content,'#');
	if(!o_file.is_open()){
		cout<<"error";
	}
else{
	o_file<<content;
	o_file.close();
	
}
	fstream obj("content.txt");
	char ch[20];
	int len,i;
	while(1){
		char temp;
		obj.get(temp);
		if(obj.eof()){
			break;
		}
		ch[i]=temp;
		i++;
	}
	len=i;
	cout<<"lenth of the strung is "<<len<<endl;
	
	for(i=0;i<len;i++){
		if(int(ch[i])>=97 && ch[i]<=122){
			ch[i]=char(int(ch[i])-32);}
			else if(int(ch[i])<=65 && ch[i]>=90){
				ch[i]=char(int(ch[i])+32);
		
			}
		
	}
	obj.close();
	
	fstream obj_i("content.txt");
	obj_i.seekp(0);
	for(i=0;i<len;i++){
		obj_i<<ch[i];
	}
	obj_i.close();
	cout<<"case converted :"<<endl;
	
	
	
	fstream i_file("content.txt",ios::in);
	char ch1;
	while(1){
		
//			ch1 = i_file.get();
i_file>>ch1;
			if(i_file.eof()){
				break;
			}
			cout<<ch1;
	}
	

	
	
	








return 0;

















}
