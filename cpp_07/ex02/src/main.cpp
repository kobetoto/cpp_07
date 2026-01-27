/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <thodavid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 12:58:09 by thodavid          #+#    #+#             */
/*   Updated: 2026/01/27 16:24:38 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(){
	Array<char> a( 10 );
	std::string s = "Hi World!?";
	for(unsigned long i = 0; i < s.length(); i++)
		a[i] = s[i];
	for(unsigned long i = 0; i < s.length(); i++)
		std::cout << a[i];

	Array<char> b;

	b = a;

	for(unsigned long i = 0; i < s.length(); i++)
		std::cout << b[i];

	std::cout << '\n';
	return (0);
}
