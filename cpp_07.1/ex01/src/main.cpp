/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kobe <kobe@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 09:57:19 by thodavid          #+#    #+#             */
/*   Updated: 2026/01/23 17:08:21 by kobe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>
#include <stdio.h>

template<typename T>
void	iter(T *arr, int len, void (*f)(T &)){
	for(int i = 0; i < len; i++)
		f(arr[i]);
	return;
}


template <typename T>
void iter(T const *arr, int len, void (*f)(T const &))
{
    int i = 0;
	for(int i = 0; i < len; i++)
		f(arr[i]);
	return;
}

template<typename T>
void f(T &x){
		x++;
}

template <typename T, std::size_t N>
void printArr(T const (&arr)[N])
{
    std::size_t i = 0;
    while (i < N)
    {
        std::cout << arr[i] << ", ";
        ++i;
    }
	std::cout << '\n';
}
int main(){
	
	int		arr_i[3] = {1, 2, 3};
	float	arr_f[3] = {1.42, 2.21, 3.33};
	char	arr_c[3] = {'a', 'b', 'c'};

	iter<int>(arr_i, 3, f);
	iter<float>(arr_f, 3, f);
	iter<char>(arr_c, 3, f);

	printArr(arr_i);
	printArr(arr_f);
	printArr(arr_c);
	return (0);
}
