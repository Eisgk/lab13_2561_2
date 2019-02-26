#include <iostream>
#include <string>
using namespace std;

int pos;
template <typename T>
void swap(T d[],int x,int y){
    T temp = d[x];
    d[x] = d[y];
    d[y] = temp;
	pos = x;
}

template <typename T>
void insertionSort(T d[],int N){
	int key,j;
	for(int i = 1; i < N; i++){
		key = d[i];
		for(int k = 0; k < N; k++){
			if (k==1) cout << "[" << d[k] << "]";
			else cout << d[k] << " ";
		}
		j = i-1;			
		pos = i;
		while(j >= 0 && d[j] < key){
			swap(d,j,j+1);
			j--;
		}
		d[j+1] = key;
		cout << " => ";
		for(int k = 0; k < N; k++){
			if (k==pos) cout << "[" << d[k] << "] ";
			else cout << d[k] << " ";
		}	
		cout << "\n" ;
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
