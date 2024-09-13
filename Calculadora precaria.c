
#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"spanish");
	float numero;
	float numero2;
	float numero3;

	//1  rnúmero
	printf("Ingresa un número: ");
	scanf("%f",&numero);
	//2do número	
    printf ("ingresa otro número");
    scanf("%f",&numero2);
    
    numero3=numero+numero2;
    printf("el valor de la suma es:%f\n",numero3 );
     numero3=numero-numero2;
    printf("el valor de tu resta:%f\n",numero3);
    numero3=numero/numero2;
    printf("elvalor de tu divición:%f\n",numero3);
	numero3=numero*numero2;
    printf("el valor de tu multiplicación es:%f\n",numero3);
   
    
}

	
		
	
	



