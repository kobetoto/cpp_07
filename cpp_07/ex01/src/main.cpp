/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <thodavid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 09:57:19 by thodavid          #+#    #+#             */
/*   Updated: 2026/02/01 09:39:05 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(){

	int			arr_i[3] = {1, 2, 3};
	float		arr_f[3] = {1.42f, 2.21f, 3.33f};
	char		arr_c[3] = {'a', 'b', 'c'};
	const int	arr_ic[3] = {42, '!', 42};

	const std::string	arr_s[3] = {"Hi","Kobe","!!"};

	/* INT */
	printArr(arr_i);
	iter<int>(arr_i, 3, f);
	printArr(arr_i);

	/* FLOAT */
	printArr(arr_f);
	iter<float>(arr_f, 3, f);
	printArr(arr_f);

	/* CHAR */
	printArr(arr_c);
	iter<char>(arr_c, 3, f);
	printArr(arr_c);

	/* CONST (INT + STRING) */
	iter<int>(arr_ic, 3, f_const);
	std::cout << '\n';
	iter<std::string>(arr_s, 3, f_const);
	std::cout << '\n';

	return (0);
}
