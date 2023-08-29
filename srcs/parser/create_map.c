/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarival <ymarival@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 20:47:57 by ymarival          #+#    #+#             */
/*   Updated: 2023/08/29 20:48:02 by ymarival         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../../includes/cub.h"

t_map	*create_map(void)
{
	t_map	*map;

	map = (t_map *) malloc(sizeof (t_map));
	if (map == NULL)
		put_error(INVALID_MEMORY, ERR_MEMORY);
	map->width = -1;
	map->height = -1;
	map->player_x = -1;
	map->player_y = -1;
	map->player_side = END_OF_LINE;
	map->map = NULL;
	return (map);
}
