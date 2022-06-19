/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgoncalv <lgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 11:32:22 by lgoncalv          #+#    #+#             */
/*   Updated: 2021/06/25 10:38:11 by lgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_calloc(size_t strlen, size_t type_size)
{
	char	*new_str;
	size_t	counter;

	new_str = malloc(strlen * type_size);
	if (!new_str)
		return (NULL);
	counter = 0;
	while (counter < strlen)
	{
		new_str[counter] = '\0';
		counter++;
	}
	return (new_str);
}

int	ft_find_char(char *str, int c)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

size_t	ft_strlen(char *str)
{
	size_t	size;

	if (!str)
		return (0);
	size = 0;
	while (str[size] != '\0')
	{
		size++;
	}
	return (size);
}
