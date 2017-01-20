#include <stdio.h>

int main(){
	// matrisin boyutunu ve matrislerde kullanacaðýmýz eksenleri tanýmlayalým
	int boyut,i,j;	
	
	// matris boyutunu kullanýcýdan alalým
	printf("Matris boyutunu giriniz: ");
	scanf("%d",&boyut);
	
	int matris[boyut][boyut];
	
	//dýþtaki for döngüsü satýrlar oluþtukça deðer döndürür
	for(j=0;j<boyut;j++){
		
		//içteki for döngüsü dizi boyutuna kadar artarak döner
		for(i=0;i<boyut;i++){
			
			//satýr ile sütunun toplamý boyut kadar(-1'i) ise matrise 1 koy
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

15. Ters Köþegen Matrisi
Problem Tanýmý 1
Ters köþegeni (anti-diagon) 1 olan ve diðer bütün elemanlarý 0 olan matrisi ekrana bastýrýnýz.

Added by BilgisayarKavramlari
Ekran Çýktýsý 2
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
Dosya Ýsmi 1
Dosyanýzý TersKosegen olarak kaydedebilirsiniz.

Added by BilgisayarKavramlari

*/
