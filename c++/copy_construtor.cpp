#include <iostream>
using namespace std;
class fruits{
	int mango;
	int apple;
	int papaya;
	
	public:
		fruits(int m,int a,int p){
		mango=m;
			apple=a;
			
			papaya=p;
			
           cout<<"parameterised cons\n";
           cout<<mango<<apple<<papaya;
		   		}
		fruits(fruits &f)
		{
		mango=f.mango;
	apple=f.apple;
		papaya=f.papaya;
		cout<<"copy cons";
		cout<<mango<<apple<<papaya;
		
			
		}
};

int main() {
	fruits f1(5,6,7);
	fruits f2(f1);
	
	return 0;
}
