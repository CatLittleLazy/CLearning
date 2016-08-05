/*选择排序
原理:每次找到目前序列中最小的提到靠前位置，一次类推*/ 

#include <stdio.h>
#define SIZE 10

void print(int a[]){
	int status = 0;
	for(int i = 0; i < SIZE; i ++){
		printf("%4d",a[i]);
	}
}

void findlow(int a[]){
	for(int j = 0; j < SIZE; j ++){
		int min = a[j];
		int temp;
		int index = j;
		for(int i = j+1;i < SIZE;i++){
			if(a[i]<min){
				min = a[i];
				index = i;
			}
		}
		temp = a[j];
		a[j] = min;
		a[index] = temp;
		printf("%d:",j);
		print(a);
		printf("\n");
	}
}


int main(int argv,char*args[]){
	int a[SIZE] = {
		2,9,4,8,10,6,5,7,1,3
	};
	findlow(a);
	print(a);	
	return 0;
} 