#include <iostream>
using namespace std;

int main(){
	int a;
	int *p; //pointer to integer,  'int *p = &a' also works
	a = 5;
	p = &a; //initialized to point at the adress of 'a'
	cout<<p<<"\n"; //prints the address of 'a', at which 'p' is pointing to
	cout<<&a<<"\n"; //prints the address of 'a' directly
	cout<<&p<<"\n"; //prints the address of 'p'
	//CONCEPT:  DE-REFERENCING
	//Using this operator we can get or modify the value at the particular location that 'p' points to
	// ' *p '  means: "value at p"
	cout<<*p<<"\n"; //prints the value stored at the address that 'p' is pointing to (i.e. the value of 'a')
	*p = 8; //modifes the value at the adress that 'p' is pointing to
	cout<<a; //will print modified value of 'a'
}


