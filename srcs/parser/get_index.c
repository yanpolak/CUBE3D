/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_index.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarival <ymarival@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 20:48:07 by ymarival          #+#    #+#             */
/*   Updated: 2023/08/29 20:48:10 by ymarival         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/cub.h"

int	get_index(const char *str, char delimiter)
{
	int	i;

	i = 0;
	while (str[i] != END_OF_LINE && str[i] != delimiter)
		++i;
	return (i);
}
