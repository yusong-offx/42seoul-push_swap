/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusong <42.4.yusong@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 00:59:37 by yusong            #+#    #+#             */
/*   Updated: 2021/08/13 00:59:37 by yusong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

static void	sort_sub_4_sub_4_sub(t_deque **a, t_deque **b, int *val, int max)
{
	sasb(a, 'a');
	pb(a, b);
	sasb(a, 'a');
	if (val[0] > val[2])
	{
		rrarrb(a, 'a');
		pa(a, b);
	}
	else
	{
		pa(a, b);
		rrarrb(a, 'a');
	}
}

void	sort_sub_4_sub_4(t_deque **a, t_deque **b, int *val, int max)
{
	if (val[0] > val[1] && val[0] > val[2])
	{
		rarb(a, 'a');
		if (val[2] > val[1])
			sasb(a, 'a');
	}
	else if (val[1] > val[0] && val[1] > val[2])
		sort_sub_4_sub_4_sub(a, b, val, max);
	else
	{
		sasb(a, 'a');
		rarb(a, 'a');
		rarb(a, 'a');
		if (val[1] > val[0])
			sasb(a, 'a');
	}
}

void	sort_sub_4(t_deque **a, t_deque **b)
{
	t_deque	*tmp_a;
	int		val[4];
	int		max;

	tmp_a = *a;
	max = 0;
	while (max < 4)
	{
		val[max] = tmp_a->val;
		tmp_a = tmp_a->next;
		max++;
	}
	max = fdeque_max(a);
	sort_sub_4_sub_0(a, b, val, max);
}

static void	sub(t_deque **a, t_deque **b, int *level,)
{

	
}

void	sort_sub_5(t_deque **a, t_deque **b, int *sorted, int len)
{
	static stocklen[len];
	int	middle;
	int	len2;

	len2 = fdeque_len(*a);
	if (len2 > 2)
	{
		middle = len / 2;
		printf("check %d %d %d \n", len2, middle, sorted[middle]);
		while (len2)
		{
			//printf("%d %d\n", (*a)->prev->val, sorted[middle]);
			if ((*a)->prev->val <= sorted[middle])
				pb(a, b);
			else
				rarb(a, 'a');
			len2--;
		}
	}
	else
		return ;
	sort_sub_5(a, b, sorted, len / 2);
}
