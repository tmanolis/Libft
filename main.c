#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

int	main(void)
{
	char *str;
	int c;
	size_t n;


	str = "coucou";
	printf("_____________________________________________________\n");
	printf("ft_strlen\n");
	printf("ma fonction : %lu // la vraie fonction : %lu\n", ft_strlen(str), strlen(str));
	printf("_____________________________________________________\n");

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

	c = 'm' ;
	printf("_____________________________________________________\n");
	printf("ft_strchr\n");
	printf("ma fonction : %s // la vraie fonction : %s\n", ft_strchr("pomme", c), strchr("pomme", c));
	printf("_____________________________________________________\n");

	c = 'm' ;
	printf("_____________________________________________________\n");
	printf("ft_strrchr\n");
	printf("ma fonction : %s // la vraie fonction : %s\n", ft_strrchr("pomme", c), strrchr("pomme", c));
	printf("_____________________________________________________\n");
	
	n = 4;
	printf("_____________________________________________________\n");
	printf("ft_strncmp\n");
	printf("ma fonction : %d // la vraie fonction : %d\n", ft_strncmp("Hel", "Hello", n), strncmp("Hel", "Hello", n));
	printf("_____________________________________________________\n");

	char dst[] = "Hello";
	const char src[] = "Hey";
	n = 3;
	printf("_____________________________________________________\n");
	printf("ft_strlcpy\n");
	printf("ma fonction : %lu\ndst : %s\n", ft_strlcpy(dst, src, n), dst);
	
	char dst1[] = "Hello";
	printf("la vraie fonction : %lu\ndst : %s\n", strlcpy(dst1, src, n), dst1);
	printf("_____________________________________________________\n");

	char dst2[30] = "Toi";
	const char src2[] = "Hello";
	char dst3[30] = "Toi";
	const char src3[] = "Hello";
	size_t size;
	size = 1;
	printf("_____________________________________________________\n");
	printf("ft_strlcat\n");
	printf("dst : %s\nsrc : %s\n", dst2, src2);
	printf("ma fonction : %lu / dst : %s\n", ft_strlcat(dst2, src2, size), dst2);
	printf("la vraie fonction : %lu / dst : %s\n", strlcat(dst3, src3, size), dst3);
	printf("_____________________________________________________\n");

	n = 50;
	printf("_____________________________________________________\n");
	printf("ft_strnstr\n");
	printf("ma fonction : %s // la vraie fonction : %s\n", ft_strnstr("Foo Bar Baz", "Bar", n), strnstr("Foo Bar Baz", "Bar", n));
	printf("_____________________________________________________\n");

	str =  " -12354";
	printf("_____________________________________________________\n");
	printf("ft_atoi\n");
	printf("ma fonction : %d // la vraie fonction : %d\n", ft_atoi(str), atoi(str));
	printf("_____________________________________________________\n");
	return (0);
}
