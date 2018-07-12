#include<iostream>
using namespace std;

void printHW(){
	cout<<"\nHello World";
}

int* add(int* a, int* b){
	int c = (*a) + (*b); 
	return &c;
}

int* add2(int* a, int* b){
	int* c = new int;
	*c = (*a) + (*b); 
	return c;
}

int main(){
	
	int a = 2, b = 4;
	
	/* 1ST EXERCISE
	//local variable 'c' of 'main' stores the adress of the local 
	//variable 'c' of function 'add':
	int* c = add(&a,&b); 
	
	// This will print the address where the local variable 'c' of 'add' 
	// was once stored (in the stack frame of 'add' when it was called)
	cout<<"\nAddress of Result: "<<c; 
	
	//This outputs a garbage value because memory at &c ( local variable of 
	//'add') has been de-allocated by this point.
	cout<<"\nResult: "<<*c; 
	*/
	
	/* 2ND EXERCISE 
	//This works because 'add' is called and the returned address is inmediately
	//de-referenced and the value stored (a+b) is printed. The stack frame for that
	//particular call of 'add' is then de-allocated. (Am i interpreting this order
	//correctly? is this safe?)
	cout<<"\nResult: "<<*add(&a,&b);
	*/
	
	
	/* 3RD EXERCISE */
	
	//add2 returns address of a variable stored in the heap section 
	int* c = add2(&a,&b); 
	printHW(); //stack frameof add2 is de-allocated and this call probably overwrites it
	
	//The address of local variable 'c' of 'add2' is stored in local 'c' of main, and
	//it corresponds to a block in the heap section.
	cout<<"\nAddress of Result: "<<c; 
	
	//The value stored at that address is not altered because what is stored in heap must
	// be explicitly de-allocated- 
	cout<<"\nResult: "<<*c; 
	delete c;
	
	/* CONCLUSIONS: ANYTHING IN THE HEAP SECTION HAS TO BE EXPLICITLY DE-ALLOCATED
	AND ANYTHING IN THE GLOBAL SECTION HAS A 'LIFETIME' EQUAL TO THE RUNNING TIME OF
	THE PROGRAM, SO IT IS SAFE TO HAVE FUNCTIONS THAT RETURN ADRESSES OF VARIABLES STORED
	IN THESE SECTIONS BUT NOT FROM THE STACK. */
	
}
