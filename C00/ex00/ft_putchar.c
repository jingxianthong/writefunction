#include "ft_putchar.c"
#include <unistd.h>

void ft_putchar(char c);

int main(void)
{
	ft_pucthar("0");
	return 0;
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}
