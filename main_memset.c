#include <stdio.h>
#include "ft_memset.c"
#include <string.h>

int main()
{
	char s1[] = "hello";
	char s2[] = "hello";
	char s3[] = "%#$^&";
	char s4[] = "%#$^&";
	char s5[] = "\n\n\0W\0";
	char s6[] = "\n\n\0W\0";
	char s7[] = "≥≤÷∞∞";
	char s8[] = "≥≤÷∞∞";
	
	ft_memset(s1, 33, 5);
	memset(s2, 33, 5);
	ft_memset(s3, 33, 5);
	memset(s4, 33, 5);
	ft_memset(s5, 33, 5);
	memset(s6, 33, 5);
	ft_memset(s7, 33, 5);
	memset(s8, 33, 5);

	printf("mine -> %s\n", (char *)s1);
	printf("ther -> %s\n", (char *)s2);

	printf("mine -> %s\n", (char *)s3);
	printf("ther -> %s\n", (char *)s4);
	
	printf("mine -> %s\n", (char *)s5);
	printf("ther -> %s\n", (char *)s6);

	printf("mine -> %s\n", (char *)s7);
	printf("ther -> %s\n", (char *)s8);
}
