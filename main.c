#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char c;
	int count=0;
	
	printf("input a string : ");
	while((c=getchar()) != '\n') {
		if(c >= '0' && c <= '9') count++;
	}
	
	printf("%d\n", count);
	
	system("PAUSE");
	return 0;
}
