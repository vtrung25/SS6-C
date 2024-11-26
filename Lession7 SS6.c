#include<stdio.h>
int main(){
	int a;
	printf("Nhap 1 so nguyen bat ki ");
	scanf("%d", &a);
	for(int i = 1; i<=a; i++){
		if(a % i ==  0){
			printf("%d\n", i);
		}else{
		}
	}
	return 0;
}