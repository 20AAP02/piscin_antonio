/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaria-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 16:17:14 by amaria-m          #+#    #+#             */
/*   Updated: 2021/07/10 16:17:18 by amaria-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strlowcase(char *str)
{
	int s;

	s = 0;
	while (str[s] != '\0')
	{
		if (str[s] > 64 && str[s] < 91)
		{
			str[s] = str[s] + 32;
		}
		s++;
	}
	return (str);
}