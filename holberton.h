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
#endif /* Printf */
