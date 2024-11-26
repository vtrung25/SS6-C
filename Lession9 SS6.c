#include<stdio.h>
int main(){
	int a, b, c, num;
	for(num=100; num<=999; num++){
		a = num / 100;
		b = (num /100)% 10;
		c = num % 10;
		if(a*a*a+b*b*b+c*c*c==num){
			printf("%d\n", num);
		
		}
	}
	return 0;
	
}