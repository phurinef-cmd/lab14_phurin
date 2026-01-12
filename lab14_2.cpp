#include<iostream>
using namespace std;

const int N = 5;

void inputMatrix(double [][N]);

void findLocalMax(const double [][N], bool [][N]);

void showMatrix(const bool [][N]);

int main(){
	double A[N][N]; 
	bool B[N][N]; 
	cout << "Input the matrix.....\n";
	inputMatrix(A);
	findLocalMax(A,B);
	cout << "Result is \n";
	showMatrix(B);
	return 0;
}

//Do not modify source code above this line 

void showMatrix(const bool b[][N]){
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			cout << b[i][j] << " ";
		}
		cout << "\n";
	 }
	}
void inputMatrix(double d[][N]){
	 for(int i=0;i<N;i++){
		cout << "Row " << i+1 << ": ";
		for(int j=0;j<N;j++){
			cin >> d[i][j];
		}
	 }
	}
void findLocalMax(const double d[][N], bool b[][N]){
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			if(d[i][j]>=d[i-1][j] && d[i][j]>=d[i+1][j] && d[i][j]>=d[i][j-1] && d[i][j]>=d[i][j+1]){
				b[i][j]=1;
			}
			else{
				b[i][j]=0;
			}
			
		}
	for(int i=0;i<N;i++){
		if(i==0 || i==N-1){
			for(int j=0;j<N;j++){
				b[i][j]=0;
			}
		continue;
		}
		for(int j=0;j<N;j++){
			if(j==0 || j==N-1){
				b[i][j]=0;
			}
		}
	}
}	
}