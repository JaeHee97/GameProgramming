#include<stdio.h>
int main(){
	int arr[5];
	int i, j;
	int temp;
	printf("���� 5���� �Է��ϼ���: ");
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
	printf("\n���� ��: ");
	for(i=0;i<5;i++){
		printf("%d ",arr[i]);
	}
	return 0;
} 
