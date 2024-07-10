#include <iostream>
using namespace std;

class matrix{
int data[25][25], size;
public:
matrix(): size(0){
}
matrix(int s){
size=s;
}
void input()
{
for( int i=0 ; i<size ;i++)
{
for(int j=0 ; j<size; j++)
{
cin>>data[i][j];
}
cout<<endl;
}
}
void display()
{
		
for( int i=0 ; i<size ;i++)
{
for(int j=0 ; j<size; j++)
{
cout<<data[i][j]<<"  ";
}
cout<<endl;
}
}
bool operator==(const matrix &);
matrix operator+(const matrix &);
matrix operator-(const matrix &);
};
bool matrix::operator==(const matrix &c1)
{
for(int i=0;i<size;i++){ 
for(int j=0;j<size;j++){
if(data[i][j]==c1.data[i][j]){
return true;
}
else{
return false;
}
}
}}
 	
matrix matrix :: operator+(const matrix &c1){
matrix t1(size);
for(int i=0;i<size;i++){
for(int j=0;j<size;j++){
t1.data[i][j]=data[i][j]+c1.data[i][j];
}
}
return t1;
}
matrix matrix :: operator-( const matrix &c1){
matrix t1(size);
for(int i=0;i<size;i++){
for(int j=0;j<size;j++){
t1.data[i][j]=data[i][j]-c1.data[i][j];
}
}
return t1;
}

int main() {
matrix m1(2),m2(2),m3(2),m4(2);
cout<<"enter first matrix"<<endl;
m1.input();
cout<<"enter second matrix"<<endl;
m2.input();
cout<<"first matrix"<<endl;
m1.display();
cout<<"second matrix"<<endl;
m2.display();
if(m1==m2){
m3=m1+m2;
m4=m1-m2;
cout<<"addition done"<<endl;
m3.display();
cout<<"substraction done"<<endl;
m4.display();
}
else{
cout<<"error ";
}
	
return 0;
}
