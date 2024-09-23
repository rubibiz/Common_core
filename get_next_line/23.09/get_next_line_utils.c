/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tonio <tonio@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 19:30:57 by amoty             #+#    #+#             */
/*   Updated: 2024/09/23 22:57:59 by tonio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen2(const char *str, size_t size)
{
	size_t	i;

	i = 0;
	while(str[i] != '\0' && i < size)
		i++;
	return(i);
}

char	*ft_strdup(char *s1, size_t nbytes, size_t line)
{
	char	*new;
	size_t	i;
	size_t	j;

	new = malloc(sizeof(char) * (nbytes + 1));
	if (!new)
		return (NULL);
	i = 0;
	j = 0;
	if (line > 0)
	{
		i = line;
		i++;
		while (s1[i] != '\0' && i < nbytes && s1[i] != '\n')
		{
			new[j] = s1[i];
			i++;
			j++;
		}
		new[j] = '\0';
		return (new);
	}
	while (s1[i] != '\0' && i < nbytes && s1[i] != '\n')
	{
		new[j] = s1[i];
		i++;
		j++;
	}
	new[j] = '\0';
	return (new);
}
size_t	ft_strlen(char *str)
{
	size_t	i;
	
	i = 0;
	while(str[i])
		i++;
	return(i);
}
