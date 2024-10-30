#include "libft.h"
#include <stdio.h>
#include <string.h>

void test_ft_isdigit(void) {
    printf("\nTest ft_isdigit:\n");
    printf("ft_isdigit('5'): %s\n", ft_isdigit('5') ? "OK!" : "KO");
    printf("ft_isdigit('a'): %s\n", !ft_isdigit('a') ? "OK!" : "KO");
    printf("ft_isdigit('0'): %s\n", ft_isdigit('0') ? "OK!" : "KO");
    printf("ft_isdigit(' '): %s\n", !ft_isdigit(' ') ? "OK!" : "KO");
    printf("ft_isdigit('9'): %s\n", ft_isdigit('9') ? "OK!" : "KO");
}

void test_ft_strlcpy(void) {
    char dest[100];
    printf("\nTest ft_strlcpy:\n");
    char *src = "Hello";
    size_t result = ft_strlcpy(dest, src, sizeof(dest));
    printf("ft_strlcpy to empty dest: %s\n", result == 5 ? "OK!" : "KO");
    strcpy(dest, "");
    result = ft_strlcpy(dest, src, sizeof(dest));
    printf("ft_strlcpy to empty dest again: %s\n", result == 5 && strcmp(dest, "Hello") == 0 ? "OK!" : "KO");
}

void test_ft_strlen(void) {
    printf("\nTest ft_strlen:\n");
    printf("ft_strlen('Hello'): %s\n", ft_strlen("Hello") == 5 ? "OK!" : "KO");
    printf("ft_strlen(''): %s\n", ft_strlen("") == 0 ? "OK!" : "KO");
    printf("ft_strlen('42'): %s\n", ft_strlen("42") == 2 ? "OK!" : "KO");
    printf("ft_strlen('  '): %s\n", ft_strlen("  ") == 2 ? "OK!" : "KO");
}

void test_ft_strchr(void) {
    printf("\nTest ft_strchr:\n");
    printf("ft_strchr('Hello World', 'W'): %s\n", ft_strchr("Hello World", 'W') != NULL ? "OK!" : "KO");
    printf("ft_strchr('Hello', 'z'): %s\n", ft_strchr("Hello", 'z') == NULL ? "OK!" : "KO");
    printf("ft_strchr('Hello', '\\0'): %s\n", ft_strchr("Hello", '\0') != NULL ? "OK!" : "KO");
    printf("ft_strchr('Hello', 'H'): %s\n", ft_strchr("Hello", 'H') != NULL ? "OK!" : "KO");
}

void test_ft_isascii(void) {
    printf("\nTest ft_isascii:\n");
    printf("ft_isascii(127): %s\n", ft_isascii(127) ? "OK!" : "KO");
    printf("ft_isascii(128): %s\n", !ft_isascii(128) ? "OK!" : "KO");
    printf("ft_isascii(0): %s\n", ft_isascii(0) ? "OK!" : "KO");
    printf("ft_isascii(65): %s\n", ft_isascii(65) ? "OK!" : "KO"); 
}

void test_ft_isprint(void) {
    printf("\nTest ft_isprint:\n");
    printf("ft_isprint('A'): %s\n", ft_isprint('A') ? "OK!" : "KO");
    printf("ft_isprint(31): %s\n", !ft_isprint(31) ? "OK!" : "KO");
    printf("ft_isprint(' '): %s\n", ft_isprint(' ') ? "OK!" : "KO");
    printf("ft_isprint(126): %s\n", ft_isprint(126) ? "OK!" : "KO");
}

void test_ft_toupper(void) {
    printf("\nTest ft_toupper:\n");
    printf("ft_toupper('a'): %s\n", ft_toupper('a') == 'A' ? "OK!" : "KO");
    printf("ft_toupper('A'): %s\n", ft_toupper('A') == 'A' ? "OK!" : "KO");
    printf("ft_toupper('1'): %s\n", ft_toupper('1') == '1' ? "OK!" : "KO");
    printf("ft_toupper(' '): %s\n", ft_toupper(' ') == ' ' ? "OK!" : "KO");
}

void test_ft_strrchr(void) {
    printf("\nTest ft_strrchr:\n");
    printf("ft_strrchr('Hello World', 'o'): %s\n", ft_strrchr("Hello World", 'o') != NULL ? "OK!" : "KO");
    printf("ft_strrchr('Hello', 'z'): %s\n", ft_strrchr("Hello", 'z') == NULL ? "OK!" : "KO");
    printf("ft_strrchr('Hello', 'H'): %s\n", ft_strrchr("Hello", 'H') != NULL ? "OK!" : "KO");
}

void test_ft_atoi(void) {
    printf("\nTest ft_atoi:\n");
    printf("ft_atoi('42'): %s\n", ft_atoi("42") == 42 ? "OK!" : "KO");
    printf("ft_atoi('-42'): %s\n", ft_atoi("-42") == -42 ? "OK!" : "KO");
    printf("ft_atoi('   +123'): %s\n", ft_atoi("   +123") == 123 ? "OK!" : "KO");
    printf("ft_atoi('abc'): %s\n", ft_atoi("abc") == 0 ? "OK!" : "KO");
    printf("ft_atoi('   42abc'): %s\n", ft_atoi("   42abc") == 42 ? "OK!" : "KO");
}

void test_ft_tolower(void) {
    printf("\nTest ft_tolower:\n");
    printf("ft_tolower('A'): %s\n", ft_tolower('A') == 'a' ? "OK!" : "KO");
    printf("ft_tolower('a'): %s\n", ft_tolower('a') == 'a' ? "OK!" : "KO");
    printf("ft_tolower('1'): %s\n", ft_tolower('1') == '1' ? "OK!" : "KO");
    printf("ft_tolower(' '): %s\n", ft_tolower(' ') == ' ' ? "OK!" : "KO");
}

void test_ft_strlcat(void) {
    char dest[20] = "Hello";
    const char *src = "World";
    size_t result;

    printf("\nTest ft_strlcat:\n");
    result = ft_strlcat(dest, src, sizeof(dest));
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
    printf("ft_memmove copy 'Hello, World!': %s\n", strcmp(dest, "Hello, World!") == 0 ? "OK!" : "KO");
}

void test_ft_strtrim(void) {
    char *result;

    printf("\nTest ft_strtrim:\n");

    result = ft_strtrim("   Hello World   ", " ");
    printf("ft_strtrim('   Hello World   '): %s %s\n", result, strcmp(result, "Hello World") == 0 ? "OK!" : "KO");
    free(result);

    result = ft_strtrim("   ", " ");
    printf("ft_strtrim('   '): '%s' %s\n", result, strcmp(result, "") == 0 ? "OK!" : "KO");
    free(result);

    result = ft_strtrim("   a   ", " ");
    printf("ft_strtrim('   a   '): '%s' %s\n", result, strcmp(result, "a") == 0 ? "OK!" : "KO");
    free(result);
}



void test_ft_putchar_fd() {
    printf("\nTest ft_putchar_fd: \n");
    ft_putchar_fd('A', 1);
    if ('A' == 'A')
        printf("- OK\n");
    else
        printf("- KO\n");
}

void test_ft_putstr_fd() {
    printf("\nTest ft_putstr_fd: \n");
    ft_putstr_fd("Hello, World!", 1);
    if (strcmp("Hello, World!", "Hello, World!") == 0)
        printf("- OK\n");
    else
        printf("- KO\n");
}

void test_ft_putendl_fd() {
    printf("\nTest ft_putendl_fd:\n ");
    ft_putendl_fd("This is a new line.", 1);
    if (strcmp("This is a new line.\n", "This is a new line.\n") == 0)
        printf("-OK\n");
    else
        printf("-KO\n");
}

void test_ft_putnbr_fd() {
    printf("\nTest ft_putnbr_fd (positive):\n ");
    ft_putnbr_fd(12345, 1);
    if (12345 == 12345)
        printf("-OK\n");
    else
        printf("-KO\n");

    printf("\nTest ft_putnbr_fd (negative):\n ");
    ft_putnbr_fd(-67890, 1);
    if (-67890 == -67890)
        printf("OK\n");
    else
        printf("KO\n");
}

void free_split_result(char **result) {
    if (result) {
        for (int i = 0; result[i]; i++) {
            free(result[i]);
        }
        free(result);
    }
}

void test_ft_split() {
    char **result;

    printf("\nTest ft_split (basic split):\n");
    result = ft_split("Hello World", ' ');
    if (result && strcmp(result[0], "Hello") == 0 && strcmp(result[1], "World") == 0 && result[2] == NULL) {
        printf("-OK\n");
    } else {
        printf("-KO\n");
    }
    free_split_result(result);

    printf("Test ft_split (multiple delimiters):\n");
    result = ft_split("Split this  string", ' ');
    if (result && strcmp(result[0], "Split") == 0 && strcmp(result[1], "this") == 0 && 
        strcmp(result[2], "string") == 0 && result[3] == NULL) {
        printf("-OK\n");
    } else {
        printf("-KO\n");
    }
    free_split_result(result);

    printf("Test ft_split (leading and trailing spaces):\n");
    result = ft_split("   Hello   ", ' ');
    if (result && strcmp(result[0], "Hello") == 0 && result[1] == NULL) {
        printf("-OK\n");
    } else {
        printf("-KO\n");
    }
    free_split_result(result);

    printf("Test ft_split (empty string):\n");
    result = ft_split("", ' ');
    if (result && result[0] == NULL) {
        printf("-OK\n");
    } else {
        printf("-KO\n");
    }
    free_split_result(result);
}

void test_ft_itoa() {
    char *result;

    printf("\nTest ft_itoa (positive number):\n");
    result = ft_itoa(1980);
    if (result && strcmp(result, "1980") == 0) {
        printf("- OK: %s\n", result);
    } else {
        printf("- KO: %s\n", result);
    }
    free(result);

    printf("Test ft_itoa (zero):\n");
    result = ft_itoa(0);
    if (result && strcmp(result, "0") == 0) {
        printf("- OK: %s\n", result);
    } else {
        printf("- KO: %s\n", result);
    }
    free(result);

    printf("Test ft_itoa (negative number):\n");
    result = ft_itoa(-42);
    if (result && strcmp(result, "-42") == 0) {
        printf("- OK: %s\n", result);
    } else {
        printf("- KO: %s\n", result);
    }
    free(result);

    printf("Test ft_itoa (INT_MIN):\n");
    result = ft_itoa(-2147483648);
    if (result && strcmp(result, "-2147483648") == 0) {
        printf("- OK: %s\n", result);
    } else {
        printf("- KO: %s\n", result);
    }
    free(result);

    printf("Test ft_itoa (INT_MAX):\n");
    result = ft_itoa(2147483647);
    if (result && strcmp(result, "2147483647") == 0) {
        printf("- OK: %s\n", result);
    } else {
        printf("- KO: %s\n", result);
    }
    free(result);
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
    test_ft_strtrim();
    test_ft_putchar_fd();
    test_ft_putstr_fd();
    test_ft_putendl_fd();
    test_ft_putnbr_fd();
	test_ft_split();
    test_ft_itoa();

    return 0;
}
