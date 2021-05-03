#include<stdio.h>
int main(){
	int array[1];
	int j;
	int n;
	int q;
	
	printf("\n Enter the size of the array:");
	scanf("%d", &n);
	
	printf("\n Enter the elements of the array:");
	for(int i=0; i<n; i++){
		scanf("%d", &array[i]);	
	}
    
    printf("The entered elements are:");
    for(int i=0; j=(n/2)-1; i<n/4	; i++; j--){
    	q=array[i];
    	array[i]=array[j];
    	array[j]=q;
	}
	 for(i=0; i<n; i++)
	 printf("\n a[%d]= %d", 	i,array[i]);
}
