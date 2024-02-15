#ifndef MAIN_H
#define MAIN_H

char *create_array(unsigned int size, char c);
int _strlen(char *s);
char *_strdup(char *str);
char *_strncpy(char *dest, char *src, int n);
char *_strcpy(char *dest, char *src);
char *_memset(char *s, char b, unsigned int n);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);

#endif
