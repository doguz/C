// bu satýrlar gibi satýr baþýna art arda iki adet "/" konulan satýrlar kod olarak çalýþtýrýlmaz.

// "#include" hazýr kod kütüphaneleri eklemeye yarar.
// "<stdio.h>" .h uzantýlý bir dosyadýr. bu tür dosyalar bilgisayar dilinde  
// "stdio" standart(std) input(i) output(o) - standart giriþ çýkýþ kütüphanesi anlamýna gelir.
#include <stdio.h>

// int main
int main(){
	
	//"int", integer kelimesinin kýsaltmasýdýr ve tamsayý manasýna gelir.
	// int deðiþkeninin içine tamsayý deðerler atanabilir.
	// int hafýzada 32bit (4 byte) kadar yer kaplar.
	// "int a;" kodu a isminde bir sayý tanýmlar. ";" kod satýrý kapatýr.
	// a yerine baþka bir þey de yazýlabilirdi.
	int a;
	
	// a isimli deðiþkenin deðerini 5 yapar.
	a = 5;
	
	// "printf" çýkýþ iþlemidir. ekrana metin ya da deðiþken deðeri basmaya yarar.
	// týrnak içindeki deðer ekrana basýlýr.
	// "%d" basýlacak sayý demektir.
	// virgülden sonra ekrana yazýlacak deðiþken  
	printf("Degiskenin degeri: %d", a);
	
	return 0;
}



/*


Problem Tanýmý 1
Bir tam sayý deðiþkeni (int) tanýmlayarak içerisine ilk deðer atayýn ve ekrana deðerini basýnýz.

Added by BilgisayarKavramlari
Örnek Ekran Çýktýsý 1
Deðiþkenin deðeri: 5

Added by BilgisayarKavramlari
Dosya Ýsmi 1
Dosyalarýnýzý DegiskenBastirma ismi ile yollayabilirsiniz.

Added by BilgisayarKavramlari


*/
