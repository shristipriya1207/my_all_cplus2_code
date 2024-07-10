#include <iostream>
#include<string>
using namespace std;
int my_strcmp(string s1, string s2)
{
int i=0;
int chk=0;
	while(s1[i]!='\0' && s2[i]!='\0'){
		if (s1[i] != s2[i]){
			chk=1;
			break;
		}
		i++;
	}
	if(chk==1){
		return 0;
	}
	else
	return 1;
}


int size( string s1){
	int i=0;
	 while(s1[i]!='\0'){
	 	i++;
	 }
	 return i;
	
	
}

string my_strcpy(string s1 , string s2){
	int i=0;
	for( i=0;s2[i]='\0';i++){
		s1[i]=s2[i];
	}
//	s1[i]='\0';
cout<<s1;
	return s1;
	
}





int main(){
string str1;
string str2;
int res;int len;
string res1;
string des;
cout<<"First string :";
cin>>str1;
cout<<"Second string :";
cin>>str2;
res=my_strcmp(str1,str2);
if(res== 0){
	cout<<"string is not equal "<<endl;
}
else{
	cout<<"string is equal "<<endl;
}


len=size(str1);
cout<<len<<endl;

res1=my_strcpy(des,str2);
cout<<"copied";

cout<<res1;

return 0;
	
}


