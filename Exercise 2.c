#include <stdio.h>


int a(int n){ 
  int a = 0; 
  while (n > 0) {
    a = a * 10 + n % 10;
    n /= 10;
  }
  return a;
}

int main(void){
    int n;
 
    printf("nhap mot so nguyen duong: ");
    scanf("%d",&n);

    int result = a(n);
    printf("So dao nguoc: %d\n",result );

    return 0;
}

