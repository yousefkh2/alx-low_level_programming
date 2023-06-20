#include <stdio.h>

int _isupper(int c); // This is a forward declaration

int _putchar(char c){
    return putchar(c);
}

int _islower(int c){
    return (c >= 'a' && c <= 'z') ? 1 : 0;
}

int _isalpha(int c){
    return ((_islower(c) || _isupper(c)) ? 1 : 0);
}

int _abs(int n){
    return (n < 0 ? -n : n);
}

int _isupper(int c){
    return (c >= 'A' && c <= 'Z') ? 1 : 0;
}

int _isdigit(int c){
    return (c >= '0' && c <= '9') ? 1 : 0;
}

int _strlen(char *s){
    int length = 0;
    while(*s++){
        length++;
    }
    return length;
}

void _puts(char *s){
    while(*s){
        _putchar(*s++);
    }
}

// Not yet implemented, returns dummy values or does nothing
char *_strcpy(char *dest, char *src){return dest;}
int _atoi(char *s){return 0;}
char *_strcat(char *dest, char *src){return dest;}
char *_strncat(char *dest, char *src, int n){return dest;}
char *_strncpy(char *dest, char *src, int n){return dest;}
int _strcmp(char *s1, char *s2){return 0;}
char *_memset(char *s, char b, unsigned int n){return s;}
char *_memcpy(char *dest, char *src, unsigned int n){return dest;}
char *_strchr(char *s, char c){return s;}
unsigned int _strspn(char *s, char *accept){return 0;}
char *_strpbrk(char *s, char *accept){return s;}
char *_strstr(char *haystack, char *needle){return haystack;}