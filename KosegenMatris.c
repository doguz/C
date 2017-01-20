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

14. Diyagonu (K��egeni) 1 olan bo� matris (Sparse Matrix)
Problem Tan�m� 1
Matrisin boyutunu kullan�c�dan okuyup. Sadece diyagonu (k��egeni) 1 olan ve di�er elemanlar� 0 olan bir kare matrisi ekrana bast�r�n.

Added by BilgisayarKavramlari
Ekran ��kt�s� 2
Bir say� giriniz: 7
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
Dosya �smi 1
Dosyan�z� KosegenMatris olarak kaydedebilirsiniz.

Added by BilgisayarKavramlari

*/
