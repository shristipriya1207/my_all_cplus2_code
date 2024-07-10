#include<iostream>
using namespace std;

class sample{
    int row,col;
    int **m;
    public:
    sample(){
        row=col=0;
    }
    sample(int r,int c){
        row=r;
        col=c;
        m=new int*[row];
        for(int i=0;i<row;i++){
            m[i]=new int[col];
        }
    }
    
    friend ostream & operator<<(ostream &,sample &);
    friend istream & operator>>(istream &,sample &);
    ~sample() {
        for (int i = 0; i < row; i++) {
            delete[] m[i];
        }
        delete[] m;
    }
    
};
istream & operator>>(istream &in,sample &s1){
    for(int i=0;i<s1.row;i++){
        for(int j=0;j<s1.col;j++){
            in>>s1.m[i][j];
        }
    }
    return in;
}

ostream & operator<<(ostream &out,sample & s2){
    for(int i=0;i<s2.row;i++){
        for(int j=0;j<s2.col;j++){
            out<<s2.m[i][j]<<"   ";
        }
        cout<<endl;
    }
    return out;
    
}
 int main(){
     int r,c;
     cout<<"enter the row and col :";
     cin>>r>>c;
     sample c1(r,c);
     cout<<"Enter the element for the  matrix :";
     cin>>c1;
     cout<<" matrix :"<<endl;
     cout<<c1;
     return 0;
     
     
     
 }
























