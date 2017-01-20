#include <stdio.h>

int main(){
	
	int boyut = 0;
	printf("matris boyutunu giriniz: ");
	
	scanf("%d",&boyut);
		
	int matris[boyut][boyut];
	
	int i,j;
	
	
	for(j = 0; j < boyut; j++){
		for(i = 0; i < boyut; i++){
			
			if(i == j){
			matris[i][j] = 1;			
			}
			if(i !=j){
				matris[i][j] = 0;
			}
			printf("%d",matris[i][j]);
		}
		printf("\n");
	}
	
}

/*

14. Diyagonu (Köþegeni) 1 olan boþ matris (Sparse Matrix)
Problem Tanýmý 1
Matrisin boyutunu kullanýcýdan okuyup. Sadece diyagonu (köþegeni) 1 olan ve diðer elemanlarý 0 olan bir kare matrisi ekrana bastýrýn.

Added by BilgisayarKavramlari
Ekran Çýktýsý 2
Bir sayý giriniz: 7
1000000
0100000
0010000
0001000
0000100
0000010
0000001

Added by BilgisayarKavramlari
Bir sayi giriniz: 5
10000
01000
00100
00010
00001

Added by BilgisayarKavramlari
Dosya Ýsmi 1
Dosyanýzý KosegenMatris olarak kaydedebilirsiniz.

Added by BilgisayarKavramlari

*/
