#include <stdio.h>
#include "ft_libft.h"
#include "ft_strlcpy.c"
#include <string.h>

int main(void) {
    char dest[20];
    char dest2[20];
    const char *src = "Source String";

    // Test: Copying from source to destination (d > s)
    size_t result1 = strlcpy(dest, src, sizeof(dest));
    size_t result2 = ft_strlcpy(dest2, src, sizeof(dest2));
    printf("Scenario: d > s\n");
    printf("strlcpy result: %zu, destination: \"%s\"\n", result1, dest);
    printf("ft_strlcpy result: %zu, destination: \"%s\"\n\n", result2, dest2);

    // Test: Copying from source to destination (d = s)
    const char *src2 = "Same String";
    size_t result3 = strlcpy(dest, src2, sizeof(dest));
    size_t result4 = ft_strlcpy(dest2, src2, sizeof(dest2));
    printf("Scenario: d = s\n");
    printf("strlcpy result: %zu, destination: \"%s\"\n", result3, dest);
    printf("ft_strlcpy result: %zu, destination: \"%s\"\n\n", result4, dest2);

    // Test: Copying from source to destination (s > d)
    const char *src3 = "This is a longer string";
    size_t result5 = strlcpy(dest, src3, sizeof(dest));
    size_t result6 = ft_strlcpy(dest2, src3, sizeof(dest2));
    printf("Scenario: s > d\n");
    printf("strlcpy result: %zu, destination: \"%s\"\n", result5, dest);
    printf("ft_strlcpy result: %zu, destination: \"%s\"\n\n", result6, dest2);

    // Test: Copying to a full destination buffer
    const char *src4 = "This is a long string";
    size_t result7 = strlcpy(dest, src4, sizeof(dest));
    size_t result8 = ft_strlcpy(dest2, src4, sizeof(dest2));
    printf("Scenario: d is full\n");
    printf("strlcpy result: %zu, destination: \"%s\"\n", result7, dest);
    printf("ft_strlcpy result: %zu, destination: \"%s\"\n\n", result8, dest2);

    // Test: Copying to a NULL destination pointer
    char *dest_null = NULL;
    const char *src5 = "Copy to NULL";
    size_t result9 = strlcpy(dest_null, src5, 0);
    size_t result10 = ft_strlcpy(dest_null, src5, 0);
    printf("Scenario: d is NULL\n");
    printf("strlcpy result: %zu, destination is NULL\n", result9);
    printf("ft_strlcpy result: %zu, destination is NULL\n\n", result10);

   // Test: Copying from a NULL destination pointer
    const char *src6 = NULL;
    size_t result11 = strlcpy(dest, src6, 0);
    size_t result12 = ft_strlcpy(dest, src6, 0);
    printf("Scenario: d is NULL\n");
    printf("strlcpy result: %zu, destination is NULL\n", result11);
    printf("ft_strlcpy result: %zu, destination is NULL\n\n", result12);

    return 0;
}
