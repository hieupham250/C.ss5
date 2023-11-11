#include<stdio.h>

int main(){
	int day,month;
	printf("ngay sinh: ");
	scanf("%d",&day);
	printf("thang sinh: ");
	scanf("%d",&month);
	if(day > 0 && day <= 31 && month <=12){
		if(day >=20 && month == 1 || day <= 18 && month == 2){
			printf("Cung Bao Binh");
		} else if(day >= 19 && day <= 29 && month == 2 || day <= 20 && month == 3){
			printf("Cung Song ngu");
		} else if(day >= 21 && month == 3 || day <= 20 && month == 4){
			printf("Cung bach Duong");
		} else if(day >= 21 && month == 4 || day <= 20 && month == 5){
			printf("Cung Kim nguu");
		} else if(day >= 21 && month == 5 || day <= 21 && month == 6){
			printf("Cung Song Tu");
		} else if(day >= 22 && month == 6 || day <= 22 && month ==7){
			printf("Cung Cu Giai");
		} else if(day >= 23 && month == 7 || day <= 22 && month == 8){
			printf("Cung Su Tu");
		} else if(day >= 23 && month == 8 || day <= 22 && month == 9){
			printf("Cung Xu Nu");
		} else if(day >= 23 && month == 9 || day <= 23 && month == 10){
			printf("Cung Thien Binh");
		} else if(day >= 24 && month == 10 || day <= 22 && month == 11){
			printf("Cung bo cap");
		} else if(day >= 23 && month == 11 || day <= 21 && month == 12){
			printf("Cung Nhan Ma");
		} else{
			printf("Cung ma Ket");
		}
} else {
	printf("ngay, thang phai lon hon 0 va ngay nho hon 32,thang phai nho hon 13. Moi nhap lai");
}
}
