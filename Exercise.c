#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b;
	char menu;
	
	printf("nhap 2 so: ");
	scanf("%d%d", &a, &b);
	
	printf("\n1. phep tinh cong");
	printf("\n2. phep tinh tru");
	printf("\n3. phep tinh nhan");
	printf("\n4. phep tinh chia");
	printf("\nnhap lua chon cua ban:");
	fflush(stdin);
	scanf("%c", &menu);
	switch (menu){
		case '1':
			printf("%d + %d = %d", a, b, a+b);
			break;
		case '2':
			printf("%d - %d = %d", a, b, a-b);
			break;
		case '3':
			printf("%d x %d = %d", a, b, a*b);
			break;
		case '4':
			printf("%d / %d = %d", a, b, a/b);
			break;
	}
	return 0;
}
