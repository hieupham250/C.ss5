#include<stdio.h>

int main(){
	int sophut,tien;
	printf("nhap so phut trong thang: ");
	scanf("%d",&sophut);
	if(0 < sophut){
		if(sophut <= 50){
			tien = sophut*600; //600d 30k
		} else if(sophut <= 150 ){
			tien = (sophut-50)*400+600*50; //400d 70k
		} else if(sophut <=200){
			tien = (sophut-150)*200+600*50+400*100; //200d 80k
		} else {
		tien = (sophut-200)*100+600*50+400*100+200*200;
		}
	}
	printf("tien cuoc trong thang la: %d",tien+25000);
}

