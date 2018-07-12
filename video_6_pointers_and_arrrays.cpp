#include <iostream>
using namespace std;

int main(){
	int A[] = {4,1,7,5,54,8,9};
	//float A[] = {4,1,7,5,54,8,9};
	//double A[] = {4,1,7,5,54,8,9};
	//char A[7];
	//string A[7];
	//bool A[7];
		
	string delim; 
	int lenA = sizeof(A) / sizeof(A[0]); // size of A in bytes / size of an element in bytes
	cout<<"Size(A): "<<sizeof(A)<<" bytes";
	cout<<"\nSize(A[i]): "<<sizeof(A[0])<<" bytes";
	cout<<"\nNo. of elements in A: "<<lenA;
	
	cout<<"\n-----------------------------------------";
	cout<<"\nValues accessed as A[i]: \n";
	for(int i = 0; i < lenA; i++){
		delim = (i==lenA-1) ? "" : ", ";
		cout<<A[i]<<delim;
	}
	cout<<"\nValues accessed as *(A+i): \n";
	for(int i = 0; i < lenA; i++){
		delim = (i==lenA-1) ? "" : ", ";
		cout<<*(A+i)<<delim;
	}
	
	cout<<"\n-----------------------------------------";
	cout<<"\nAddresses accessed as A[i]: \n";
	for(int i = 0; i < lenA; i++){
		delim = (i==lenA-1) ? "" : ", ";
		cout<<(long long)&A[i]<<delim;
	}
	cout<<"\nAddresses accessed as (A+i): \n";
	for(int i = 0; i < lenA; i++){
		delim = (i==lenA-1) ? "" : ", ";
		cout<<(long long)(A+i)<<delim;
	}
	
}
