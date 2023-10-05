#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i, num, sum=0;
	
	printf("input a number : ");
	scanf("%d", &num);
	
	for(i = 1; i <= num; i++) {
		sum+= i;
	}
	printf("The result is %d\n", sum);
	
	system("PAUSE");
	return 0;
}
