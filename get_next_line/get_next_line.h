/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramos <pramos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 12:45:26 by pramos            #+#    #+#             */
/*   Updated: 2023/02/23 14:15:55 by pramos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42

# endif

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include  <fcntl.h>

char	*get_next_line(int fd);
size_t	ft_strlen_Gnl( char *s);
char	*ft_strdup_Gnl(char *s1);
char	*ft_strchr_Gnl(char *str, int c);
char	*ft_strjoin_Gnl(char *s1, char *s2);
char	*ft_substr_Gnl(char *s, unsigned int start, size_t len);

#endif