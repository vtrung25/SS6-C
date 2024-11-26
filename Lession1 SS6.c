#include<stdio.h>
int main(){
	int a, b, c, d, e;
	int sum = 0;
	printf("Nhap so thu nhat ");
	scanf("%d", &a);
	printf("Nhap so thu hai ");
	scanf("%d", &b);
	printf("Nhap so thu ba ");
	scanf("%d", &c);
	printf("Nhap so thu tu ");
	scanf("%d", &d);
	printf("Nhap so thu nam ");
	scanf("%d", &e);
	if(a%2!=0){
		sum+=a;
	}
	if(b%2!=0){
		sum+=b;
	}
	if(c%2!=0){
		sum+=c;
	}
	if(d%2!=0){
		sum+=d;
	}
	if(e%2!=0){
		sum+=e;
	}
	printf("Tong cac so le la %d", sum);
	return 0;
}
		
	
	


