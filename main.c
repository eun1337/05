#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
    int answer = 59;
    int input, count=0;

    do {
        printf("Guess a number : ");
        scanf("%d", &input);

        if (input > answer) printf("high!\n");
        else if (input < answer) printf("low!\n");
        else printf("Congratulation! ");

        count++;

    } while(input != answer);

    printf("trials : %d\n", count);
	
	system("PAUSE");
	return 0;
}
