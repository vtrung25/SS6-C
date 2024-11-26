#include<stdio.h>
int main(){
	int a, b, c, d, e, count1 = 0, count2 = 0;
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
	if(a%2==0){
		count1++;
	}else{
		count2++;
	}
	if(b%2==0){
		count1++;
	}else {
	count2++;
	}
	if(c%2==0){
		count1++;
	}else{
		count2++;
	}
	if(d%2==0){
		count1++;
	}else{
		count2++;
	}
	if(e%2==0){
		count1++;
	}else{
		count2++;
	}
	printf("Co %d so chan\nCo %d so le", count1, count2);
	return 0;
}
