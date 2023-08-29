/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_data.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarival <ymarival@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 20:47:50 by ymarival          #+#    #+#             */
/*   Updated: 2023/08/29 20:47:53 by ymarival         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/cub.h"

t_data	*create_data(void)
{
	t_data	*data;

	data = (t_data *) malloc(sizeof (t_data));
	if (data == NULL)
		put_error(INVALID_MEMORY, ERR_MEMORY);
	data->path_north = NULL;
	data->path_south = NULL;
	data->path_west = NULL;
	data->path_east = NULL;
	data->floor = NULL;
	data->ceilling = NULL;
	return (data);
}
