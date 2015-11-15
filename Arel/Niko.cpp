#include<iostream>
using namespace std;

void par(int);
void impar(int);

int main(){
    int a;
        cin>>a;
	par(a);
	cout<<"/n";
	impar(a);
}

void par(int x){
    for(int w=0; w<=x; w++)
	if(x%2==0)
	  cout<<w<<" ";
}
void impar(int y){
    for(int u=0; u<=y; u++)
	if(y%2==1)
	  cout<<u<<" ";
}
