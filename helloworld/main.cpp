#include <iostream>
#include <stdio.h>

using namespace std;

int factorial(int n){
    int acum=1;
    while(n>1){acum=acum*n,n--;}
    return acum;
}

int primo(int n){
    if (n%2==0 && n!=2)return 0;
    int acum=0,counter=1;
    while(counter<(n/2)){
    if (n%counter==0){acum++;cout<<acum<<endl;}
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




int main(){

    int n;
    cin>>n;
    //cout<<factorial(n)<<endl;
    cout<<primo(n)<<endl;
    //int a,b,c;

    //cout<<"Escriba los 3 numeros\n";cin>>a>>b>>c;
    //comparar3(a,b,c);


}
