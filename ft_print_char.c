/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ingjimen <ingjimen@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 09:30:56 by ingjimen          #+#    #+#             */
/*   Updated: 2024/10/31 10:26:49 by ingjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_print_char(char c)
{
	return (write (1, &c, 1));
}