#include <stdio.h>
#include <stdlib.h>
#include "map.h"
#include "expr_assert.h"

int callbackForInt(int value, int index){
	return(value + 1);
}

void test_mapForInt(){
	int array[] = {1,2,3,4,5,6};
	int *result;
	result = mapForInt(array, 6, &callbackForInt);
	assertEqual(result[0], 2);
	assertEqual(result[1], 3);
	assertEqual(result[2], 4);
	assertEqual(result[3], 5);
	assertEqual(result[4], 6);
	assertEqual(result[5], 7);
}

float callbackForFloat(float value, int index) {
	return(value + 1);
}

void test_mapForFloat(){
	float array[] = {1.1,2.0,3.3,4.4,5.5,6.0};
	float *result;
	result = mapForFloat(array, 6, &callbackForFloat);
	assertEqual(result[0], 2);
	assertEqual(result[1], 3);
	assertEqual(result[2], 4);
	assertEqual(result[3], 5);
	assertEqual(result[4], 6);
	assertEqual(result[5], 7);
}

char callbackForChar(char value, int index) {
	return (value + 1);
} 

void test_mapForChar(){
	char array[] = {'m','a','h','e','s','h'};
	char *result;
	result = mapForChar(array, 6, callbackForChar);
	assertEqual(result[0], 'n');
	assertEqual(result[1], 'b');
	assertEqual(result[2], 'i');
	assertEqual(result[3], 'f');
	assertEqual(result[4], 't');
	assertEqual(result[5], 'i');
}	