#include<stdio.h>
#include<math.h>

int main(){
	float doanhthu,hoahong;
	printf("nhap doanh thu: ");
	scanf("%f",&doanhthu);
	if(doanhthu <= pow(10,8)){
		hoahong = doanhthu/100*5;
		printf("hoa hong la: %.f",hoahong);
	} else if(pow(10,8) < doanhthu < 3*pow(10,8)){
		hoahong = doanhthu/100*10;
		printf("hoa hong la; %.f",hoahong);
	} else if(doanhthu > 3*pow(10,8)){
		hoahong = doanhthu/100*20;
		printf("hoa hong la: %.f",hoahong);
	}
}
