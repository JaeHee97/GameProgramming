#include<stdio.h>
int main(){
	int arr[5];
	int i, j;
	int temp;
	printf("정수 5개를 입력하세요: ");
	for(i=0; i<5; i++){
		scanf("%d", &arr[i]);
	}
	for(i=0; i<5; i++){
		temp = arr[i];
		j=i-1;
		while(j>=0&&arr[j]>temp){
			arr[j+1]= arr[j];
			j=j-1;
		}
		arr[j+1]=temp;
	}
	printf("\n정렬 후: ");
	for(i=0;i<5;i++){
		printf("%d ",arr[i]);
	}
	return 0;
} 
