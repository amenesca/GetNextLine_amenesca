/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenesca <amenesca@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 15:36:14 by amenesca          #+#    #+#             */
/*   Updated: 2022/06/07 15:40:04 by amenesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

int seek_newline(char *join)
{
	int	i;

	i = 0;
	if (!join)
		return (0);
	while (join[i])
	{
		if (join[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strjoin(char *s1, char *s2)
{
	size_t	i;
	size_t	j;
	size_t	x;
	char	*join;

	j = 0;
	i = 0;
	x = ft_strlen(s1) + ft_strlen(s2) + 1;
	join = (char *) malloc(x * sizeof(char));
	if (!join)
		return (NULL);
	while (i < ft_strlen(s1))
	{
		join[i] = s1[i];
		i++;
	}
	while (j < ft_strlen(s2))
	{
		join[i] = s2[j];
		i++;
		j++;
	}
	join[i] = '\0';
	free(s1);
	return (join);
}

size_t	size_of_line(char *join)
{
	size_t	i;

	i = 0;
	while (join[i] != '\n' && join[i])
		i++;
	return (i);
}