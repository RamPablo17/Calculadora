
#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"spanish");
	float numero;
	float numero2;
	float numero3;

	//1  rn�mero
	printf("Ingresa un n�mero: ");
	scanf("%f",&numero);
	//2do n�mero	
    printf ("ingresa otro n�mero");
    scanf("%f",&numero2);
    
    numero3=numero+numero2;
    printf("el valor de la suma es:%f\n",numero3 );
     numero3=numero-numero2;
    printf("el valor de tu resta:%f\n",numero3);
    numero3=numero/numero2;
    printf("elvalor de tu divici�n:%f\n",numero3);
	numero3=numero*numero2;
    printf("el valor de tu multiplicaci�n es:%f\n",numero3);
   
    
}

	
		
	
	



