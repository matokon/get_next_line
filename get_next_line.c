/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 21:33:47 by marvin            #+#    #+#             */
/*   Updated: 2025/02/27 21:33:47 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *read_line(int fd, char *result)
{
	char *temp;
	temp = malloc(BUFFER_SIZE + 1);
	int bytes_read;
	bytes_read = 1;
	while(bytes_read > 0)
	{
		bytes_read = read(fd,temp,BUFFER_SIZE);

		if(bytes_read < 0)
		{
			free(temp);
			free(result);
			return (NULL);
		}
		
	}
	
}

char	*get_next_line(int fd)
{
	static char	*result;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	
		result = read_line(fd, result);
		if(!result)
			return(NULL);
		
		
}
