#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n;
	printf("���� �ϳ��� �Է��Ͻÿ� : ");
	scanf("%d", &n);

	if(n == 0)
    	printf("0 �Դϴ�.");
	else if(n > 0)
    	printf("����Դϴ�.");
	else printf("�����Դϴ�.");
	
	return 0;
}
