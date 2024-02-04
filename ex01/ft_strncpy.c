/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurencio <laurencio@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 01:23:56 by laurencio         #+#    #+#             */
/*   Updated: 2024/02/04 01:24:02 by laurencio        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int		counter;

	counter = 0;
	while (counter != (int) n)
	{
		dest[counter] = src[counter];
		counter++;
	}
	dest[counter] = '\0';
	return (dest);
	
}

int	main(void)
{
	char	dest[6];
	char	src[10] = "This is me";
	char	*result;

	result = ft_strncpy(dest, src,5);

	for (int i = 0; result[i] != '\0'; i++) {
		printf("%c",result[i]);
	}
	return (0);
}