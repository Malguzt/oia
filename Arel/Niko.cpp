#include<iostream>
using namespace std;

void par(int);
void impar(int);
void primo(int);
bool primo2(int);
void fibonacci(int);

int main(){
	int a;
	cin>>a;
	cout<<"1. Numeros Pares \n \n";
	par(a);
	cout<<"\n";
	cout<<"2. Numeros Impares \n \n";
	impar(a);
	cout<<"\n";
	cout<<"3. Numeros Primos \n \n";
	primo(a);
	cout<<"\n";
	cout<<"4. Secuencia de Fibonacci \n \n";
	fibonacci(a);
	cout<<"\n";
	
	
}



void par(int x){
	for(int w=0; w<=x; w++)
		if (w%2==0)
		cout<<w<<" ";
}


void impar(int y){
	for(int p=0; p<y; p++)
		if(p%2==1)
		cout<<p<<" ";
	}


void primo(int z){
	int cont=0, i=2;
	while(cont<z){
		if(primo2(i)){
	       cout<<i<<" ";
	       cont++;
	   }
	   i++;
    }
}


bool primo2(int l){
	if(l==1 || l==4) return false;
	for(int i=2; i<l; i++){
		if(l%i==0){
			return false;
		}
	}
	return true;
}

void fibonacci(int q){
	int a,b, temp;
	for(int x=0;x<q;x++){
		temp=a;
		a=a+b;
		b=temp;
		cout<<a<<" ";
    }
}
