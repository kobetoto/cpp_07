/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <thodavid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 12:44:39 by thodavid          #+#    #+#             */
/*   Updated: 2026/02/01 09:36:49 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>
#include <cstddef> //std::size_t

template<typename T>
void	iter(T *arr, const int len, void (*f)(T &)){
	for(int i = 0; i < len; i++)
		f(arr[i]);
	return;
}

template <typename T>
void iter(T const *arr, const int len, void (*f)(T const &))
{
	for(int i = 0; i < len; i++)
		f(arr[i]);
	return;
}

template<typename T>
void f(T &x){
		x++;
}

template <typename T>
void f_const(T const &x)
{
    std::cout << " f_const:: < " << x << " >";
}

template <typename T, std::size_t N>
void printArr(T const (&arr)[N])
{
    for (std::size_t i = 0; i < N; i++)
		std::cout << arr[i] << ", ";
	std::cout << '\n';
}

#endif // ITER_HPP
