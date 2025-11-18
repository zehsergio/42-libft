#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

	// even to upper: to test ft_strmapi.c
	char even_to_upper(unsigned int i, char c)
	{
		if (i % 2 == 0)
			return ft_toupper(c);
		return c;
	}
	// even to upper: to test ft_strmapi.c

int	main(void)

{
	// isalpha
	printf("\n---- ft_isalpha vs isalpha ----\n");
	printf("'5' → ft: %d | real: %d\n", ft_isalpha('5'), isalpha('5'));
	printf("'p' → ft: %d | real: %d\n", ft_isalpha('p'), isalpha('p'));
	printf("'O' → ft: %d | real: %d\n", ft_isalpha('O'), isalpha('O'));
	printf("'?' → ft: %d | real: %d\n", ft_isalpha('?'), isalpha('?'));
	printf("'Z' → ft: %d | real: %d\n", ft_isalpha('Z'), isalpha('Z'));
	printf("'a' → ft: %d | real: %d\n", ft_isalpha('a'), isalpha('a'));
	// isalpha

	// isdigit
	printf("\n---- ft_isdigit vs isdigit ----\n");
	printf("'5' → ft: %d | real: %d\n", ft_isdigit('5'), isdigit('5'));
	printf("'p' → ft: %d | real: %d\n", ft_isdigit('p'), isdigit('p'));
	printf("'0' → ft: %d | real: %d\n", ft_isdigit('0'), isdigit('0'));
	printf("'?' → ft: %d | real: %d\n", ft_isdigit('?'), isdigit('?'));
	printf("'9' → ft: %d | real: %d\n", ft_isdigit('Z'), isdigit('Z'));
	// isdigit

	// isalnum
	printf("\n---- ft_isalnum vs isalnum ----\n");
	printf("'5' → ft: %d | real: %d\n", ft_isalnum('5'), isalnum('5'));
	printf("'p' → ft: %d | real: %d\n", ft_isalnum('p'), isalnum('p'));
	printf("'D' → ft: %d | real: %d\n", ft_isalnum('D'), isalnum('D'));
	printf("'?' → ft: %d | real: %d\n", ft_isalnum('?'), isalnum('?'));
	// isalnum
	
	// isascii
	printf("\n---- ft_isascii vs isascii ----\n");
	printf("'128' → ft: %d | real: %d\n", ft_isascii(128), isascii(128));
	printf("'65'  → ft: %d | real: %d\n", ft_isascii(65),  isascii(65));
	printf("'0'   → ft: %d | real: %d\n", ft_isascii(0), 	 isascii(0));
	printf("'255' → ft: %d | real: %d\n", ft_isascii(255), isascii(255));
	// isascii

	// isprint
	printf("\n---- ft_isprint vs isprint ----\n");
	printf("' '  → ft: %d | real: %d\n", ft_isprint(' '),  isprint(' '));
	printf("'~'  → ft: %d | real: %d\n", ft_isprint('~'),  isprint('~'));
	printf("'127'→ ft: %d | real: %d\n", ft_isprint(127), isprint(127));
	printf("'31' → ft: %d | real: %d\n", ft_isprint(31),  isprint(31));
	// isprint

	// calloc
	printf("\n---- calloc ----\n");
	int	*calloc_test;
	calloc_test = ft_calloc(6, sizeof(*calloc_test));
	printf("Calloc an array of 6 int\n    ");
	for(int i = 0; i < 6; i++)
		printf("%d ", calloc_test[i]);
	printf("\n");
	free(calloc_test);
	// calloc

	// *****split
	printf("\n---- ft_split ----\n");
    const char *str = "  hello world 42 school  ";
    char sep = ' ';
    char **v = ft_split(str, sep);

    printf("Input: \"%s\"\nSep  : '%c'\n\n", str, sep);

    if (!v) {
        puts("ft_split returned NULL");
        return 1;
    }

    // Mostra resultado e endereços (útil para debug de ponteiros)
    for (int i = 0; v[i]; i++) {
        printf("v[%d] @ %p -> \"%s\"\n", i, (void*)v[i], v[i]);
    }

    // Libera tudo
    for (int i = 0; v[i]; i++) free(v[i]);
    free(v);
	// *****split

	// itoa
	printf("\n---- ft_itoa ----\n");
	long i = -12345;
	char *result = ft_itoa(i);
	printf("result: %s\n", result);
	// itoa

	// strmapi
	printf("\n---- ft_strmapi ----\n");
	char	*base_str = "hello world";
	char	*new_str = ft_strmapi(base_str, even_to_upper);
	
	printf("Original string: %s\n", base_str);
    printf("Transformed string: %s\n", new_str);
	
	free(new_str);
	// strmapi

 	// strtrim
    printf("\n---- strtrim ----\n");
    char *str16;
    char *trimmed;
	char *trimmed_org;
    char *set;

    set = "ab";
    str16 = "ababaaaMy name is Joseabbaaabbad";
    printf("Original string: %s\n", str16);
	printf("Set trim is: %s\n", set);
    
    trimmed = ft_strtrim(str16, set);
    printf("Trimmed string:  %s\n", trimmed);

	trimmed_org = strtrim(str16, set);
	printf("Trimmed string with original function:  %s\n", trimmed_org);

    free(trimmed);
	free(trimmed_org);
    // strtrim

	return 0;
}

