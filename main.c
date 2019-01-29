
#include <stdio.h>
#include <stdlib.h>

int menu(void);
void dist(void);
void mass(void);
void temp(void);
void press(void);
void energy(void);

int main(void)
{
	int opcion;
	system("mode 55,20");
	do
	{
		opcion = menu();
		system("cls");

		switch (opcion)
		{
			case 1:
				dist();
				break;
			case 2:
				mass();
				break;
			case 3:
				press();
				break;
			case 4:
				energy();
				break;
			case 5:
				temp();
				break;
		}
	}
	while(opcion != 0);
	return 0;
}

			// F U N C I O N E S
int menu(void)
{
	int opcion;
	
	do
	{
		system("cls");
		printf("\t\tConversion de unidades\n");
		printf("1.- Longitud\n");
		printf("2.- Masa\n");
		printf("3.- Presion\n");
		printf("4.- Energia\n");
		printf("5.- Temperatura\n");
		printf("0.- Salir\n >> ");
	
		scanf("%d", &opcion);
		fflush(stdin);
	}
	while(opcion < 0 || opcion > 5);
	
	return opcion;
}

// Funcion Distancia
void dist(void)
{
	int conversion;
	int seleccion;
	do
	{
		system("cls");
		printf("\t\tLongitud\n");
		printf("1) Ingles -> SI\n");
		printf("2) SI -> Ingles\n");
		printf("0.- Regresar\n >> ");
		scanf("%d", &conversion);
		fflush(stdin);
	}
	while(conversion < 0 || conversion > 2);
	
	switch(conversion)
	{
		case  1:
			do
			{
				system("cls");
				printf("\tLongitud: Del Ingles al SI\n");
				printf("1) Pies \n");
				printf("2) Pulgadas\n");
				printf("3) Milla\n");
				printf("0) Regresar\n >> ");
				scanf("%d", &seleccion);
				fflush(stdin);
			}
			while(seleccion < 0 || seleccion > 3);
			
			switch(seleccion)
			{
				case 1:
					
					break;
				case 2:
					
					break;
				case 3:
					
					break;
			}
		break;
		case 2:
			do
			{
				system("cls");
				printf("\tLongitud: Del Ingles al SI\n");
				printf("1) pie \n");
				printf("2) pulgadas\n");
				printf("3) milla\n");
				printf("0) Regresar\n >> ");
				scanf("%d", &seleccion);
				fflush(stdin);
			}
			while(seleccion < 0 || seleccion > 3);
			
			switch(seleccion)
			{
				case 1:
					
					break;
				case 2:
					
					break;
				case 3:
					
					break;
			}
		break;
	}
}


// Funcion Masa
void mass(void)
{
	int conversion;
	int seleccion;
	do
	{
		system("cls");
		printf("\t\tMasa\n");
		printf("1) Ingles -> SI\n");
		printf("2) SI -> Ingles\n");
		printf("0.- Regresar\n >> ");
		scanf("%d", &conversion);
		fflush(stdin);
	}
	while(conversion < 0 || conversion > 2);
	
	switch(conversion)
	{
		case  1:
			do
			{
				system("cls");
				printf("\tMass: Del Ingles al SI\n");
				printf("1) libra \n");
				printf("2) Onza\n");
				printf("3) Stone\n");
				printf("0) Regresar\n >> ");
				scanf("%d", &seleccion);
				fflush(stdin);
			}
			while(seleccion < 0 || seleccion > 3);
			
			switch(seleccion)
			{
				case 1:
					
					break;
				case 2:
					
					break;
				case 3:
					
					break;
			}
		break;
		case 2:
			do
			{
				system("cls");
				printf("\tMasa: Del Ingles al SI\n");
				printf("1) libra \n");
				printf("2) Onza\n");
				printf("3) Stone\n");
				printf("0) Regresar\n >> ");
				scanf("%d", &seleccion);
				fflush(stdin);
			}
			while(seleccion < 0 || seleccion > 3);
			
			switch(seleccion)
			{
				case 1:
					
					break;
				case 2:
					
					break;
				case 3:
					
					break;
			}
		break;
	}
}


// Funcion Presion
void press(void)
{
	int conversion;
	int seleccion;
	do
	{
		system("cls");
		printf("\t\tPresion\n");
		printf("1) Ingles -> SI\n");
		printf("2) SI -> Ingles\n");
		printf("0.- Regresar\n >> ");
		scanf("%d", &conversion);
		fflush(stdin);
	}
	while(conversion < 0 || conversion > 2);
	
	switch(conversion)
	{
		case  1:
			do
			{
				system("cls");
				printf("\tPresion: Del Ingles al SI\n");
				printf("1)  \n");
				printf("2) \n");
				printf("3) \n");
				printf("0) Regresar\n >> ");
				scanf("%d", &seleccion);
				fflush(stdin);
			}
			while(seleccion < 0 || seleccion > 3);
			
			switch(seleccion)
			{
				case 1:
					
					break;
				case 2:
					
					break;
				case 3:
					
					break;
			}
		break;
		case 2:
			do
			{
				system("cls");
				printf("\tPresion: Del Ingles al SI\n");
				printf("1)  \n");
				printf("2) \n");
				printf("3) \n");
				printf("0) Regresar\n >> ");
				scanf("%d", &seleccion);
				fflush(stdin);
			}
			while(seleccion < 0 || seleccion > 3);
			
			switch(seleccion)
			{
				case 1:
					
					break;
				case 2:
					
					break;
				case 3:
					
					break;
			}
		break;
	}
}


// Funcion Energia
void energy(void)
{
	int conversion;
	int seleccion;
	do
	{
		system("cls");
		printf("\t\tEnergia\n");
		printf("1) Ingles -> SI\n");
		printf("2) SI -> Ingles\n");
		printf("0.- Regresar\n >> ");
		scanf("%d", &conversion);
		fflush(stdin);
	}
	while(conversion < 0 || conversion > 2);
	
	switch(conversion)
	{
		case  1:
			do
			{
				system("cls");
				printf("\tEnergia: Del Ingles al SI\n");
				printf("1)  \n");
				printf("2) \n");
				printf("3) \n");
				printf("0) Regresar\n >> ");
				scanf("%d", &seleccion);
				fflush(stdin);
			}
			while(seleccion < 0 || seleccion > 3);
			
			switch(seleccion)
			{
				case 1:
					
					break;
				case 2:
					
					break;
				case 3:
					
					break;
			}
		break;
		case 2:
			do
			{
				system("cls");
				printf("\tEnergia: Del Ingles al SI\n");
				printf("1)  \n");
				printf("2) \n");
				printf("3) \n");
				printf("0) Regresar\n >> ");
				scanf("%d", &seleccion);
				fflush(stdin);
			}
			while(seleccion < 0 || seleccion > 3);
			
			switch(seleccion)
			{
				case 1:
					
					break;
				case 2:
					
					break;
				case 3:
					
					break;
			}
		break;
	}
}


// Funcion Temperatura
void temp(void)
{
	int conversion;
	int seleccion;
	do
	{
		system("cls");
		printf("\t\tTemperatura\n");
		printf("1) Ingles -> SI\n");
		printf("2) SI -> Ingles\n");
		printf("0.- Regresar\n >> ");
		scanf("%d", &conversion);
		fflush(stdin);
	}
	while(conversion < 0 || conversion > 2);
	
	switch(conversion)
	{
		case  1:
			do
			{
				system("cls");
				printf("\tTemperatura: Del Ingles al SI\n");
				printf("1)  \n");
				printf("2) \n");
				printf("3) \n");
				printf("0) Regresar\n >> ");
				scanf("%d", &seleccion);
				fflush(stdin);
			}
			while(seleccion < 0 || seleccion > 3);
			
			switch(seleccion)
			{
				case 1:
					
					break;
				case 2:
					
					break;
				case 3:
					
					break;
			}
		break;
		case 2:
			do
			{
				system("cls");
				printf("\tTemperatura: Del Ingles al SI\n");
				printf("1)  \n");
				printf("2) \n");
				printf("3) \n");
				printf("0) Regresar\n >> ");
				scanf("%d", &seleccion);
				fflush(stdin);
			}
			while(seleccion < 0 || seleccion > 3);
			
			switch(seleccion)
			{
				case 1:
					
					break;
				case 2:
					
					break;
				case 3:
					
					break;
			}
		break;
	}
}
