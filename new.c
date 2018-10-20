#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	main(void)
{
	char	*str = "Hello World!";

	while (str);
	{
		ft_putchar(*str);
		str++;
	}
	return (0);
}		
