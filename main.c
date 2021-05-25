#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
	char *str = "coucou";
	
	printf("_____________________________________________________\n");
	printf("ft_strlen\n");
	printf("ma fonction : %lu // la vraie fonction : %lu\n", ft_strlen(str), strlen(str));
	printf("_____________________________________________________\n");

	int c;
	c = '!';
	printf("_____________________________________________________\n");
	printf("ft_isalpha\n");
	printf("ma fonction : %d // la vraie fonction : %d\n", ft_isalpha(c), isalpha(c));
	printf("_____________________________________________________\n");

	c = 'f';
	printf("_____________________________________________________\n");
	printf("ft_isdigit\n");
	printf("ma fonction : %d // la vraie fonction : %d\n", ft_isdigit(c), isdigit(c));
	printf("_____________________________________________________\n");

	c = '?';
	printf("_____________________________________________________\n");
	printf("ft_isalnum\n");
	printf("ma fonction : %d // la vraie fonction : %d\n", ft_isalnum(c), isalnum(c));
	printf("_____________________________________________________\n");



	return (0);
}
