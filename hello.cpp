#include<stdio.h>
int main(){
	int a;
	
	printf("\n Enter the size of the array:");
	scanf("%d", &a);
	int array[a];
	
	for(int i=0; i<a; i++){
		printf("\n Enter the elements in the array:");
		scanf("%d", &array[i]);
	}
	for(int i=0; i < a; i++){
    if(i % 2 == 0){
    	printf("\n The even number(s) multiplied by 2 are: %d", 2 * array[i]);
	}else{
		printf("\n The odd number(s) multiplied by 3 are: %d", 3 * array[i]);
	}
}
return 0;
}
   
   
