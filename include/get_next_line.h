/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastasiya <anastasiya@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 13:02:34 by anklochk          #+#    #+#             */
/*   Updated: 2025/04/09 12:32:43 by anastasiya       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

char			*get_next_line(int fd);
char			*extract_and_shift(char **result, char *buf);
char			*fnct_extract_line(char *old_text_remainder);
char			*handle_remain(char **result, char *buf);
char			*after_newline(char *result_with_nextline);
char			*ft_strjoin(const char *s1, const char *s2);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
char			*ft_strchr(const char *s, int c);
char			*ft_strdup(char *src);
size_t			ft_strlen(const char *s);

#endif