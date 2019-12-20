/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismelich <ismelich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 10:41:14 by ismelich          #+#    #+#             */
/*   Updated: 2019/12/09 09:51:23 by ismelich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int argc, char **argv)
{
	char ***matrix;

	if (argc != 2)
		ft_putendl("usage: ./fillit source_file");
	else
	{
		matrix = set_up(argv[1]);
		if (!matrix)
			return (1);
		solve(matrix);
	}
	return (1);
}
