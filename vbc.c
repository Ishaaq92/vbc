/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vbc.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 14:53:50 by isahmed           #+#    #+#             */
/*   Updated: 2025/12/24 15:52:32 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vbc.h"

int	init_tokens(t_token *tokens, char *s)
{
	int	i;

	i = -1;
	tokens = calloc(sizeof(t_token), ft_strlen(s) + 1);
	while (tokens[++i] != 0)
	{
		tokens[i].val = s[i];
		if (isdigit(s[i]))
			tokens[i].type = DIGIT;
		else if (s[i] == '(')
			tokens[i].type = O_BRACKET;
		else if (s[i] == ')')
			tokens[i].type = C_BRACKET;
		else
			tokens[i].type = OPERATION;
	}
}

int	main(int ac, char **av)
{
	t_token tokens;

	if (ac != 2 || validate(av[1]))
		return (1);
	init_tokens(&tokens, av[1]);

	return (0);
}
