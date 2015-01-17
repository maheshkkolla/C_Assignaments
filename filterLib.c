#include <stdio.h>
#include "filter.h"

int filterInt(int *array, int length, int **result, int_cb callback) {
	int i, j = 0;
	int resultArray[length];
	for (i = 0; i < length; ++i) {
		if(callback(array[i],i)) {
			resultArray[j] = array[i];
			j++;
		}
	}
	(*result) = (int *)malloc(sizeof(int) * j);
	(*result) = resultArray;
	return j;
}

int filterFloat(float *array, int length, float **result, float_cb callback) {
	int i, j = 0;
	float *resultArray;
	resultArray=malloc(sizeof(float)*length);
	for (i = 0; i < length; ++i) {
		if(callback(array[i],i)) {
			resultArray[j] = array[i];
			j++;
		}
	}
	(*result) = (float *)malloc(sizeof(float) * j);
	(*result) = resultArray;
	return j;
}

int filterChar(char *array, int length, char **result, char_cb callback) {
	int i, j = 0;
	char resultArray[length];
	for (i = 0; i < length; ++i) {
		if(callback(array[i],i)) {
			resultArray[j] = array[i];
			j++;
		}
	}
	(*result) = (char *)malloc(sizeof(char) * j);
	(*result) = resultArray;
	return j;
}

// int filterString(string *array, int length, string **result, string_cb callback) {
// 	int i,j = 0;
// 	string resultArray[length];
// 	for (i = 0; i < length; ++i) {
// 		resultArray[j] = array[i];
// 		j++;
// 	}
// 	result[0] = 
// 	for(i = 0; i < j; i++) {
// 		int stringLength = strlen(resultArray[i]);

// 	}
// }

