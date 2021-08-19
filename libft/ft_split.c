/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnessrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 11:28:28 by tnessrou          #+#    #+#             */
/*   Updated: 2021/04/29 11:28:31 by tnessrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <stdio.h>

static char	*duplicate(char const *start, char const *end)
{
	size_t	size;
	size_t	i;
	char	*iter;
	char	*res;

	size = 0;
	iter = (char *)start;
	while (iter != end)
	{
		size++;
		iter++;
	}
	res = (char *)malloc(size + 1);
	if (!res)
		return (NULL);
	i = 0;
	while (i < size)
	{
		res[i] = *start;
		i++;
		start++;
	}
	res[i] = '\0';
	return (res);
}

static char	*create_str(char const *s, char c, size_t iter)
{
	char const	*ptr;

	ptr = s;
	while (*s)
	{
		while (*s == c)
			s++;
		if (!iter)
		{
			ptr = s;
			while (*s != c && *s != '\0')
				s++;
			return (duplicate(ptr, s));
		}
		iter--;
		while (*s != c && *s != '\0')
			s++;
	}
	return (duplicate(ptr, s));
}

static size_t	word_count(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s != '\0')
			count++;
		while (*s != c && *s != '\0')
			s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	size_t	str_num;
	char	**array;
	size_t	iter;

	if (!s)
	{
		array = (char **)malloc(sizeof(char *));
		array[0] = NULL;
		return (array);
	}
	str_num = word_count(s, c);
	array = (char **)malloc(sizeof(char *) * (str_num + 1));
	if (!array)
		return (NULL);
	iter = 0;
	while (iter < str_num)
	{
		array[iter] = create_str(s, c, iter);
		iter++;
	}
	array[iter] = NULL;
	return (array);
}

// int	main()
// {
	// char *str = "lorem ipsum dolor sit";
	// char **arr = ft_split(str, 'z');
	// printf("%s\n", arr[0]);
	// printf("%s\n%s\n%s\n%s\n%s\n%s\n", arr[0], arr[1],
	// arr[2], arr[3], arr[4], arr[5]);
	// free(arr[0]);
	// free(arr[1]);
	// free(arr[2]);
	// free(arr[3]);
	// free(arr[4]);
	// free(arr);
	// return (1);
// }
