#include "ft_libft.h"
#include "ft_strmapi.c"
#include <stdlib.h>
#include <stdio.h>

char my_function(unsigned int index, char c) {
    if (index % 2 == 0)
	{
        if (c >= 'a' &&  c <= 'z')
			c -= 32;
    }
	else
	{
		if (c >= 'A' && c <= 'Z')
			c += 32;
	}
    return c;
}

int main() {
    const char *input_string = "Hello, World!";
    
    char *result = ft_strmapi(input_string, my_function);
    
    if (result != NULL) {
        printf("Original String: %s\n", input_string);
        printf("Mapped String  : %s\n", result);
        
        // Don't forget to free the allocated memory
        free(result);
    } else {
        printf("Memory allocation failed.\n");
    }
    
    return 0;
}

