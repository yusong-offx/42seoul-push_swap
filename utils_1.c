/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   untils.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusong <42.4.yusong@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 22:18:19 by yusong            #+#    #+#             */
/*   Updated: 2021/07/19 22:18:19 by yusong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	constinit(t_deque **a, t_deque **b, t_dequeinfo *ainfo, t_dequeinfo *binfo)
{
	*a = NULL;
	*b = NULL;
	ainfo->len = 0;
	ainfo->head = NULL;
	binfo->len = 0;
	binfo->head = NULL;
}

void		f_exit(int i)
{
	write(1, "Error\n", 6);
	exit(i);
}