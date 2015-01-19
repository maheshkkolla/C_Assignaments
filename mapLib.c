#include "map.h"
#include <stdio.h>
#include <stdlib.h>

int *mapForInt(int *array, int length, int_cb callback) {
	int i;
	int *result;
	result = (int *)malloc(sizeof(int) * length);
	for (i = 0; i < length; ++i) {
		result[i] = callback(array[i], i);
	}
	return result; 
}

float *mapForFloat(float *array, int length, float_cb callback) {
	int i;
	float *result;
	result = (float *)malloc(sizeof(float) * length);
	for (i = 0; i < length; ++i) {
		result[i] = callback(array[i], i);
	}
	return result; 
}

char *mapForChar(char *array, int length, char_cb callback) {
	int i;
	char *result;
	result = (char *)malloc(sizeof(char) * length);
	for (i = 0; i < length; ++i) {
		result[i] = callback(array[i], i);
	}
	return result; 
}
