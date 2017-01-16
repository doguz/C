#include <stdio.h>
#include <conio.h>
int main(){
	
	// "int" tipinde (yani integer olan tamsayý) ve "sayi" isminde bir deðiþken oluþtur 
	int sayi = 0;
	
	// okuma fonksiyonunu kullanmadan önce kullanýcý ile iletiþime geçilir.
	printf("Bir sayi giriniz: ");
	
	// "scanf" bir giriþ fonksiyonudur. kullanýcýdan sayý okumak için kullanýlýr.
	// "%d" bir tamsayý okunacak anlamýna gelir. 
	// virgülden sonra okuduðumuz deðeri içine atacaðýmýz sayýyý önüme "&" iþareti koyarak yazarýz
	scanf("%d", &sayi);
	
	// printf fonksiyonu ile ekrana sayýyý bastýracaðýz
	// sayýnýn önüne istediðimiz metni ekleyebiliriz.
	// sayi okuma yapmadýðýmýz için deðiþken önüne "&" iþareti koymayýz
	printf("Girdiginiz sayi: %d", sayi);
	
	getch();
	return 0;
	
}


/*

Problem Tanýmý 1
Ekrandan bir sayý okuyup bu sayýyý ekrana geri basýnýz.

Added by BilgisayarKavramlari
Örnek Ekran Çýktýsý 1
Bir sayi giriniz: 10
Girdiginiz sayi: 10

Added by BilgisayarKavramlari
Dosya Ýsmi 1
Dosyalarýnýzý EkrandanSayiOkuma ismi ile kaydederek yollayabilirsiniz.

Added by BilgisayarKavramlari

*/
