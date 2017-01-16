#include <stdio.h>
#include <conio.h>
int main(){
	
	// "int" tipinde (yani integer olan tamsay�) ve "sayi" isminde bir de�i�ken olu�tur 
	int sayi = 0;
	
	// okuma fonksiyonunu kullanmadan �nce kullan�c� ile ileti�ime ge�ilir.
	printf("Bir sayi giriniz: ");
	
	// "scanf" bir giri� fonksiyonudur. kullan�c�dan say� okumak i�in kullan�l�r.
	// "%d" bir tamsay� okunacak anlam�na gelir. 
	// virg�lden sonra okudu�umuz de�eri i�ine ataca��m�z say�y� �n�me "&" i�areti koyarak yazar�z
	scanf("%d", &sayi);
	
	// printf fonksiyonu ile ekrana say�y� bast�raca��z
	// say�n�n �n�ne istedi�imiz metni ekleyebiliriz.
	// sayi okuma yapmad���m�z i�in de�i�ken �n�ne "&" i�areti koymay�z
	printf("Girdiginiz sayi: %d", sayi);
	
	getch();
	return 0;
	
}


/*

Problem Tan�m� 1
Ekrandan bir say� okuyup bu say�y� ekrana geri bas�n�z.

Added by BilgisayarKavramlari
�rnek Ekran ��kt�s� 1
Bir sayi giriniz: 10
Girdiginiz sayi: 10

Added by BilgisayarKavramlari
Dosya �smi 1
Dosyalar�n�z� EkrandanSayiOkuma ismi ile kaydederek yollayabilirsiniz.

Added by BilgisayarKavramlari

*/
