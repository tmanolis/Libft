#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
	char c;

	c = '!';
	printf("_____________________________________________________\n");
	printf("ft_isalpha\n");
	printf("ma fonction : %d // la vraie fonction : %d\n", ft_isalpha(c), isalpha(c));
	printf("_____________________________________________________\n");

	char *str;
	str = "coucou";
	printf("_____________________________________________________\n");
	printf("ft_strlen\n");
	printf("ma fonction : %d // la vraie fonction : %d\n", ft_strlen(str), strlen(str));
	printf("_____________________________________________________\n");

	return (0);
}
