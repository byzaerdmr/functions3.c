#include<stdio.h>
//ici bos dikdortgen
void rectangle(int uzun, int kısa) {
	int i, j;
	for (i = 0;i < kısa;i++) {
		for (j = 0;j < uzun;j++) {
			if (i == 0 || j==uzun-1 || j == 0 || i == kısa - 1) {

				printf("*");
			}
			else
				printf(" ");
		}
		printf("\n");
	}
}
int main()
{
	int kisa, uzun;
	printf("Degerleri Giriniz: ");
	scanf("%d%d", &kisa, &uzun);
	rectangle(kisa, uzun);

	return 0;
}
/*
void dortgen(int kisa, int uzun) {
	int i, j;
	for (i = 0; i < kisa; i++)
	  {

		for (j = 0;j < uzun;j++) 
		{
			printf("*");
		}
		printf("\n\t\t");
	}

}
int main() {
	int kısa, uzun;
	printf("Dikdortgenin kenar uzunluklarini giriniz:");
	scanf("%d%d", &kısa, &uzun);
	printf("\n\n\n\n\t\t");
	dortgen(kısa, uzun);
	return 0;
}*/
