#include<stdio.h>
int main(){
	int month, year;
	printf("Nhap thang ");
	scanf("%d", &month);
	printf("Nhap nam ");
	scanf("%d", &year);
	if(year%4==0&&year%100!=0||year%400==0){
		year = 1;
	}
	switch(month){
		case 1 : case 3 : case 5 : case 7 : case 8 : case 10 : case 12 :
			month = 31;
			break;
			case 4 : case 6 : case 9 : case 11 :
				month = 30;
				break;
				case 2 : 
				if(year == 1 ){
					month = 29;
				}else{
					month = 28;
				}
				break;
				default : 
				printf("Khong hop le");
	}
	return 0;

}
