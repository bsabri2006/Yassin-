/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsabri <bsabri@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 11:25:01 by bsabri            #+#    #+#             */
/*   Updated: 2024/07/07 11:34:09 by bsabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	factoreille;
	int	i;

	if (nb < 0)
		return (0);
	factoreille = 1;
	i = 1;
	while (i <= nb)
	{
		factoreille *= i;
		i++;
	}
	return (factoreille);
}
