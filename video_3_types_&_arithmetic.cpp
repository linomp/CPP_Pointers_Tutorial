#include <iostream>
using namespace std;

int main(){
	int a = 1025;
	int *p; //pointer to integer,  'int *p = &a' also works 
	p = &a; //initialized to point at the adress of 'a'
	
	cout<<"size of integer is: " <<sizeof(int) <<"\n";  
	cout<<"address of 'a' is: "<< (long long)p <<"\n";
	cout<<"value stored at address "<< (long long)p << " is: "<<*p<<"\n"; 
	
	char *p0 = 0;
	char b = 'H'; 
	p0 = &b;
	cout<<"p0 points to address "<< (long long)p0 <<"\n";
	cout<<"value stored at address "<< (long long)p0 << " is: "<<*p0<<"\n"; 
}
