/**
 * o_str - function to print a array of strings
 * @args: va_list arguments
 * Return: Always
 */
int o_str(va_list arg)
{
	char *str = va_arg(arg, char *);
	int x;

	if (str == NULL)
		return (NULL);
	for (x = 0; str[x] != '\0'; x++)
	{
		x = _putchar(str[x]);
	}
	return (x);
}