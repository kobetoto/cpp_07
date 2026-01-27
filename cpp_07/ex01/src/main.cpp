/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <thodavid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 09:57:19 by thodavid          #+#    #+#             */
/*   Updated: 2026/01/27 12:25:47 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(){

	const int	len = 3;
	int			arr_i[len] = {1, 2, 3};
	float		arr_f[len] = {1.42, 2.21, 3.33};
	char		arr_c[len] = {'a', 'b', 'c'};
	const int	arr_ic[len] = {42, '!', 42};
	
	iter<int>(arr_i, len, f);
	iter<float>(arr_f, len, f);
	iter<char>(arr_c, len, f);
	
	printArr(arr_i);
	printArr(arr_f);
	printArr(arr_c);

	iter<int>(arr_ic, 3, f_const);
	std::cout << '\n';
	return (0);
}
