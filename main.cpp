#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

void lista(int len,int l[][10]){
	for(int i=0;i<len;i++){
		for(int j=0;j<len;j++){
			l[i][j]=rand()%6-3;
			cout<<l[i][j]<<" ";
		}
		cout<<endl;
	}
}

void multmatriz(int len,int l[][10],int respuesta[][10]){
	int acum;
	for(int i=0;i<len;i++){
		for(int j=0;j<len;j++){
			acum=0;
			for(int k=0;k<len;k++){
				acum+=l[k][i]*l[j][k];
			}
			respuesta[i][j]=acum;
			cout<<acum<<" ";
		}
		cout<<endl;
	}
}

int main(){
	int len;
	long long  asd;
	cout<<asd*asd*asd*asd*asd*asd*asd*asd*asd*asd*asd;
	cin>>len;
	int l[len][10],l2[len][10];
	srand(time(NULL));
	lista(len,l);
	cout<<endl;
	lista(len,l2);
	cout<<endl;
	multmatriz(len,l,l2);
	return 69;
}
