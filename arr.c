#include <stdio.h>
#include <stdlib.h>
#include "arr.h"


void displayArray(int arr[], int size){
	int i;
	for(i=0;i<size;i++){
		printf("%d ", arr[i]);
	}
}

int findMin(int num[],int size){
	int i,min = num[0];
	for(i=1;i<size;i++){
		if(min>num[i])
			min = num[i];
	}
	return min;
}
int findMax(int num[],int size){
	int i,max = num[0];
	for(i=1;i<size;i++){
		if(max<num[i])
			max = num[i];
	}
	return max;
}

void addAtV1(int num[],int *count,int item, int pos){
	int i;
	for(i=*count;i>0;i--){
		if(pos==  i){
			num[i] = num[i-1];
			num[i-1] = item;
			*count = *count+1;
			break;
		}
		num[i] = num[i-1];
	}
}
void addAtV2(int num[],int *count,int item, int pos){
		int i;
	
	for(i=*count-1;i>=0;i--){
		if(pos ==  i+1){
			num[i+1] = num[i];
			num[i] = item;
			*count = *count+1;
			break;
		}
		num[i+1] = num[i];
	}	
}

void deleteAtV1(int num[],int *count, int pos){
	int i;
	for(i=pos;i<*count;i++)
		num[i-1] = num[i];
	*count -=1;
}

void deleteAtV2(int num[],int *count, int pos){
	int i;
	for(i=pos-1;i<=*count-1;i++)
		num[i] = num[i+1];
	*count -=1;
}



//1 2 3
//pos 2 
//1 3 



















































