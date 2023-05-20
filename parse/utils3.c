/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joon-lee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 09:40:03 by joon-lee          #+#    #+#             */
/*   Updated: 2023/05/15 09:40:04 by joon-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	for_chunk(char bite)
{
	if (bite == '\0' || bite == '$' || bite == '>' || bite == '<'
		|| bite == '\'' || bite == '\"' || bite == '|'
		|| is_whitespace(bite) == YES)
		return (0);
	return (1);
}