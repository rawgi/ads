#include <stdio.h>

int main(){
	int operation;
	while(operation != 1 && operation != 2 && operation != 3 && operation != 4){
		printf("waehlen sie eine Operation(and,or,xor,not):");
		scanf("%x",&operation);
	}
	int eins;
	printf("geben sie die erste Zahl ein");
	scanf("%d",&eins);
	
	int zwei;
	if(operation != 4){
		printf("geben sie die zweite Zahl ein");
		scanf("%d",&zwei);
	}
	switch(operation) {
		case 1: printf("ergebnis: %x",eins&zwei); break;
		case 2: printf("ergebnis: %x",eins|zwei); break;
		case 3: printf("ergebnis: %x",eins^zwei); break;
		case 4: printf("ergebnis: %x",~eins); break;
	}
	return 0;
}
