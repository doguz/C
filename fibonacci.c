#include <stdio.h>

int main(){
	
	printf("Bir sayi giriniz: ");
	int a = 0;
	scanf("%d",&a);
	
	int dizi[a];
	dizi[0] = 1;
	dizi[1] = 1;
	
	int i =0;
	for(i = 0; i<a; i++){
		dizi[i+2] = dizi[i+1] + dizi[i];
		printf("%d ", dizi[i]);
	} 
}

/*

12. Fibonacci Serisi
Problem Tan�m� 1
Fibonacci serisinin ilk iki eleman� 1'dir ve di�er elemanlar�, kendisinden �nce gelen son iki eleman�n toplam�d�r. Klavyeden bir say� okuyarak, girilen say� kadar fibonacci serisinin eleman�n� ekrana bast�ran kodu yaz�n�z.

Added by BilgisayarKavramlari
Ekran ��kt�s� 2
Bir sayi giriniz: 10
1 1 2 3 5 8 13 21 34 55

Added by BilgisayarKavramlari
Bir sayi giriniz: 5
1 1 2 3 5

Added by BilgisayarKavramlari
Dosya ismi 1
Kodunuzu fibonacci dosya ismi ile kaydedebilirsiniz.

Added by BilgisayarKavramlari

*/
