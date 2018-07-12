#include <iostream>
using namespace std;

int main(){
	int B[2][3] = {{2,3,6}, {4,5,8}};
	int (*ptr)[3] = B;
		
	string delim = ", "; 
	
	cout<<"\n-----------------------------------------";
	cout<<"\n&B[0][0]:"<< &B[0][0] <<endl;
	cout<<"\nB:"<< B <<endl;
	cout<<"\n*B:"<< *B <<endl;
	cout<<"\nB[0]:"<< B[0] <<endl;
	
	cout<<"\n-----------------------------------------";
	cout<<"\n&B[1][0]:"<< &B[1][0] <<endl;
	cout<<"\nB+1:"<< (B+1) <<endl;
	cout<<"\n*(B+1):"<< *(B+1) <<endl;
	cout<<"\nB[1]:"<< B[1] <<endl;
	
	
	cout<<"\n-----------------------------------------";
	cout<<"\nValues accessed as B[i][j]: \n";
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 3; j++){
			//delim = (j==2) ? "\n" : ", ";
			cout<<B[i][j]<<delim;
		}
	}
	
	cout<<"\n-----------------------------------------";
	cout<<"\nValues accessed as *(B[i]+j): \n";
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 3; j++){
			//delim = (j==2) ? "\n" : ", ";
			cout<< *(B[i]+j) <<delim;
		}
	}
	
	cout<<"\n-----------------------------------------";
	cout<<"\nValues accessed as *(*(B+i)+j): \n";
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 3; j++){
			//delim = (j==2) ? "\n" : ", ";
			cout<< *(*(B+i)+j) <<delim;
		}
	}

}
