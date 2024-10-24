#include "libft.h"
#include <stdio.h>

void test_ft_isdigit(void) {
    printf("ft_isdigit: %s\n", ft_isdigit('5') ? "OK!" : "KO");
}

void test_ft_strlcpy(void) {
    char dest[100];
    char *src = "Hello";
    size_t result = ft_strlcpy(dest, src, sizeof(dest));
    printf("ft_strlcpy: %s (length: %zu)\n", result == 5 ? "OK!" : "KO", result);
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
    
    return 0;
}
