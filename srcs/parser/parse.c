/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarival <ymarival@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 20:49:31 by ymarival          #+#    #+#             */
/*   Updated: 2023/08/29 20:49:35 by ymarival         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/cub.h"

t_data	*parse(int argc, char **argv)
{
	char	*str;
	t_data	*data;

	if (argc != 2)
		put_error(INVALID_ARG_COUNT, ERR_ARG);
	str = read_file(argv[1]);
	data = convert_line_to_data(str);
	free(str);
	return (data);
}
