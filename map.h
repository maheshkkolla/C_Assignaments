typedef char * string;
typedef int (*int_cb)(int,int);
typedef float (*float_cb)(float,int);
typedef char (*char_cb)(char, int);
typedef int (*string_cb)(string, int);
int *mapForInt(int *array, int length, int_cb callback);
float *mapForFloat(float *array, int length, float_cb callback);
char *mapForChar(char *array, int length, char_cb callback);

