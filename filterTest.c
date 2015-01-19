#include <stdio.h>
#include <stdlib.h>
#include "filter.h"
#include "expr_assert.h"

int callbackForInt(int value,int index){
	return(value%2 == 0);
}

void test_filterForInt(){
	int array[] = {10,11,12,13,14,15};
	int *result;
	int filtered, i, j;
	filtered = filterInt(array, 6, &result, &callbackForInt);
	for (i = 0, j = 0; i < filtered; ++i, j = j+2) {
		assertEqual(result[i], array[j]);
	}
}

int callbackForFloat(float value, int index){
	return(value>13);
}

void test_filterForFloat(){
	float array[] = {10.0,11.2,12.0,13.256,14.50,15};
	float *result;
	int filtered, i, j;
	filtered = filterFloat(array, 6, &result, &callbackForFloat);
	for (i = 0, j = 3; i < filtered; ++i, ++j) {
		assertEqual(result[i], array[j]);
	}	
	free(result);
}

int callbackForChar(char value, int index) {
	return (value < 97);
}

void test_filterForChar(){
	char array[] = {'M','a','h','e','s','h','K','u','m','a','r'};
	char *result;
	int filtered, i, j;
	filtered = filterChar(array, 11, &result, &callbackForChar);
	assertEqual(result[0], 'M');
	assertEqual(result[1], 'K');
	// free(*result);
}