/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vbc.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 14:53:50 by isahmed           #+#    #+#             */
/*   Updated: 2025/12/24 15:18:22 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vbc.h"

int validate(char *str)
{
	int	i;
	
	i = -1;
	while (str[++i])
		if (!isdigit(str[i]) &&  str[i] != '(' && str[i] != ')' && str[i] != '+' && str[i] != '*')
			return (1)
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

int	init_tokens(t_token *tokens, char *s)
{
	int	i;

	tokens = calloc(sizeof(t_token), ft_strlen(av[1]) + 1);
	i = -1;
	while (tokens[++i])
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
	init_tokens(&tokens);

	return (0);
}
