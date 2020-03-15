#ifndef F
#define F

/**
 * struct print - struct for conversion specifiers
 * @print: struct print
 * @p: print function specified
 */
typedef struct print
{
	char *print;
	int (*p)();
} print_t;



int _printf(const char *format, ...);
int _putchar(char c);

int print_c(va_list arg);

#endif /* Printf */
