#include <iostream>
using namespace std;

template <typename T>
void insertionSort(T d[],int N){
    for(int i =0; i<N;i++){
		if(i==N-1){
			break;
		}

		if (d[i]<d[i+1]){
			T key = d[i+1];
			  d[i+1]=d[i];
			  d[i]=key;
			for(int j=i;j>0;j--){
				if(d[j]>d[j-1]){
					T key = d[j-1];
					d[j-1]=d[j];
					d[j]=key;
				}
				else break;
			}
			}
		cout << "Pass " << i+1 << ":";	
		for(int j=0;j<N;j++){
			cout << d[j] << " ";
		}
		cout << "\n";

	}
}


int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}
