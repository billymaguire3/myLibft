/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 17:15:31 by wimaguir          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2020/01/08 17:44:43 by wimaguir         ###   ########.fr       */
=======
/*   Updated: 2020/01/22 09:24:23 by wimaguir         ###   ########.fr       */
/*   Updated: 2019/10/31 13:03:24 by wimaguir         ###   ########.fr       */
>>>>>>> 692c18cf7ecf471cd5f9a89ea3457e0ce77f9634
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int		main(void)
{
	char str[20] = "cheddarcheese";
	char str2[10] = "redwings";

	printf("the output for CPU's strrchr is: ""%s\n", strrchr(str, 'h'));
	printf("the output for MY ft_strchr is: ""%s\n", ft_strrchr(str, 'h'));
<<<<<<< HEAD
=======

	printf("the output for CPU's strrchr is: ""%s\n", strrchr(str2, 'd'));
	printf("the output for MY ft_strrchr is: ""%s\n", ft_strrchr(str2, 'd'));
>>>>>>> 692c18cf7ecf471cd5f9a89ea3457e0ce77f9634
	return (0);
}
