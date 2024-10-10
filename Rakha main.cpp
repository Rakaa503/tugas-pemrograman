#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//Buatlah program C untuk menginput panjang alas dan tinggi segitiga dalam cm. Lalu hitung dan tampilkan luas dan keliling dari segitiga tersebut.

int main() 
{
	
	float alas,tinggi,keliling,luas;
	
	printf("Inputkan alas segitiga : ");
	scanf("%f", &alas);
	printf("Inputkan tinggi segitiga: ");
	scanf("%f", &tinggi);
	
	//rumus luas dan keliling dari segitiga
	
	keliling = 3 * alas;
	luas = 0.5 * alas * tinggi;

	
	//hasil
	
	printf("Luas dan Keliling segitiga : ");
	printf("\nKeliling dari segitiga: %.2f cm", keliling);
	printf("\nLuas dari segitiga: %.2f cm2", luas);
	
	
	
	
	
	
	
	
	return 0;
}
