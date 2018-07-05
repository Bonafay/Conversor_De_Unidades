
#include <stdio.h>
#include <stdlib.h>

int menu(void);
void longitud(void);

int main(void)
{
	int opcion;
	
	opcion = menu();
	system("cls");
	switch (opcion)
	{
		case 1:
			longitud();
			break;
		case 2:
			//masa();
			break;
		case 3:
			//presion();
			break;
		case 4:
			//energia();
			break;
		case 5:
			//temperatura();
			break;
	}
	
	
	
}

			// F U N C I O N E S
int menu(void)
{
	int opcion = 0;
	
	while(opcion < 1 || opcion > 5)
	{
		system("cls");
		printf("\t\tConversion de unidades\n");
		printf("1.- Longitud\n");
		printf("2.- Masa\n");
		printf("3.- Presion\n");
		printf("4.- Energia\n");
		printf("5.- Temperatura\n >> ");
	
		scanf("%d", &opcion);
		fflush(stdin);
	}
	
	return opcion;
}

void longitud(void)
{
	char conversion;
	
	printf("\t\tLongitud\n");
	printf("a) Metro -> Milla\n");
	printf("b) Metro -> Yarda\n");
	printf("c) Metro -> Pie\n");
	printf("d) Metro -> Pulgada\n");
	printf("e) Metro -> Milla nautica\n");
}
