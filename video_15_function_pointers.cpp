#include<iostream>

int add(int a, int b){
	return a + b;
}

int main(){
	int (*p)(int,int); // p must be initialized with the same parameter list as the function it will point to. 
							 // the parentheses (*p) mean that the function returns an int. 
							 // int *p (int,int) would mean that the fcn takes two ints and returns a pointer to int. 
	p = &add; // p now points to the address in which the first instruction of the function 'add' is stored. 
				 // ('text' section of application's memory!!)
				 // 'p = add' also works
	int c = (*p)(2,3); // De-referencing p to get the function and passing the arguments, and storing the returned value.
							 // 'c = p(2,3)' also works
	printf("c = %d",c);
}

