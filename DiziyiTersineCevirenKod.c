// bir dizinin elemanlarýný tersine çeviren kod



int main(){

int a[] = {1,3,5,7,9,0};
int b=0;
int i = 0;
	
	int boyut = (sizeof a / sizeof *a);
	int c = boyut/2;
	for(i=0; i<boyut/2; i++){
		
		b = a[i];
		a[i] = a[4-i];
		a[4-i] = b;
		
	}
	
	for (i=0;i<boyut;i++){
		printf("%d",a[i]);
	}
	printf("\nçevirme: %d",c);
}

	 
