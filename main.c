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

	c = 130;
	printf("_____________________________________________________\n");
	printf("ft_isascii\n");
	printf("ma fonction : %d // la vraie fonction : %d\n", ft_isascii(c), isascii(c));
	printf("_____________________________________________________\n");

	c = '~' ;
	printf("_____________________________________________________\n");
	printf("ft_isprint\n");
	printf("ma fonction : %d // la vraie fonction : %d\n", ft_isprint(c), isprint(c));
	printf("_____________________________________________________\n");

	c = 'h' ;
	printf("_____________________________________________________\n");
	printf("ft_toupper\n");
	printf("ma fonction : %c // la vraie fonction : %c\n", ft_toupper(c), toupper(c));
	printf("_____________________________________________________\n");

	c = 'A' ;
	printf("_____________________________________________________\n");
	printf("ft_tolower\n");
	printf("ma fonction : %c // la vraie fonction : %c\n", ft_tolower(c), tolower(c));
	printf("_____________________________________________________\n");

	size_t n;
	n = 4;
	printf("_____________________________________________________\n");
	printf("ft_strncmp\n");
	printf("ma fonction : %d // la vraie fonction : %d\n", ft_strncmp("Hel", "Hello", n), strncmp("Hel", "Hello", n));
	printf("_____________________________________________________\n");



	return (0);
}
