/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vbc.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 14:53:15 by isahmed           #+#    #+#             */
/*   Updated: 2025/12/24 15:16:04 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef "VBC_H"

# define "VBC_H"

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

enum e_type
{
	DIGIT,
	O_BRACKET,
	C_BRACKET,
	OPERATION	
};

typedef struct s_token
{
	char		val;
	enum e_type	type;

}	t_token;

#endif 
