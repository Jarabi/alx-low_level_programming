#include"main.h"

int main(void)
{
	char *str = "_putchar";

	while (*str)
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');

	return (0);
}
