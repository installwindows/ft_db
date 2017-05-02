/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strichr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varnaud <varnaud@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/27 23:23:21 by varnaud           #+#    #+#             */
/*   Updated: 2016/12/08 16:31:31 by varnaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strichr(const char *s, int c)
{
	int		i;

	i = 0;
	if (c == '\0')
	{
		while (s[i])
			i++;
		return (i);
	}
	while (s[i])
	{
		if (s[i] == c)
			return (i);
		i++;
	}
	return (-1);
}
