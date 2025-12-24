/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 15:47:18 by isahmed           #+#    #+#             */
/*   Updated: 2025/12/24 15:49:35 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vbc.h"

void	ft_exit_cleanup(char *tokens)
{
	int	i;

	i = -1;
	// while (tokens[i])
	free(tokens);
	exit(1);
}

int validate(char *str)
{
	int	i;
	
	i = -1;
	while (str[++i])
		if (!isdigit(str[i]) &&  str[i] != '(' && str[i] != ')' && str[i] != '+' && str[i] != '*')
			return (1);
	return (0);
}

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

