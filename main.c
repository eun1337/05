#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n;
	printf("���� �ϳ��� �Է��Ͻÿ� : ");
	scanf("%d", &n);

	if(n == 0)
    	printf("���밪�� 0�Դϴ�.\n");
	else if(n > 0)
    	printf("���밪�� %d�Դϴ�.\n", n);
	else printf("���밪�� %d�Դϴ�.\n", -n);
	
	system("PAUSE");
	return 0;
}
