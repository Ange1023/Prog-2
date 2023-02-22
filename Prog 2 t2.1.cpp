#include<stdio.h>
void leer_M(int M[10][10], int f, int c)
{
	int i,j;
	for(i=0;i<f;i++){
		for(j=0;j<c;j++){
			printf("Ingresa los valores de la matriz [%d][%d]: ", i+1, j+1);
			scanf("%d", &M[i][j]);
		}
	}
	return;	
}
void escribir_M(int M[10][10], int f, int c){
	int i,j;
	for(i=0;i<f;i++){
		for(j=0;j<c;j++){
			printf(" %d", M[i][j]);
		}
		printf(" \n");
	}
	return;
}
void multiplicacion(int f1, int f2, int c1, int c2, int M1[10][10], int M2[10][10], int M3[10][10]){
	int i,j,k;
	for(i=0;i<f1;i++){
		for(k=0;k<c2;k++){
			M3[i][k]=0;
		}	
	}
	for(i=0;i<f1;i++){
		for(j=0;j<c1;j++){
			for(k=0;k<c2;k++){
				M3[i][k]= M3[i][k]+M1[i][j]*M2[j][k];
			}
		}
	}
	return;
}
int main(){
	int f1,f2,c1,c2;
	int M1[10][10], M2[10][10], M3[10][10];
	printf("Filas de matriz 1: ");
	scanf("%d", &f1);
	printf("Columnas de matriz 1: ");
	scanf("%d", &c1);
	leer_M(M1, f1, c1);
	do{
		printf("Filas de matriz 2: ");
		scanf("%d", &f2);
		printf("Columnas de matriz 2: ");
		scanf("%d", &c2);
		if(c1!=f2){
			printf("Error, el nro de columnas de m1 debe coincidir con el nro de filas de m2. \n");
		}
	}while(c1!=f2);
	leer_M(M2, f2, c2);
	printf("\nMatriz 1: \n\n");
	escribir_M(M1, f1, c1);
	printf("\nMatriz 2: \n\n");
	escribir_M(M2, f2, c2);
	multiplicacion(f1, f2, c1, c2, M1, M2, M3);
	printf("\nMatriz resultante: \n\n");
	escribir_M(M3,f1,c2);
	return 0;
}