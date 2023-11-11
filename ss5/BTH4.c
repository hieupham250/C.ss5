#include<stdio.h>
#include<math.h>

int main(){
	float tong,giam_tru,thue,luong_rong;
	float chiu_thue;
	printf("Tong thu nhap: ");
	scanf("%f",&tong);
	printf("Tien giam tru: ");
	scanf("%f",&giam_tru);
	chiu_thue = tong-giam_tru;
	if(tong > 0){
		if(chiu_thue <= 5*pow(10,6)){
		thue = chiu_thue*5/100; //0->5tr
		} else if(chiu_thue <= pow(10,7)){
		thue = chiu_thue*10/100; //5->10tr
		} else if(chiu_thue <= 18*pow(10,6)){
		thue = chiu_thue*15/100; //11->18tr
		} else if(chiu_thue <= 32*pow(10,6)){
		thue = chiu_thue*20/100; //19->32tr
		} else if(chiu_thue <= 52*pow(10,6)){
		thue = chiu_thue*25/100; //32->52tr
		} else if(chiu_thue <= 8*pow(10,7)){
		thue = chiu_thue*30/100; //53->80tr
		} else {
		thue = chiu_thue*35/100; //tren 80tr
		}
	}
	luong_rong = tong-giam_tru-thue;
	printf("Tien thue phai nop: %.2f\n",thue);
	printf("Tien luong thuc linh: %.2f",luong_rong);
}
