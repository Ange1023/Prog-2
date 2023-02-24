#include<stdio.h>
#include<stdlib.h>

typedef struct info_direccion{
	char direccion [30];
	char ciudad [20];
	char estado [20];
};

struct empleado{
	char nombre [20];
	struct info_direccion dir_empleado;
	double salario;
}empleados[2];

int main(){
	for(int i=0;i<2;i++){
	
		fflush(stdin);
		
		printf("%i. Digite su nombre: ", i+1);
		gets(empleados[i].nombre);
		
		printf("%i. Digite su Direccion: ", i+1);
		gets(empleados[i].dir_empleado.direccion);
		
		printf("%i. Digite su Ciudad: ", i+1);
		gets(empleados[i].dir_empleado.ciudad);
		
		printf("%i. Digite su Estado: ", i+1);
		gets(empleados[i].dir_empleado.estado);
		
		printf("%i. Digite su Salarios: ", i+1);
		scanf("%lf", &empleados[i].salario);
		
		printf("\n");
		
	}
	for(int i=0; i<2; i++){
		printf("\n\n Datos del empleado #%i:", i+1);
		printf("\nNombre: %s", empleados[i].nombre);
		printf("\nDireccion: %s",empleados[i].dir_empleado.direccion);
		printf("\nCiudad: %s", empleados[i].dir_empleado.ciudad);
		printf("\nEstado: %s", empleados[i].dir_empleado.estado);
		printf("\nSalario: %lf", empleados[i].salario);
	}
	return 0;
}
		
		
		

	