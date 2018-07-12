#include <iostream>
using namespace std;
void increment_1(int);
void increment_2(int*);

int main(){
	int a = 10;
	cout<<"a = "<<a<<"\n"; 
	
	increment_1(a);  //passing the value of 'a' as argument (CALLING A fcn BY VALUE)
	cout<<"AFTER CALLING BY VALUE // a = "<<a<<"\n"; 
	
	increment_2(&a);  //passing the address of 'a' as argument (CALLING A fcn BY REFERENCE)
	cout<<"AFTER CALLING BY REFERENCE // a = "<<a<<"\n"; 
	
}

void increment_1(int a){
	//Receives an integer as argument and copies its value to local variable 'a'
	a = a + 1; //increment the value of local variable 'a' by 1.
}

void increment_2(int *p){
	//Receives an address as argument and pointer 'p' is set to point to such adress
	*p = *p + 1; //increment the value stored at the adress that p is pointing to by 1;
}


