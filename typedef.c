#include <stdio.h>
#include <stdlib.h>
typedef int (*fn_ptr)(int,int);

int add(int a,int b) {
	printf("%d %d\n", a,b );
	return a+b;
}

int calculator(int a,int b, fn_ptr operator) {
	return (*operator)(a,b);
}

int main(int argc, char const *argv[]) {
	calculator(2,3,&add);
	return 0;
}