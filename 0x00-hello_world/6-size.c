#include<stdio.h>
int main()
{
	printf("size of short is %ld bytes\n",sizeof(short));
	printf("size of int is %ld bytes\n",sizeof(int));
	printf("size of long is %ld bytes\n",sizeof(long));

	printf("size of float is %ld bytes\n",sizeof(float));
	printf("size of double is %ld bytes\n",sizeof(double));
	printf("size of long double is %ld\n",sizeof(long double));

	printf("size of char is %ld bytes\n",sizeof(char));
	printf("size of void is %ld bytes\n",sizeof(void))
	return 0;
}
