#include "../libft.h"

int		main()
{
	char src[10] = "Maguire";
	char dest[20] = "Billyallen";
	char dest2[20] = "Billyallen";

	printf("this is what strlcat returns: %lu\n", strlcat(dest, src, 10));
	printf("this is what my ft_strlcat returns: %lu\n", ft_strlcat(dest2, src, 10));

	return (0);
}
