#include<stdio.h>
int main() {
    int intType;
    float floatType;
    double doubleType;
    char charType;
    long int longintType;
    long long int longlongintType;


    // sizeof evaluates the size of a variable
    printf("Size of int: %zu bytes\n", sizeof(intType));
    printf("Size of float: %zu bytes\n", sizeof(floatType));
    printf("Size of double: %zu bytes\n", sizeof(doubleType));
    printf("Size of char: %zu byte\n", sizeof(charType));
    printf("Size of long int: %zu byte \n" , sizeof(longintType));
    printf("Size of long long int: %zu byte \n" , sizeof(longlongintType));
		    
    return 0;
