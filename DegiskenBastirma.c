// bu sat�rlar gibi sat�r ba��na art arda iki adet "/" konulan sat�rlar kod olarak �al��t�r�lmaz.

// "#include" haz�r kod k�t�phaneleri eklemeye yarar.
// "<stdio.h>" .h uzant�l� bir dosyad�r. bu t�r dosyalar bilgisayar dilinde  
// "stdio" standart(std) input(i) output(o) - standart giri� ��k�� k�t�phanesi anlam�na gelir.
#include <stdio.h>

// int main
int main(){
	
	//"int", integer kelimesinin k�saltmas�d�r ve tamsay� manas�na gelir.
	// int de�i�keninin i�ine tamsay� de�erler atanabilir.
	// int haf�zada 32bit (4 byte) kadar yer kaplar.
	// "int a;" kodu a isminde bir say� tan�mlar. ";" kod sat�r� kapat�r.
	// a yerine ba�ka bir �ey de yaz�labilirdi.
	int a;
	
	// a isimli de�i�kenin de�erini 5 yapar.
	a = 5;
	
	// "printf" ��k�� i�lemidir. ekrana metin ya da de�i�ken de�eri basmaya yarar.
	// t�rnak i�indeki de�er ekrana bas�l�r.
	// "%d" bas�lacak say� demektir.
	// virg�lden sonra ekrana yaz�lacak de�i�ken  
	printf("Degiskenin degeri: %d", a);
	
	return 0;
}



/*


Problem Tan�m� 1
Bir tam say� de�i�keni (int) tan�mlayarak i�erisine ilk de�er atay�n ve ekrana de�erini bas�n�z.

Added by BilgisayarKavramlari
�rnek Ekran ��kt�s� 1
De�i�kenin de�eri: 5

Added by BilgisayarKavramlari
Dosya �smi 1
Dosyalar�n�z� DegiskenBastirma ismi ile yollayabilirsiniz.

Added by BilgisayarKavramlari


*/
