#include <stdio.h>

double volume(int kante){
	kante = kante/100;
	return kante*kante*kante;
}

double fahren_celsius_rechner(double temp, int einheit){
	if(einheit == 1){
		return temp * 1.8 + 32;
	}
	return (temp-32)/1.8;
}

int main(){
	printf("Volumen eines Quaders mit einer Kantenlänge von 30cm in meter: %lf",volume(300));
	int s;
	printf("geben sie eine Zahl ein");
	scanf("%d",&s);
	printf("Ihre Zahl in Hex: %x",s);
	double temp;
	printf("geben sie eine Temperatur ein");
	scanf("%lf",&temp);
	int einheit;
	while(einheit != 1 && einheit != 2){
		printf("in welcher Einheit haben sie die Temperatur angegeben?(1=Celsius,2=Fahrenheit)");
		scanf("%d",&einheit);
	}
	printf("ihre Temperatur umgerechnet in Celsius/Fahrenheit: %lf",fahren_celsius_rechner(temp,einheit));
	return 0;
}
