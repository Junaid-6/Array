#include<iostream>
using namespace std;
int main(){
	int array[2][2] = {{1,2},{3,4}};
	for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
			cout<<**(array+i)+j<<" ";
		}
	}
	int arr[3][5][5];
	int rows = sizeof(arr)/sizeof(arr[0]);
    int cols = sizeof(arr[0])/sizeof(arr[0][0]);
    int k = sizeof(arr[0][0])/sizeof(arr[0][0][0]);
    cout<<"\n"<<rows<<" ,"<<cols<<", "<<k;
}