typedef char * string;
typedef int (*int_cb)(int,int);
typedef int (*float_cb)(float,int);
typedef int (*char_cb)(char, int);
typedef int (*string_cb)(string, int);


int filterInt(int *array, int length, int **result, int_cb callback);
int filterFloat(float *array, int length, float **result, float_cb callback);
int filterChar(char *array, int length, char **result, char_cb callback);
int filterString(string *array, int length, string **result, string_cb callback);

