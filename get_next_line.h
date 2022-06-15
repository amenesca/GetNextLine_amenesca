/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenesca <amenesca@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 14:35:50 by amenesca          #+#    #+#             */
/*   Updated: 2022/06/07 15:37:11 by amenesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1000
# endif

char        *get_next_line(int fd);
size_t      ft_strlen(const char *s);
char        *ft_strjoin(char *s1, char *s2);
size_t      size_of_line(char *join);
static char *strdupline(char *s1);
static char *read_to_buff(int fd, char *join);
static char *set_join(char *join);
int         seek_newline(char *join);

#endif