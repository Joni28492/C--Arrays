#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
/**
*Funcion divisivlesEntreTres  @date 07/09/2018
*un programa que  detecta la cantidad de numeros divisibles entre tres hasta el maximo indicado
*@param n int, numero maximo al que limitamos
*@return retornamos la cantidad de numeros que hay divisibles entre 3							
*/
int divisiblesEntreTres(int *n){
	
	int i = 0, contador = 0;
		
	for(i=0; i< *n; i++){

		if(i%3 == 0)
			contador++;
		}
	return contador;
		
}
/**
*Realizacion de la funcion aleatorio @date 06/09/2018
*consiste en devolver un numero random									
*@return retorna un numero aleatorio entre 50 y 100
*@see #include <time.h>
*@see #include <stdlib>
*/
int aleatorio(){	
	return ((rand()%10000)/100.0);
}
/**
*Funcion MyStrcpy  @date 07/09/2018
*una funcion que copia de una cadena a otra y multiplica por 1.5 e imprime
*@param cadenaUno[11] int la cadena que vamos a copiar
*@param cadenaDos[11] int la cadena que vamos a multiplicar 1.5 despues de copiar							
*/
void myStrcpy(int *punteroUno, float *punteroDos){
	
	
	int i=0;
	printf("\nCadena 2\n");
	for(i=0; i < 10; i++){
		
		*punteroDos = *punteroUno*1.5;
		printf("%.2f ", *punteroDos);
		punteroDos++;
		punteroUno++;
	}
	
}
/**
*Funcion ejercicio 1  @date 07/09/2018
*array de enteros entre 5 y 25									
*/
void ejercicio1(){
	
	
	int i=0;
	int cadena[21];
	int *puntero=cadena;
	

	for(i=0; i < 21;i++){
			
		*puntero = i+5;
		printf("%d ", *puntero);
		puntero++;
	}
	
}
/**
*Funcion ejercicio 2  @date 07/09/2018
*un programa que  llene un array con los numeros pares del 1 al 100								
*/
void ejercicio2(){
	
	//escribir un programa que  llene un array con los numeros pares del 1 al 100
	int i=0;
	int cadena[51];
	int *puntero=cadena;
	
	for(i=0; i<=50;i++){
		
		cadena[i] = i*2;		
		printf("%d ", *puntero);		
		puntero++;	
	}
	
}
/**
*Funcion ejercicio 3 @date 07/09/2018
*programa que llena un array con los numeros comprendidos entre 0 y 100  divisibles por 3	
*@see int divisiblesEntreTres(int n)					
*/
void ejercicio3(){
	
	//escribir un 
	int i=0, n=100;
	int cadena[divisiblesEntreTres(&n)+1];
	int *puntero=cadena;
	
	for(i=0; i<divisiblesEntreTres(&n); i++){
		
		cadena[i] = i*3;		
		printf("%d ", *puntero);
		puntero++;
	}
		
}
/**
*Funcion ejercicio 4  @date 07/09/2018
*escribir un programa que llene un array con 10 numeros enteros consecutivos(siendo el primero
*el indicado por el usuario) y haga una copia de ese array en otro	
*@see #include <string.h>
*@see strcpy(char a, char b);								
*/
void ejercicio4(){
	
	
	char cadenaUno[11], cadenaDos[11];
	char *punteroUno=cadenaUno, *punteroDos=cadenaDos;
	int i=0, n=0;
	printf("introduce numero\n");
	scanf("%d", &n);
	
	printf("Cadena 1\n");
	for(i=0; i<10; i++){
		
		*punteroUno = n+i;
		printf("%d ", *punteroUno);
		punteroUno++;
	}
	
	punteroUno=cadenaUno;
	strcpy(punteroDos,punteroUno);
	
	printf("\nCadena 2\n");
	for(i=0; i<10; i++){
		printf("%d ", *punteroDos);	
		punteroDos++;
	}
		
}
/**
*Funcion ejercicio 5  @date 07/09/2018
*escribir un array  de 10 numeros enteros aleatorios comprendidos entre 50 y 100.
*copie esos numeros en otro array multiplicados por 1.5		
@see MyStrcpy(int cadenaUno[11], float cadenaDos[11])
*@see #include <time.h>
@see int aleatorio()							
*/
void ejercicio5(){
	

	int i=0;
	int cadenaUno[11];
	float cadenaDos[11];
	int *punteroUno=cadenaUno;
	float *punteroDos=cadenaDos;
	

	srand(time(NULL));
	
	printf("Cadena 1\n");
	for(i=0; i<10; i++){
		
		*punteroUno = aleatorio();
		
		printf("%d ", *punteroUno);
		punteroUno++;
	}
	
	punteroUno=cadenaUno;
	myStrcpy(punteroUno, punteroDos);
}
/**
*Funcion ejercicio 6  @date 07/09/2018
*escribir un programa con los 20 primeros numeros pares y calcule su suma									
*/
void ejercicio6(){
		
	int i=0, suma=0;
	int cadena[21];
	int *puntero=cadena;
	
	for(i=0; i<21; i++){
		
		*puntero = i*2;
		printf("%d ", *puntero);
		suma+= (i*2);
		puntero++;
	}

	printf("\ntotal = %d", suma);

}
/**
*Funcion ejercicio 7  @date 07/09/2018
*calcular la suma de los numeros positivos y negativos que contiene el array 
*@see #include <string.h>
*@see strlen();								
*/
void ejercicio7(){
	
	char cadena[13]={-1,1,16,-5,10,16,-4,-25,16,-5,2,-8};
	char *puntero=cadena;
	int i=0, positivos=0, negativos=0;
	
	for(i=0; i<strlen(cadena); i++){
		
		if(*puntero<0)
			negativos+= *puntero;
		else
			positivos+= *puntero;
		
		printf("%d ", *puntero);
		puntero++;
		
	}
	
	printf("\n suma positivos = %d; suma negativos = %d\n", positivos, negativos); 
	
}
/**
*Funcion ejercicio 8  @date 07/09/2018
*calcular la suma de los numeros positivos
*y negativos que contiene el array bidimensional
*@param cadena[][] int							
*/
void ejercicio8(int *puntero){
	
	
	int i=0, j=0;
	int positivos=0, negativos=0;
	
	for(i=0; i<3;i++){
		
		for(j=0; j<3;j++){
			
			printf("%d ", *puntero);
			
			if(*puntero<0)
				negativos+= *puntero;
			else
				positivos+= *puntero;
			
		
			puntero++;
		}
		printf("\n");
		
	}
	printf("\n suma positivos = %d; suma negativos = %d\n", positivos, negativos); 
}
/**
*Funcion ejercicio 9  @date 07/09/2018
*programa que multiplica por 2 los elementos de la matriz anterior
*@param cadena[][] int							
*/
void ejercicio9(int *puntero){
	
	
	int i=0, j=0;
	
	for(i=0; i<3; i++){
		
		for(j=0; j<3;j++){
			
			*puntero *= 2;
			printf("%d ", *puntero);
			puntero++;
			
		}
		
		printf("\n");
		
	}
	
	
	
	
	
}

/**
*Funcion ejercicio 9X  @date 07/09/2018
*programa que multiplica por 2 los elementos de la matriz anterior, sin mover la posicion del puntreo
*@param cadena[][] int							
*/
void ejercicio9X(int *puntero){
	
	
	int i=0, j=0;
	int n=0;
	
	for(i=1; i<=9; i++){
		
		
			
		printf("%d ->", *(puntero+(i-1))*2);
		printf("%d ", puntero);
			
			
		
		if(i%3==0)
			printf("\n");
		
	}
	
	
	
	
	
}
/**
*Funcion ejercicio 10  @date 07/09/2018
*un programa que divide todos los elementos de una matriz M (3,4) por el elemento situado en la posicion[2,2]									
*/
void ejercicio10(){
	
	
	float array[3][4]={4,5,2,6,3,2,1,1,2,3,9,6};
	float *puntero= &array[0][0];
	int i=0, j=0;
	float divisor=0;
	//introducir los numeros en la matriz
	
	for(i=0; i<3; i++){
		
		for(j=0; j<4; j++){
			
			printf("introduce numero en la posicion %d-%d\n",i,j);
			scanf("%f", puntero);
			if(i==2 && j==2){
				divisor=*puntero;
			}
			puntero++;
		}
		
			
	}
	
	puntero= &array[0][0];
	//recorremos denuevo la matriz para dividirlos
	for(i=0; i<3; i++){
		
		for(j=0; j<4; j++){
			
			*puntero/=divisor;
			printf("%.2f ", *puntero);
			puntero++;
		}
		
		printf("\n");
			
	}
	
	printf("\n numero divisor %f", divisor);
		
}
/**Funcion MAIN*/
int main(int argc, char** argv){
	
	
	int cadena[3][3]={52, 26, -13, -32, -24, 11, 20, -12, 13};
	int *puntero = &cadena[0][0];
	int opcion=0;
	
	do{
		printf("**********ARRAYS**********");
		printf("\n1-Enteros entre 5 y 25");
		printf("\n2-Los numeros pares del 1 al 100");
		printf("\n3-Numeros comprendidos entre 0 y 100  divisibles por 3");
		printf("\n4-Array con 10 numeros enteros consecutivos y copiar");
		printf("\n5-10 numeros enteros aleatorios comprendidos entre 50 y 100, multiplica una copia por 1.5");
		printf("\n6-Los 20 primeros numeros pares y su suma");
		printf("\n7-Suma de los numeros positivos y negativos que contiene el array");
		printf("\n8-Suma de los numeros positivos y negativos que contiene el array bidimensional");
		printf("\n9-Multiplica por 2 los elementos de la matriz");
		printf("\n10-Divide todos los elementos de una matriz M (3,4) por el elemento situado en la posicion[2,2]");
		printf("\nPULSA 0 PARA SALIR DEL PROGRAMA\n");
	
		printf("\nElige una opcion\n");
		scanf("%d", &opcion);
	
		switch(opcion){
		
			case 0: 
				break;
		
			case 1:
				ejercicio1();
				break;
		
			case 2:
				ejercicio2();
				break;

			case 3:
				ejercicio3();
				break;
			
			case 4:
				ejercicio4();
				break;
	
			case 5:
				ejercicio5();
				break;
			
			case 6:
				ejercicio6();
				break;
			
			case 7:
				ejercicio7();
				break;
		
			case 8:
				ejercicio8(puntero);
				break;
		
			case 9:
				//ejercicio9(puntero);
				ejercicio9X(puntero);
				break;
		
			case 10:
				ejercicio10();
				break;
	
			default:
			
				if(opcion<1 || opcion>10)
					printf("\n ¡¡¡VUELVE A INTRODUCIR LA OPCION!!!\n\n");
				break;
	
		}
		printf("\n\n");
	}while(opcion<0 || opcion>10 || opcion !=0);


	return 0;
}

