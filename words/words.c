#include <stdio.h>

int main() {
    int letra=0;
	int n=0;

	printf("Escribe algo: ");

	while(n<100 && (letra=getchar())!= EOF && letra!='\n'){
		if(letra==' '){
			printf("\n");
		}else{
			printf("%c",letra);
		}
		n++;
	}
	printf("\n");
	
}