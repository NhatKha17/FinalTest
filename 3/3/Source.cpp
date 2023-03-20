#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

class phuongTrinhBac2 {
private:
		float a, b, c;
		
public:
	//ham tao 3 doi so a,b,c
	phuongTrinhBac2(float a1,float b1,float c1) {
		this->a = a1;
		this->b = b1;
		this->c = c1;
	}
	/*float getA() {
		return this->a;
	};
	float getB() {
		return this->b;
	};
	float getC() {
		return this->c;
	};*/
	float delta();
	void timNghiem(); 
};
// ham tinh delta
float phuongTrinhBac2::delta() {
	{
		return (b * b - 4 * a * c);
	}
}
//ham giai nghiem va display
void phuongTrinhBac2::timNghiem() {
	{
		float delta1 = delta();
		if (delta1 > 0) {
			printf("Delta = %.2f >0\r\n", delta1);
			printf("Phuong trinh co 2 nghiem phan biet : %.2f  va  %.2f \r\n", ((-b + sqrt(delta1)) / (2 * a)), ((-b - sqrt(delta1)) / (2 * a)));
		}
		else if (delta1 == 0) {
			printf("Delta = %.2f =0\r\n", delta1);
			printf("Phuong trinh co 1 nghiem kep: %.2f \r\n", (-b / (2 * a))); }
		else
		{
			printf("Delta = %.2f <0\r\n", delta1);
			printf("Phuong trinh vo nghiem \r\n");
		}
	}
}
void main() {
	float a1=0, b1=0, c1=0;
	printf("Nhap gia tri cua A, B, C\r\n");
	printf("Nhap A : "); scanf("%f", &a1);
	printf("Nhap B : "); scanf("%f", &b1);
	printf("Nhap C : "); scanf("%f", &c1);
	phuongTrinhBac2 A(a1, b1, c1);
	A.timNghiem();
}