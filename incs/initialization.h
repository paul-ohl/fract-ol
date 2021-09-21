/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialization.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pohl <pohl@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 13:43:39 by pohl              #+#    #+#             */
/*   Updated: 2021/09/16 14:02:50 by pohl             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INITIALIZATION_H
# define INITIALIZATION_H

# include <stdbool.h>

/*
** hooks.c
*/

void	create_hooks(t_config *config);

/*
** checkers.c
*/

bool	are_args_valid(int argc, char **argv);

/*
** checkers.c
*/

bool	initialize_config(t_config *config, char **argv);

#endif