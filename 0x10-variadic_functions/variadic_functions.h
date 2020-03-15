#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
/**
 * struct fmt - Struct ftm
 *
 * @m: The format
 * @fun: The function associated
 */
typedef struct fmt
{
	char *m;
	void (*fun)();
} fmt;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);


#endif /* VARIADIC_FUNCTIONS_H */
