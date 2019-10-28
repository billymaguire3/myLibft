#include <stdio.h>
#include "../libft.h"

int     main(void)
{
	char src[20]  = "maguire";
	char dest[20]  = "billy";

	//ft_strlcat(dest, src, 5);
	//printf("%s\n", dest);

	strlcat(dest, src, 9);
	printf("%s\n", dest);

	return (0);
} 
