#include<stdio.h>
int main(){
	int a = 0, b = 1, c, n;
	printf("Nhap 1 so nguyen bat ki ");
	scanf("%d", &n);
	for(int i = 1; i<=n; i++){
		c = a + b;
		printf("%d\n", a);
		a = b;
		b = c;
	}
	return 0;
	
}