#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float dt(float a, float b, float c){
	float S;
	S= (sqrt((a+b+c)*(a+b-c)*(b+c-a)*(c+a-b)))/4;
	return (S);
}

int main(int argc, char *argv[]) {
	int a, b, c;
	
	printf("nhap 3 canh cua tam giac: ");
	scanf("%d%d%d", &a, &b, &c);
	
	printf("\ndien tich tam giac la:%f", dt(a,b,c));
	
	return 0;
}

