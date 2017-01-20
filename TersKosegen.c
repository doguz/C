#include <stdio.h>

int main(){
	// matrisin boyutunu ve matrislerde kullanaca��m�z eksenleri tan�mlayal�m
	int boyut,i,j;	
	
	// matris boyutunu kullan�c�dan alal�m
	printf("Matris boyutunu giriniz: ");
	scanf("%d",&boyut);
	
	int matris[boyut][boyut];
	
	//d��taki for d�ng�s� sat�rlar olu�tuk�a de�er d�nd�r�r
	for(j=0;j<boyut;j++){
		
		//i�teki for d�ng�s� dizi boyutuna kadar artarak d�ner
		for(i=0;i<boyut;i++){
			
			//sat�r ile s�tunun toplam� boyut kadar(-1'i) ise matrise 1 koy
			if(i+j == boyut-1){
				matris[i][j] = 1;
			}
			else{
				matris[i][j] = 0;
			}
			printf("%d ",matris[i][j]);
		}
		printf("\n");
	}
}

/*

15. Ters K��egen Matrisi
Problem Tan�m� 1
Ters k��egeni (anti-diagon) 1 olan ve di�er b�t�n elemanlar� 0 olan matrisi ekrana bast�r�n�z.

Added by BilgisayarKavramlari
Ekran ��kt�s� 2
Bir sayi giriniz: 7
0000001 
0000010
0000100
0001000
0010000
0100000
1000000

Added by BilgisayarKavramlari
Bir sayi giriniz: 4
0001
0010
0100
1000

Added by BilgisayarKavramlari
Dosya �smi 1
Dosyan�z� TersKosegen olarak kaydedebilirsiniz.

Added by BilgisayarKavramlari

*/
