#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
*te dice si un numero es primo o no
*@param int n
*@return 1 si lo es 0 si no lo es
*/
int primo(int n){
	
	int i=0, a=0;
	
	for(i=1;i<=n;i++){
	
		if(n%i==0)
			a++;
	}
	
	if(a==2 || n==1)
		return 1;
	return 0;
	
}
/**
*retorna la cantidad de primos que hay hasta un numero max
*@param int max
*@return int n; 
*@see int primo(int n)
*/
int cantidadPrimos(int max){
	
	int i=0, n=0;
	
	
	for(i=0; i<=max; i++){
		
		if(primo(i))
			n++;
		
	}
	
	return n;
	
}
/**
*inicializa una matriz bidimensional
*@param int cadena[3][3]
*@param int filas
*@param	int columnas
*/
void inicializarMatrizBidimensional(int cadena[3][3], int filas, int columnas){
	
	int i=0, j=0;
	
	for(i=0;i<columnas;i++){
		
		for(j=0;j<filas;j++){
			
			printf("introduce el numero de la posicion %d-%d\n", i,j);
			scanf("%d", &cadena[i][j]);
			printf("\n");			
		}		
	}

}
/**
*muestra el contenido de una matriz bidimensional
*@param int cadena[3][3]
*@param int filas
*@param	int columnas
*/
void mostrarMatrizBidimensional(int cadena[3][3], int filas, int columnas){
	
		int i=0, j=0;
	
		for(i=0;i<columnas;i++){
		
		for(j=0;j<filas;j++){
			
				printf("%d-",cadena[i][j]);			
		}
		printf("\n");	
	}
		
}
/**
*suma 2 matrices bidimensionales en una tercera
*@param int cadenaUno[3][3]
*@param int cadenaDos[3][3]
*@param int cadenaRes[3][3]
*@param int filas
*@param	int columnas
*/
void sumarMatrizBidimensional(int cadenaUno[3][3],int cadenaDos[3][3], int cadenaRes[3][3], int filas, int columnas){
	
	int i=0, j=0;
	
	for(i=0;i<columnas;i++){
		
		for(j=0; j<filas; j++){
			
			cadenaRes[i][j]=cadenaUno[i][j]+cadenaDos[i][j];			
		}	
	}	
}
/**
*compara dos cadenas de arrays
*@param char cadenaUno[40]
*@param char cadenaDos[40]
*/
int compararCadenas(char cadenaUno[40], char cadenaDos[40]){
	
	
	int i=0;
	
	for(i=0;i<strlen(cadenaUno); i++){
		
		
		if(cadenaUno[i]!=cadenaDos[i])
			return 0;
	}
	
	return 1;
	
	
}
/**
*detecta si una frase es palindromo obviando los espacios
*@param char frase[20]
*@return 1 si es palindromo 0 si no lo es
*/
int frasePalindromo(char frase[20]){
	
	int i=0;
	
	for(i=0; i<strlen(frase);i++){
		

		
		if(frase[i]==' ')
			continue;
		
		if(frase[i]!= frase[strlen(frase)-i-1]){
			return 0;
		}
	
	}
	
	return 1;

}
/**
*programa que almacena en un array los números primos comprendidos entre 1 y 100.
*@see int primo(int n)
*@see int cantidadPrimos(int max)
*/
void ejercicio11(){
	
	
	int n=0;
	int cadena[cantidadPrimos(100)];
	int i=0;
		
	printf("cantidad primos %d\n", cantidadPrimos(100));
	
	for(i=1; i<cantidadPrimos(100); i++){
		
		n++;
		
		if(primo(n)){
			
			cadena[i]=n;
			printf("%d ",cadena[i]);
		}
		
		else{
			i--;
		}
		
	}	
}
/**
*programa que genere la matriz transpuesta de una matriz de 3 filas y 4 columnas.
*La matriz transpuesta de una matriz M (m, n)
*se obtiene intercambiando filas por columnas y viceversa;
*el resultado almacena en una nueva matriz
*/
void ejercicio12(){
	

	
	int M[3][4];
	int M_TRANS[4][3];
	
		int i=0, j=0;
		
		for(i=0; i<3;i++){
			
			for(j=0; j<4; j++){
								
				printf(" introduce en la posicion %d - %d en M\n", i,j);
				scanf("%d", &M[i][j]);
				
				M_TRANS[j][i]=M[i][j];
				
			}
						
		}
		
		printf("\n\n\n");
		printf("Matriz M\n");
		printf("____________\n");
		
		for(i=0;i<3;i++){
						
			for(j=0; j<4;j++){				
				printf("%d-", M[i][j]);				
			}			
			printf("\n");			
		}
		
		printf("\n\n\n");
		printf("Matriz M_TRANS\n");
		printf("____________\n");
		
		for(i=0;i<4;i++){
						
			for(j=0;j<3;j++){
				
				printf("%d-", M_TRANS[i][j]);	
			}			
			printf("\n");			
		}
	
	
	
	
	
}
/**
*genera la inversa de una cadena de caracteres.
*cadena original y la invertida se almacenan en arrays independientes
*
*/
void ejercicio13(){
	
	
	
	int i=0;
	char cadena[]="esta cadena no se si esta invertida o no\0";
	char cadenaInvertida[40];//el strlen engaña, porque recorre de 0 hasta donde este el \0 y en la posicion da el tamaño hasta ahí
	

	
	for(i=0;i<strlen(cadena); i++){		
		printf("%c", cadena[i]);
		//if(i!=strlen(cadena))
		cadenaInvertida[i]=cadena[strlen(cadena)-i];
	}
	
	printf("\n\n");
	printf("____________________________\n");
	printf("\n\n");
	
	for(i=0;i<=strlen(cadena); i++){
		printf("%c", cadenaInvertida[i]);
		
	}
		
}
/**
*suma dos matrices bidimensionales.
*Las matrices para que puedan sumarse deben tener las mismas dimensiones
*En este caso [3,3]
*/
void ejercicio14(){
	
	
		
	int cadenaUno[3][3], cadenaDos[3][3];
	int cadenaRes[3][3];
	int i=0, j=0;
	int filas=3, col=3;
	
	
	printf("inicializa la primera matriz\n");
	inicializarMatrizBidimensional(cadenaUno,filas,col);
	printf("\ninicializa la segunda matriz\n");
	inicializarMatrizBidimensional(cadenaDos,filas,col);
	
	printf("\n\n");
	mostrarMatrizBidimensional(cadenaUno, filas, col);
	printf("\n\n");
	mostrarMatrizBidimensional(cadenaDos, filas, col);
	
	sumarMatrizBidimensional(cadenaUno,cadenaDos,cadenaRes,filas,col);
	printf("\n\n");
	mostrarMatrizBidimensional(cadenaRes, filas, col);
	
	
}
/**
*cuenta las mayúsculas de una cadena de caracteres
*mayusculas se encuentran  de  65-90 en ASCII
*/
void ejercicio15(){
	
	
	int i=0;
	int mayus=0;
	
	char mayusculas[]="HOLA esto Es Una PrueBa del EJERcicio 5";//12
	
	for(i=0; i<strlen(mayusculas);i++){
		
		
		if(mayusculas[i]<91 && mayusculas[i]>64){
			mayus++;
		}
	}
	
	printf("\n %d Mayusculas", mayus);
	
	
	
	
}
/**
*un programa que encripta una cadena de caracteres
*sumando 2 al código ASCII de cada uno de sus caracteres
*/
void ejercicio16(){
	
	
	
	char cadenaEncryptada[]="Esto es una cadena encryptada no trates de averiguar el mensaje";
	int i=0;
	
	for(i=0; i<strlen(cadenaEncryptada); i++){
		
		cadenaEncryptada[i]+=2;
	}
	
	printf("\n %s", cadenaEncryptada);
	
	
}
/**
*un programa que encripta los caracteres de una cadena
*sumando 2 a los caracteres que estén situados en posiciones pares 
*y 3 a los situados en posiciones impares.
*/
void ejercicio17(){
	
	
	char cadenaEncryptada[]="hola adios";
	int i=0;
	
	for(i=0; i<strlen(cadenaEncryptada); i++){
		
		if(i%2==0)
			cadenaEncryptada[i]+=2;
		else
			cadenaEncryptada[i]+=3;
	}
	
	printf("\n %s", cadenaEncryptada);
}
/**
*Dice el número de vocales que aparecen en una frase introducida por el usuario
*/
void ejercicio18(){
	
	
	char frase[80];
	int i=0;
	int vocales=0;
	
	for(i=0; i<80; i++){
		frase[i]='\0';
	}
	printf("strlen=%d\n",strlen(frase));
	
	printf("introduce una frase\n");
	gets(frase);//coje cadenas de caracteres como getchar(caracter) get(cadena)
		
	for(i=0; i<80; i++){
		
		
		switch(frase[i]){
			
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':
				vocales++;
					
		}//fin switch
		
	}
	printf("\nel numero de vocales es %d", vocales);
	
}
/**
*un programa que lee una frase introducida desde el teclado y la escriba al revés.
*/
void ejercicio19(){
	
	
	char frase[80], fraseInvertida[80]="\0";
	//tio estoy harto de la gente que manda cadenas todo el rato
	//a mi ya no me las mandan
	//¿como lo has hecho?
	//les he puesto "\0"
	int i=0;
	
	printf("introduce una frase\n");
	gets(frase);
	printf("\n---%s\n", frase);
	for(i=0; i<strlen(frase); i++){
						
		fraseInvertida[i]=frase[strlen(frase)-i-1];//-1 porque el gets introduce un \0 
		// y hace que no empiece la cadena a la hora de imprimir
		
	}
	
	printf("\n\n");
	puts(fraseInvertida);
	
	
	
}
/**
*compara dos arrays de caracteres y nos dice si son idénticos o no.
*@see int compararCadenas(char cadenaUno[40], char cadenaDos[40])
*/
void ejercicio20(){
	
	char cadenaUno[40]="hola ejercicio 20\0", cadenaDos[40]="adios ejercicio 20\0";
	//cambia las frases de la cadena para probarlo
	
	printf("metodo propio\n");
	if(compararCadenas(cadenaUno, cadenaDos))
		printf("son iguales\n");
	else
		printf("No son iguales\n");
	
	
	printf("metodo libreria string.h\n");
	//strcmp da 1 si no son iguales
	if(!strcmp(cadenaUno, cadenaDos))
		printf("son iguales\n");
	else
		printf("No son iguales\n");
	
	
	
	
	
}
/**
*Dice si una frase es o no un palíndromo
*si se lee igual de derecha a izquierda que de izquierda a derecha
*se obvian los espacios
*@see int frasePalindromo(char frase[20])
*/
void ejercicio21(){
	
	
	
	
	char frase[20]="hola ana aloh";
	
	
	if(frasePalindromo(frase)){
		
		printf("es palindromo\n");
	}
	
	else
		printf("No es palindromo\n");
	
	
	
}
/**
*transforma números entre 1 y 999 a números romanos
*cada switch se utiliza para cada una de las cifras del numero
*/
void ejercicio22(){
	
	
	int cadena[1000];
	int	i=0, j=0;
	
	for(i=1; i<1000; i++){
		
		cadena[i]=i;
		printf("%d-", cadena[i]);
		
		//primera cifra
		switch(i/100){
			
			case 1:
				printf("C");
				break;
			case 2:
				printf("CC");
				break;
			case 3:
				printf("CCC");
				break;	
			case 4:
				printf("CD");
				break;
			case 5:
				printf("D");
				break;
			case 6:
				printf("DC");
				break;
			case 7:
				printf("DCC");
				break;
			case 8:
				printf("DCCC");
				break;
			case 9:
				printf("CM");
				break;
			
				//segunda cifra
			default:
				
			
			break;
			
		}
		
		//segunda cifra
		switch(((i-i%10)/10)%10){
					
			case 1:
				printf("X");
				break;
			case 2:
				printf("XX");
				break;
			case 3:
				printf("XXX");
				break;	
			case 4:
				printf("XL");
				break;
			case 5:
				printf("L");
				break;
			case 6:
				printf("LX");
				break;
			case 7:
				printf("LXX");
				break;
			case 8:
				printf("LXXX");
				break;
			case 9:
				printf("XC");
				break;
			
					
		}
		//ultima cifra
		switch(i%10){
			
			case 1:
				printf("I");
				break;
			case 2:
				printf("II");
				break;
			case 3:
				printf("III");
				break;	
			case 4:
				printf("IV");
				break;
			case 5:
				printf("V");
				break;
			case 6:
				printf("VI");
				break;
			case 7:
				printf("VII");
				break;
			case 8:
				printf("VIII");
				break;
			case 9:
				printf("IX");
				break;
			
		
		}
			
			
			
			
			
		printf("\n");
		
	}
	



}
int main(int argc, char** argv){
	
	ejercicio11();
	ejercicio12();
	ejercicio13();
	ejercicio14();
	ejercicio15();
	ejercicio16();
	ejercicio17();
	ejercicio18();
	ejercicio19();
	ejercicio20();
	ejercicio21();
	ejercicio22();
	return 0;
}