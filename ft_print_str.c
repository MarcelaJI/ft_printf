/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ingjimen <ingjimen@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 09:33:03 by ingjimen          #+#    #+#             */
/*   Updated: 2024/10/31 10:51:22 by ingjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_print_str(char *str)
{
	int	length;

	length = 0;
	if (!str)
		return (ft_print_str("(null)"));
	while (str[length])
	{
		write (1, &str[length++], 1);
	}
	return (length);
}
