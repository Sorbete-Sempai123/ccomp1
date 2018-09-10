#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int factorial(int n){
    int acum=1;
    while(n>1){acum=acum*n,n--;}
    return acum;
}

void cambio(int *x,int *y){
	*x=*x+*y;
	*y=*x-*y;
	*x=*x-*y;
}

int fibonacci(int n){ //numero de veces
	int a=0,b=1,acum=b,acum_2=0;
	for(int i=0;(a<n && b<n);i++){
		acum=a+b;
		if(!(acum%2))acum_2+=acum;
		a=b;b=acum;
	}
	return acum_2;
}

int sum_dig(int x){
	int acum=0;
	for(int i=1;x>9;i++){
		acum=acum+x%10;
		x/=10;
	}
	acum+=x;
	return acum;
}

bool num_perfect(int n){
    int acum=0;
    for(int i=1;i<n/2+1;i++){
    if(n%i==0)acum+=i;
    }
    if (acum==n)return 1;
    return 0;
}
int primo(int n){
    if (n%2==0 && n!=2)return 0;
    int acum=0,counter=1;
    while(counter<(n/2)){
        if (n%counter==0){
            acum++;cout<<acum<<endl;
        }
        if(acum>1)return 0;
            counter=counter+2;

    }
    return 1;
}

int comparar(int n,int m){
    if(n<m)cout<<m<<" Es mayor que "<<n<<endl;
    else if (n==m)cout<<n<<" Es igual que "<<m<<endl;
    else printf("%d Es mayor que %d ",n,m);
}

int comparar3(int n,int m,int o){
    if(n>m && n>o){if(m>o)cout<<n<<" Es mayor que "<<m<<" Es mayor que "<<o;else cout<<n<<" Es mayor que "<<o<<" Es mayor que "<<m;}
    else if(m>n && m>o){if(n>o)cout<<m<<" Es mayor que "<<n<<" Es mayor que "<<o;else cout<<m<<" Es mayor que "<<o<<" Es mayor que "<<n;}
    else if (m==n && n==o) cout<<"Todos son iguales";
    else {if(n>m)cout<<o<<" Es mayor que "<<n<<" Es mayor que "<<m;else cout<<o<<" Es mayor que "<<m<<" Es mayor que "<<n;}
}

bool colision(int x, int y,int tamx,int tamy, int x2 , int y2,int tamx2 , int tamy2){
    int deltax=(tamx-tamx2),deltay=(tamy-tamy2);
    if (deltax>0)deltax=deltax*-1;
    if (deltay>0)deltay=deltay*-1;
    if (deltax-tamx/2-tamx2/2<0 && deltay-tamy/2-tamy2/2<0) return 1;

}



int main(){

    long long n;
    cin>>n;
    //cout<<factorial(n)<<endl;
    cout<<num_perfect(n)<<"\tNumero Perfecto"<<endl;
    cout<<primo(n)<<"\tNumero Primo\n";
    for(long long i=1;i<n+1;i++){
    if(num_perfect(pow(2,i-1)*(pow(2,i)-1)))
    cout<<(long long)(pow(2,i-1)*(pow(2,i)-1))<<endl;
    }//int a,b,c;

    //cout<<"Escriba los 3 numeros\n";cin>>a>>b>>c;
    //comparar3(a,b,c);


}
