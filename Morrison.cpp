#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
int mrrs(int n, int m);
int main(){
	int n,m;
	printf("Ingrese el valor de n: ");
	scanf("%i", &n);
	printf("Ingrese el valor de m: ");
	scanf("%i", &m);
	mrrs(n,m);
	printf("%i", mrrs(n,m));
	return 0;
}
int mrrs(int n, int m){
 if (n==m){
	return (m+1);
 }else{
	return mrrs(n,mrrs(n-1,m+1));
 } 
}
