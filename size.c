#include<stdio.h>
int main()
{
int i;
float f;
double d;
char c;
long int li;
printf("Size of a int variable is %ld bytes\n",sizeof(i));  //sizeof() funtion gives the required value
printf("Size of a float variable is %ld bytes\n",sizeof(f));
printf("Size of a double variable is %ld bytes\n",sizeof(d));
printf("Size of a character variable is %ld bytes\n",sizeof(c));
printf("Size of a long int variable is %ld bytes\n",sizeof(li));
return 0;
}
