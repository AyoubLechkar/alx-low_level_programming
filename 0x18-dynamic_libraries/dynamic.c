#include <stdio.h>

int _putchar(char c)
{
    return putchar(c);
}

int _islower(int c)
{
    return c >= 'a' && c <= 'z';
}

int _isupper(int c)
{
    return c >= 'A' && c <= 'Z';
}

int _isalpha(int c)
{
    return ( _islower(c) || _isupper(c) );
}

int _abs(int n)
{
    return (n < 0) ? -n : n;
}

int _isdigit(int c)
{
    return c >= '0' && c <= '9';
}

int _strlen(char *s)
{
    int length = 0;
    while (*s != '\0')
    {
        length++;
        s++;
    }
    return length;
}

void _puts(char *s)
{
    while (*s != '\0')
    {
        _putchar(*s);
        s++;
    }
    _putchar('\n');
}

char *_strcpy(char *dest, char *src)
{
    char *start = dest;
    while (*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
    return start;
}

int _atoi(char *s)
{
    int sign = 1;
    int result = 0;
    if (*s == '-')
    {
        sign = -1;
        s++;
    }
    while (*s != '\0')
    {
        if (_isdigit(*s))
        {
            result = result * 10 + (*s - '0');
        }
        else
        {
            break;
        }
        s++;
    }
    return sign * result;
}

char *_strcat(char *dest, char *src)
{
    char *start = dest;
    while (*dest != '\0')
    {
        dest++;
    }
    while (*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
    return start;
}

char *_strncat(char *dest, char *src, int n)
{
    char *start = dest;
    while (*dest != '\0')
    {
        dest++;
    }
    while (*src != '\0' && n > 0)
    {
        *dest = *src;
        dest++;
        src++;
        n--;
    }
    *dest = '\0';
    return start;
}

char *_strncpy(char *dest, char *src, int n)
{
    char *start = dest;
    int i = 0;
    while (*src != '\0' && i < n)
    {
        *dest = *src;
        dest++;
        src++;
        i++;
    }
    while (i < n)
    {
        *dest = '\0';
        dest++;
        i++;
    }
    return start;
}

int _strcmp(char *s1, char *s2)
{
    while (*s1 != '\0' && *s1 == *s2)
    {
        s1++;
        s2++;
    }
    return *s1 - *s2;
}

char *_memset(char *s, char b, unsigned int n)
{
    char *start = s;
    while (n > 0)
    {
        *s = b;
        s++;
        n--;
    }
    return start;
}

char *_memcpy(char *dest, char *src, unsigned int n)
{
    char *start = dest;
    while (n > 0)
    {
        *dest = *src;
        dest++;
        src++;
        n--;
    }
    return start;
}

char *_strchr(char *s, char c)
{
    while (*s != '\0')
    {
        if (*s == c)
            return s;
        s++;
    }
    if (c == '\0')
        return s;
    return NULL;
}

unsigned int _strspn(char *s, char *accept)
{
    unsigned int count = 0;
    char *p = accept;
    while (*s != '\0')
    {
        while (*p != '\0')
        {
            if (*s == *p)
            {
                count++;
                break;
            }
            p++;
        }
        if (*p == '\0')
            break;
        s++;
        p = accept;
    }
    return count;
}

char *_strpbrk(char *s, char *accept)
{
    while (*s != '\0')
    {
        char *p = accept;
        while (*p != '\0')
        {
            if (*s == *p)
                return s;
            p++;
        }
        s++;
    }
    return NULL;
}

char *_strstr(char *haystack, char *needle)
{
    if (*needle == '\0')
        return haystack;
    while (*haystack != '\0')
    {
        char *h = haystack;
        char *n = needle;
        while (*n != '\0' && *h == *n)
        {
            h++;
            n++;
        }
        if (*n == '\0')
            return haystack;
        haystack++;
    }
    return NULL;
}
