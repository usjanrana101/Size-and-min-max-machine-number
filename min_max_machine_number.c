#include<stdio.h>
#include<limits.h>
#include<float.h>  //This headerfiles hsve the in-built variables
void main() {
   printf("The minimum value of FLOAT = %f\n", -FLT_MAX);
   printf("The maximum value of FLOAT= %f\n", FLT_MAX);

   printf("The minimum value of DOUBLE = %10e\n", -DBL_MAX);
   printf("The maximum value of DOUBLE = %10e\n", DBL_MAX);

   printf("The minimum value of INT = %d\n", INT_MIN);
   printf("The maximum value of INT = %d\n", INT_MAX);

   printf("The minimum value of CHAR = %d\n", CHAR_MIN);
   printf("The maximum value of CHAR = %d\n", CHAR_MAX);

   printf("The minimum value of LONG INT= %ld\n", LONG_MIN);
   printf("The maximum value of LONG INT= %ld\n", LONG_MAX);
}
