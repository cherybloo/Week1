/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurencio <laurencio@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 02:23:09 by laurencio         #+#    #+#             */
/*   Updated: 2024/02/04 12:05:21 by laurencio        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	counter;

	counter = 0;
	while (counter != size)
	{
		if (counter + 1 < size)
		{
			dest[counter] = src[counter];
		}
		else {
			dest[counter] = '\0';
		}
		counter++;
	}
	printf("Last char: %c, Last counter: %i\n",dest[counter],counter);
	return (counter);
}

int main(void)
{
	char src[] = "Hello there, Venus";
	char buffer[19];
	
	ft_strlcpy(buffer, src, 2);
	printf("%s\n",buffer);
	return (0);
}