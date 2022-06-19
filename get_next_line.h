/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgoncalv <lgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 11:12:37 by lgoncalv          #+#    #+#             */
/*   Updated: 2021/06/28 09:48:26 by lgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdlib.h> // for malloc
# include <unistd.h> // for read & ssize_t
# include <sys/resource.h> // for RLIMIT_NOFILE

int		get_next_line(int fd, char **line);

/*
*	Utils
*/

char	*ft_calloc(size_t strlen, size_t type_size);
int		ft_find_char(char *str, int c);
size_t	ft_strlen(char *str);

#endif