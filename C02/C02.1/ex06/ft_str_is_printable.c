/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvela-fe <rvela-fe@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 21:35:00 by rvela-fe          #+#    #+#             */
/*   Updated: 2022/07/21 09:16:11 by rvela-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || (str[i] >= 32 && str[i] <= 127))
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

/*int	main(void)
{
  	char	str[] = "Me gusta programar en C 42";
	if ((ft_str_is_uppercase(str) == 1))
	{
	  	printf("Is correct is 1");
	}
	else
	{
		printf("Is incorrect is 0");
	}
	return (0);
}
*/
