#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
//Funcion Ackerman
int A(int m, int n);
int main(){
	int m,n;
	printf("Ingrese valor de m: ");
	scanf("%i", &m);
	printf("Ingrese valor de n: ");
	scanf("%i", &n);
	A(m,n);
	printf("\n %i", A(m,n));
	return 0;
}
int A(int m,int n){
	if(m==0){
		return n+1;
	}else if(m>0 && n==0){
		return A(m-1,1);
	}else{
		return A(m-1,A(m,n-1));	
	}
		
	
	
}