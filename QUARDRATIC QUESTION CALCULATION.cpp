#include <iostream>
using namespace std;
int main(){
		
		//	y = 2+z + (x^2 +5/20) + 5;
		// y = 4x + z;
		// y = 3xz + (x^3 / z^2)
		
		cout<<"\n1. y = 2+z + (x^2 + 5/2) + 5."<<endl;
		cout<<"2. y = 4x + z."<<endl;
		cout<<"3. y = 3xz + (x^3 / z^2)."<<endl;
			
		cout<<"\n* Which equation would you like to perform?"<<endl;
		cout<<"* Enter a number fo the given equations. "<<endl; 
		
		int choice;
		int x;
		int z;
		cin>>choice;		
	switch(choice){
				case 1:{
				cout<<"Ok,\ny = 2+z + (x^2 + 5/2) + 5"<<endl;
				cout<<". Enter the value of x."<<endl;
				cin>>x;
				cout<<". Now, enter the value of z."<<endl;
				cin>>z;
				cout<<"y = "<<2+z + (x^2 + 5/2)<<endl;
				break;
			}
			case 2:{
				cout<<"Ok,\ny = 4x + z"<<endl;
				cout<<". Enter the value of x."<<endl;
				cin>>x;
				cout<<". Now, enter the value of z."<<endl;
				cin>>z;
				cout<<"y = "<<4*x + z<<endl;
				
				break;
			}
			case 3:{
				cout<<"Ok,\ny = 3xz + (x^3 / z^2)"<<endl;
				cout<<". Enter the value of x."<<endl;
				cin>>x;
				cout<<". Now, enter the value of z."<<endl;
				cin>>z;
				cout<<"y = "<<3*x*z + (x^3 / z^2)<<endl;
				
				break;
			}
			default:
				cout<<"Invalid input.";	
	}
		
		
		
		
		
	
	return 0;
}