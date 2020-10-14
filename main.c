#include <stdio.h>
#include <stdlib.h>
#include "arr.h"


int main(int argc, char *argv[]) {
	
	int arr[] = {1,2,3,4};
	
	int count = 4;
	//addAtV2(arr,&count,4,3);
	//addAtV2(arr,&count,4,3); // cant add if it will be added at the end or out of bounds
	
	deleteAtV2(arr,&count,4);
	displayArray(arr,count);
	
	
	return 0;
}
