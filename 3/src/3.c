/*
 ============================================================================
 Name        : 3.c
 Author      : 3
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> //getchar() toma un caracter y espera a q el user presione enter para
#include <conio.h> //getch() toma un caracter y lo guarda.
                   //getche()toma un caracter, lo guarda y te lo muestra
int main(void)
{
	setbuf(stdout,NULL);
	char opcion;
	char r='s';

	do{
		do{
		printf("elija una de las siguientes opciones: A- saludar, B-brindar ,C-despedirse,D-salir");
		fflush(stdin);
		scanf("%c",&opcion);
		}while(opcion!='A'&& opcion!='B' && opcion!='C' && opcion!='D');

		switch(opcion)
			{ case 'A':
				printf("Hola!\n");
				fflush(stdin);
				break;

			case 'B':
				printf("chin chin\n");
				fflush(stdin);
				break;

			case 'C':
				printf("chau\n");
				fflush(stdin);
				break;
			}

			if(opcion=='D')
			{
				printf("estas seguro que queres salir? s/n\n");
				fflush(stdin);
				scanf("%c",&r);

			}
	}while(r !='s');





	return 0;
}
