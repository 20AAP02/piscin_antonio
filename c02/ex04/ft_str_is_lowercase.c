/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaria-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 16:15:37 by amaria-m          #+#    #+#             */
/*   Updated: 2021/07/10 16:15:40 by amaria-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_lowercase(char *str)
{
	int s;

	s = 0;
	while (str[s] != '\0')
	{
		if (str[s] < 97 || str[s] > 122)
		{
			return (0);
		}
		s++;
	}
	return (1);
}