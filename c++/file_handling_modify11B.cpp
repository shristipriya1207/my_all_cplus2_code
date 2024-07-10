#include <iostream>
#include<fstream>
using namespace std;
class item{
	public:
		char item_name[20];
		int item_code, unit_price,quantity;
		item(){
			item_code=0
		}
		
		void getData(){
                        cout << "Enter Item name : ";
                        cin >> item_name;
                        cout << "Enter Unit price : ";
                        cin >> unit_price;
                        cout << "Enter quantity in hand : ";
                        cin >> quantity;
                }
                void showData(){
                        cout << "\n\nItem code : " << item_code << "\tItem name : " << item_name;
                        cout << "\nUnit price : " << unit_price << "\tQuantity : " << quantity << endl;
                }
		
		
		
		
};
 int getitemid(){
 	ifstream i_file("modify.txt");
 	item.obj;
 	i_file.read((char*) &obj, sizeof(obj));
 	while(!i_file.eof()){
 		i_file.read((char*) &obj, sizeof(obj));
 		
	 }
	 if(obj.item_code>0){
	 	return obj.item_code +=1;
	 }
	 else
	 return 1;
 }
 
 
 
 int main(){
 	ofstream o_file;
 	item obj;
 	int ch,id,i_num,pos,found;
 	do{
 		 cout << "\n\n1.Add item\n2.Modify item\n3.Display Item\n4.Exit\nEnter your choice : ";
 		 cin>>ch;
 		 switch(ch){
 		 	case 1:
 		 		o_file.open("modift.txt", ios::app);
 		 		id=getitemid();
 		 		obj.getData();
 		 		obj.item_code=id;
 		 		o_file.write((Char*) &obj, sizeof(obj));
 		 		o_file.close();
				  break; 		 		
 		 	
 		 	case 2:
 		 		
		  }
	 }
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 }
