#include <stdio.h>

int main(){
	
	int dizi[10]= {2,3,6,3,4,1,9,8,2,6};
	
	int i = 0;
	int max=0;
	
	for ( i; i<10; i++ ){
		
		if ( dizi[i] > max ){
			max = dizi[i];
		}
		printf("sira %d: deger: %d\n",i,dizi[i]);
	}
	
	printf("DiziEnBuyuk: %d",max);
	
	return 0;
}

/*
1- dizi tanýmla
2- deðerleri gezecek bir deðiþken tanýmla
3- maksimum sayýyý taþýyacak ebir deðiþken tanýmla
4- diziyi maksimum sayýyý bulana kadar gez
*/
