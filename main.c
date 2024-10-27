#include "libft.h"
#include <stdio.h>
#include <string.h>

void test_ft_isdigit(void) {
    printf("\nTest ft_isdigit:\n");
    printf("ft_isdigit('5'): %s\n", ft_isdigit('5') ? "OK!" : "KO");
    printf("ft_isdigit('a'): %s\n", !ft_isdigit('a') ? "OK!" : "KO");
    printf("ft_isdigit('0'): %s\n", ft_isdigit('0') ? "OK!" : "KO");
}

void test_ft_strlcpy(void) {
    char dest[100];
    printf("\nTest ft_strlcpy:\n");
    char *src = "Hello";
    size_t result = ft_strlcpy(dest, src, sizeof(dest));
    printf("ft_strlcpy to empty dest: %s\n", result == 5 ? "OK!" : "KO");
}

void test_ft_strlen(void) {
    printf("\nTest ft_strlen:\n");
    printf("ft_strlen('Hello'): %s\n", ft_strlen("Hello") == 5 ? "OK!" : "KO");
    printf("ft_strlen(''): %s\n", ft_strlen("") == 0 ? "OK!" : "KO");
    printf("ft_strlen('42'): %s\n", ft_strlen("42") == 2 ? "OK!" : "KO");
}

void test_ft_strchr(void) {
    printf("\nTest ft_strchr:\n");
    printf("ft_strchr('Hello World', 'W'): %s\n", ft_strchr("Hello World", 'W') ? "OK!" : "KO");
    printf("ft_strchr('Hello', 'z'): %s\n", !ft_strchr("Hello", 'z') ? "OK!" : "KO");
    printf("ft_strchr('Hello', '\\0'): %s\n", ft_strchr("Hello", '\0') ? "OK!" : "KO");
}

void test_ft_isascii(void) {
    printf("\nTest ft_isascii:\n");
    printf("ft_isascii(127): %s\n", ft_isascii(127) ? "OK!" : "KO");
    printf("ft_isascii(128): %s\n", !ft_isascii(128) ? "OK!" : "KO");
    printf("ft_isascii(0): %s\n", ft_isascii(0) ? "OK!" : "KO");
}

void test_ft_isprint(void) {
    printf("\nTest ft_isprint:\n");
    printf("ft_isprint('A'): %s\n", ft_isprint('A') ? "OK!" : "KO");
    printf("ft_isprint(31): %s\n", !ft_isprint(31) ? "OK!" : "KO");
    printf("ft_isprint(' '): %s\n", ft_isprint(' ') ? "OK!" : "KO");
}

void test_ft_toupper(void) {
    printf("\nTest ft_toupper:\n");
    printf("ft_toupper('a'): %s\n", ft_toupper('a') == 'A' ? "OK!" : "KO");
    printf("ft_toupper('A'): %s\n", ft_toupper('A') == 'A' ? "OK!" : "KO");
    printf("ft_toupper('1'): %s\n", ft_toupper('1') == '1' ? "OK!" : "KO");
}

void test_ft_strrchr(void) {
    printf("\nTest ft_strrchr:\n");
    printf("ft_strrchr('Hello World', 'o'): %s\n", ft_strrchr("Hello World", 'o') ? "OK!" : "KO");
    printf("ft_strrchr('Hello', 'z'): %s\n", !ft_strrchr("Hello", 'z') ? "OK!" : "KO");
    printf("ft_strrchr('Hello', 'H'): %s\n", ft_strrchr("Hello", 'H') ? "OK!" : "KO");
}

void test_ft_atoi(void) {
    printf("\nTest ft_atoi:\n");
    printf("ft_atoi('42'): %s\n", ft_atoi("42") == 42 ? "OK!" : "KO");
    printf("ft_atoi('-42'): %s\n", ft_atoi("-42") == -42 ? "OK!" : "KO");
    printf("ft_atoi('   +123'): %s\n", ft_atoi("   +123") == 123 ? "OK!" : "KO");
    printf("ft_atoi('abc'): %s\n", ft_atoi("abc") == 0 ? "OK!" : "KO");
}

void test_ft_tolower(void) {
    printf("\nTest ft_tolower:\n");
    printf("ft_tolower('A'): %s\n", ft_tolower('A') == 'a' ? "OK!" : "KO");
    printf("ft_tolower('a'): %s\n", ft_tolower('a') == 'a' ? "OK!" : "KO");
    printf("ft_tolower('1'): %s\n", ft_tolower('1') == '1' ? "OK!" : "KO");
}

void test_ft_strlcat(void) {
    char dest[20] = "Hello";
    const char *src = "World";
    size_t result;

    printf("\nTest ft_strlcat:\n");
    result = ft_strlcat(dest, src, 20);
    printf("ft_strlcat('Hello', 'World', 20): %s, returned length: %zu\n", 
           strcmp(dest, "HelloWorld") == 0 && result == 10 ? "OK!" : "KO", result);
    strcpy(dest, "Hello");
    result = ft_strlcat(dest, src, 8);
    printf("ft_strlcat('Hello', 'World', 8): %s, returned length: %zu\n", 
           strcmp(dest, "HelloWo") == 0 && result == 10 ? "OK!" : "KO", result);
}

void test_ft_bzero(void) {
    char buffer[10] = "Hello";

    printf("\nTest ft_bzero:\n");
    ft_bzero(buffer, 3);
    printf("ft_bzero first 3 chars: %s\n", (buffer[0] == '\0' && buffer[1] == '\0' && buffer[2] == '\0' && buffer[3] == 'l') ? "OK!" : "KO");
}

void test_ft_memset(void) {
    char buffer[10] = "Hello";

    printf("\nTest ft_memset:\n");
    ft_memset(buffer, 'A', 3);
    printf("ft_memset first 3 chars to 'A': %s\n", (buffer[0] == 'A' && buffer[1] == 'A' && buffer[2] == 'A' && buffer[3] == 'l') ? "OK!" : "KO");
}

void test_ft_memcpy(void) {
    char src[10] = "Hello";
    char dest[10];

    printf("\nTest ft_memcpy:\n");
    ft_memcpy(dest, src, 6);
    printf("ft_memcpy copy 'Hello': %s\n", strcmp(dest, "Hello") == 0 ? "OK!" : "KO");
}

void test_ft_memmove(void) {
    char dest[50];
    const char *src = "Hello, World!";
    
    printf("\nTest ft_memmove:\n");

    ft_memmove(dest, src, strlen(src) + 1);
    printf("ft_memmove to empty dest: %s\n", strcmp(dest, src) == 0 ? "OK!" : "KO");
    char overlap_left[] = "Overlap Test";
    ft_memmove(overlap_left + 5, overlap_left, 10);
    printf("ft_memmove overlapping regions left shift: %s\n", strcmp(overlap_left, "Overlap Overlap") == 0 ? "OK!" : "KO");
    char overlap_right[] = "Overlap Test";
    ft_memmove(overlap_right, overlap_right + 5, 10);
    printf("ft_memmove overlapping regions right shift: %s\n", strcmp(overlap_right, "Test") == 0 ? "OK!" : "KO");
}


void test_ft_strncmp(void) {
    printf("\nTest ft_strncmp:\n");
    printf("ft_strncmp('Hello', 'Hello', 5): %s\n", ft_strncmp("Hello", "Hello", 5) == 0 ? "OK!" : "KO");
    printf("ft_strncmp('Hello', 'Hellp', 5): %s\n", ft_strncmp("Hello", "Hellp", 5) < 0 ? "OK!" : "KO");
    printf("ft_strncmp('Hello', 'Hellp', 4): %s\n", ft_strncmp("Hello", "Hellp", 4) == 0 ? "OK!" : "KO");
    printf("ft_strncmp('', '', 1): %s\n", ft_strncmp("", "", 1) == 0 ? "OK!" : "KO");
    printf("ft_strncmp('Hello', '', 1): %s\n", ft_strncmp("Hello", "", 1) > 0 ? "OK!" : "KO");
    printf("ft_strncmp('', 'Hello', 1): %s\n", ft_strncmp("", "Hello", 1) < 0 ? "OK!" : "KO");
    printf("ft_strncmp('Hello', 'Hello', 10): %s\n", ft_strncmp("Hello", "Hello", 10) == 0 ? "OK!" : "KO");
    printf("ft_strncmp('Hello', 'HelLo', 5): %s\n", ft_strncmp("Hello", "HelLo", 5) > 0 ? "OK!" : "KO");
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
    test_ft_atoi();
    test_ft_tolower();
    test_ft_strlcat();
    test_ft_bzero();
    test_ft_memset();
    test_ft_memcpy();
    test_ft_memmove();
    test_ft_strncmp();
    return 0;
}
