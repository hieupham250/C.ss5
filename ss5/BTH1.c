#include<stdio.h>

int main(){
	float a,b,c;
	float denlta,x,x1,x2;
	printf("nhap a, b, c tuong duong ax^2+bx+c=0: ");
	scanf("%f %f %f",&a,&b,&c);
	if(a==0){
		if(b==0){
			if(c==0){
				printf("phuong trinh vo so nghiem");
			} else {
				printf("phuong trinh vo nghiem");
			}
		} else {
			x = -c/b;
			printf("phuong trinh co nghiem duy nhat la: %f",x);
		}
	} else {
		denlta = b*b-4*a*c;
		if(denlta < 0){
			printf("phuong trinh vo nghiem");
		} else if(denlta == 0){
			printf("phuong trinh co nghiem kep la: %f",-b/(2*a));
		} else {
			x1 = (-b+sqrt(denlta))/(2*a);
			x2 = (-b-sqrt(denlta))/(2*a);
			printf("phuong trinh co 2 nghiem la:\nX1 = %f\nx2 = %f",x1,x2);
		}
	}
}
