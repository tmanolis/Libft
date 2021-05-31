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
	size_t	test;

	char str1[50] = "Coucou les amis" ;
	test = 10;
	printf("_____________________________________________________\n");
	printf("ft_memset\n");
	printf("ma fonction : %s // la vraie fonction : %s\n", ft_memset(str1,'U', 5), memset((void *)&test, 'U', 5));
	printf("_____________________________________________________\n");

	char str2[50] = "Coucou les amis" ;
	char str3[50] = "Coucou les amis" ;
	printf("_____________________________________________________\n");
	printf("ft_bzero\n");
	ft_bzero(str2, 15);
	bzero(str3, 15);
	printf("ma fonction : %s // la vraie fonction : %s\n", str2, str3);
	printf("_____________________________________________________\n");
	
	char src4[50] = "Hola" ;
	char dst4[50] = "Coucou les amis" ;
	char dst5[50] = "Coucou les amis" ;
	printf("_____________________________________________________\n");
	printf("ft_memcpy\n");
	ft_memcpy(dst4, src4, 0);
	memcpy(dst5, src4, 0);
	printf("ma fonction : %s // la vraie fonction : %s\n", dst4, dst5);
	printf("_____________________________________________________\n");
	
	c = 'l';
	char dst6[50] = "Coucou les amis" ;
	char dst7[50] = "Coucou les amis" ;
	printf("_____________________________________________________\n");
	printf("ft_memccpy\n");
	printf("ma fonction : %p // la vraie fonction : %p\n", ft_memccpy(dst6, src4, c, 15), memccpy(dst7, src4, c, 15));
	printf("ma fonction : %s // la vraie fonction : %s\n", dst6, dst7);
	printf("_____________________________________________________\n");

	c = 'l';
	printf("_____________________________________________________\n");
	printf("ft_memchr\n");
	printf("str : %s // occurence : %c\n", src4, c);
	printf("ma fonction : %p // la vraie fonction : %p\n", ft_memchr(src4, c, 4), memchr(src4, c, 4));
	printf("_____________________________________________________\n");

	char dst8[50] = "Coucou les amis" ;
	char dst9[50] = "Coucou les amus" ;
	printf("_____________________________________________________\n");
	printf("ft_memcmp\n");
	printf("ma fonction : %d // la vraie fonction : %d\n", ft_memcmp(dst8, dst9, 15), memcmp(dst8, dst9, 15));
	printf("_____________________________________________________\n");

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

	str =  "Salut les nazes";
	printf("_____________________________________________________\n");
	printf("ft_strdup\n");
	printf("%s\n", str);
	printf("ma fonction : %s // la vraie fonction : %s\n", ft_strdup(str), strdup(str));
	printf("_____________________________________________________\n");

	return (0);
}
