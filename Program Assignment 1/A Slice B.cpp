#include <iostream>
using namespace std;

int main(){
	int a, b, c=0;
	cout<<" Masukkan panjang himpunan A: ";
	cin>>a;
	cout<<" Masukkan panjang himpunan B: ";
	cin>>b;
	
	int A[a], B[b], C[a];
	cout<<" Masukkan nilai dari himpunan A: ";
	for(int i = 0; i < a; i++){
		cin>>A[i];
	}
	cout<<" Masukkan nilai dari himpunan B: ";
	for(int i = 0; i < b; i++){
		cin>>B[i];
	}
	
	system("cls");
	cout<<"\n Himpunan A =  {"<<A[0];
	for(int i = 1; i < a; i++){
		cout<<", "<<A[i];
	}cout<<"}";
	cout<<"\n Himpunan B =  {"<<B[0];
	for(int i = 1; i < b; i++){
		cout<<", "<<B[i];
	}cout<<"}";
	
	for(int i = 0; i < a; i++){
		for(int j = 0; j < b; j++){
			if(A[i]==B[j]){
				C[c]=A[i];
				c++;
				break;	
			}
		}
	}

	cout<<"\n\n A Irisan B = {"<<C[0];
	for(int i = 1; i < c; i++){
		cout<<", "<<C[i];
	}cout<<"}";
	return 0;
}