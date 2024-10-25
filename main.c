#include "libft.h"
#include <stdio.h>
<<<<<<< HEAD
=======
#include <string.h>
>>>>>>> 572285e (new)

void test_ft_isdigit(void) {
    printf("ft_isdigit: %s\n", ft_isdigit('5') ? "OK!" : "KO");
}

void test_ft_strlcpy(void) {
    char dest[100];
    char *src = "Hello";
    size_t result = ft_strlcpy(dest, src, sizeof(dest));
<<<<<<< HEAD
    printf("ft_strlcpy: %s (length: %zu)\n", result == 5 ? "OK!" : "KO", result);
=======
    printf("ft_strlcpy: %s\n", result == 5 ? "OK!" : "KO");
>>>>>>> 572285e (new)
}

void test_ft_strlen(void) {
    printf("ft_strlen: %s\n", ft_strlen("Hello") == 5 ? "OK!" : "KO");
}

void test_ft_strchr(void) {
    printf("ft_strchr: %s\n", ft_strchr("Hello World", 'W') ? "OK!" : "KO");
}

void test_ft_isascii(void) {
    printf("ft_isascii: %s\n", ft_isascii(127) ? "OK!" : "KO");
}

void test_ft_isprint(void) {
    printf("ft_isprint: %s\n", ft_isprint('A') ? "OK!" : "KO");
}

void test_ft_toupper(void) {
    printf("ft_toupper: %s\n", ft_toupper('a') == 'A' ? "OK!" : "KO");
}

void test_ft_strrchr(void) {
    printf("ft_strrchr: %s\n", ft_strrchr("Hello World", 'o') ? "OK!" : "KO");
}

void test_ft_isalpha(void) {
    printf("ft_isalpha: %s\n", ft_isalpha('a') ? "OK!" : "KO");
}

void test_ft_atoi(void) {
    printf("ft_atoi: %s\n", ft_atoi("42") == 42 ? "OK!" : "KO");
}

void test_ft_isalnum(void) {
    printf("ft_isalnum: %s\n", ft_isalnum('a') ? "OK!" : "KO");
}

void test_ft_tolower(void) {
    printf("ft_tolower: %s\n", ft_tolower('A') == 'a' ? "OK!" : "KO");
}

<<<<<<< HEAD
=======
void test_ft_memset(void) {
    char buffer[10] = "Hello";
    ft_memset(buffer, '*', 5);
    buffer[5] = '\0';
    printf("ft_memset: %s\n", strcmp(buffer, "*****") == 0 ? "OK!" : "KO");
}

void test_ft_bzero(void) {
    char buffer[10] = "Hello";
    ft_bzero(buffer, 5);
    if (buffer[0] == '\0' && buffer[1] == '\0' && buffer[2] == '\0' && buffer[3] == '\0' && buffer[4] == '\0') {
        printf("ft_bzero: OK!\n");
    } else {
        printf("ft_bzero: KO\n");
    }
}

void test_memcpy(void) {
    char src[20] = "Hello, World!";
    char dst[20];
    char expected[20] = "Hello, World!";

    ft_memcpy(dst, src, 13);
    dst[13] = '\0';

    if (strcmp(dst, expected) == 0) {
        printf("ft_memcpy: OK!\n");
    } else {
        printf("ft_memcpy: KO!\n");
    }
}

>>>>>>> 572285e (new)
int main(void) {
    test_ft_isdigit();
    test_ft_strlcpy();
    test_ft_strlen();
    test_ft_strchr();
    test_ft_isascii();
    test_ft_isprint();
    test_ft_toupper();
    test_ft_strrchr();
    test_ft_isalpha();
    test_ft_atoi();
    test_ft_isalnum();
    test_ft_tolower();
<<<<<<< HEAD
    
    return 0;
}
=======
    test_ft_memset();
    test_ft_bzero();
    test_memcpy();
    return 0;
}
>>>>>>> 572285e (new)
