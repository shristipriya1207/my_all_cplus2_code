#include<iostream>
using namespace std;

class sample{
    int real,imag;
    public:
    sample(int r=0,int i=0){
        real=r;
        imag=i;
    }
    friend ostream & operator<<(ostream &, sample &);
    friend istream & operator>>(istream &, sample &);
    
};
ostream &operator<<(ostream &out,sample &s1){
    out<<s1.real <<"+i"<<s1.imag<<endl;
    return out;
}
istream &operator>>(istream &in,sample &s2){
    cout<<"Enter the real part :";
    in>>s2.real;
    cout<<"Enter the imag part :";
    in>>s2.imag;
    return in;
}


int main(){
    sample c1,c2;
    cout<<"Enter the complex numbers "<<endl;
    cin>>c1>>c2;
    cout<<"complex number :";
    cout<<c1<<c2;
    return 0;
}

