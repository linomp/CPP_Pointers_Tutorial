#include <iostream>
using namespace std;

int main(){
	int a;
	int *p; //pointer to integer,  'int *p = &a' also works
	a = 5;
	p = &a; //initialized to point at the adress of 'a'
	cout<<"address of 'a' is: "<< (long long)p <<"\n";
	cout<<"value stored at address "<< (long long)p << " is: "<<*p<<"\n";
	cout<<"size of integer is: " <<sizeof(int) <<"\n"; 
	p++;
	cout<<"next integer address is: "<< (long long)p <<"\n"; 
	cout<<"value stored at address "<< (long long)p << " is: "<<*p;
	
}
