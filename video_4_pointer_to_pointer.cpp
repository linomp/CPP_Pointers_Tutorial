#include <iostream>
using namespace std;

int main(){
	int x = 6;
	int *p = &x; // declare 'p' as a pointer to [int] and set it to point at integer 'x' 
	int **q = &p; // declare 'q' as a pointer to [pointer to int] and set it to point at pointer 'p'
	int ***r = &q; // declare 'r' as a pointer to [pointer to pointer to int] and set it to point at pointer 'q'
	
	//p -> x             (p points to x)
	//q -> p -> x        (q points to p, and p points to x)
	//r -> q -> p -> x    (r points to q,  q points to p, and p points to x)
	
	cout<<*p<<"\n"; //prints the value stored at the adress that 'p' is pointing to (value of 'x')
	
	cout<<*q<<"\n"; //prints the value stored at the address that 'q' is pointing to (i.e. the value
					//stored at the address of 'p', i.e. address of 'x')
					
	cout<<*(*q)<<"\n"; //prints the value stored at the address that is stored at the address that 'q' is pointing to 
					   //(i.e. the value stored at the address that 'p' is pointing to, i.e. the value of 'x')
	
	cout<<*r<<"\n"; //prints the value stored at the address that 'r' is pointing to. (i.e. the value stored at the adress
					//of 'q', i.e. the address of 'p')
					
	cout<<*(*r)<<"\n";//prints the value stored at the address that is stored at the address that 'r' is pointing to. 
					  //(i.e. the value stored at the adress that'q' is pointing to, i.e. the value stored address of 'p',
					  // i.e the adress of 'x')
					  
	cout<<*(*(*r))<<"\n";//prints the value stored at the address that is stored at the address that is stored at the address 
						//that 'r' is pointing to. (i.e. the value stored at the adress that is stored at the adress 
						//that'q' is pointing to, (i.e. the value stored address that 'p' is pointing to, 
						//i.e the value of 'x')
}
