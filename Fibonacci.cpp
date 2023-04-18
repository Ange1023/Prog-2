#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
//Funcion fibonacci
long int fib(int n);
int main(){
	int n;
	printf("Ingrese valor de n: ");
	scanf("%i", &n);
	fib(n);
	printf("%li",fib(n));
	return 0;
}
long int fib(int n){
	if (n==0){
	 	return 0;
	}else if (n==1){
	 	return 1;
 	}else{
 		return fib(n-2) + fib(n-1);
 	}
 }