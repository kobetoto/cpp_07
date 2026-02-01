/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <thodavid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 12:58:09 by thodavid          #+#    #+#             */
/*   Updated: 2026/02/01 12:50:50 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(){
	std::string s = "Hi World!?";
	Array<char> arr( s.size() );
	//copy s to arr
	for(unsigned long i = 0; i < s.length(); i++)
		arr[i] = s[i];
	//print arr
	for(unsigned long i = 0; i < s.length(); i++)
		std::cout << arr[i];
	std::cout << '\n';

	//cpy constructor
	Array<char> cpy(arr);
	cpy[0] = 'X';
	std::cout << "arr[0]:: " << arr[0] << '\n';
	std::cout << "cpy[0]:: " << cpy[0] << '\n';

	//=operator call
	Array<char> b;
	b = arr;

	for(unsigned long i = 0; i < s.length(); i++)
		std::cout << b[i];
	std::cout << '\n';

	//opertor[];
	std::cout << "operator[] cpy[0]: :" << cpy[0] << '\n';
	
	//const operator[]
	Array<char> const constant = arr;
	std::cout << "operator[] constatnt[0] :: " << constant[0]<< '\n';

	//Out of Bonds
	try{
		std::cout << "cpy size:: " << cpy.size() << '\n';
		std::cout << "operator[] constant[42] :: " << constant[42]<< '\n';

	}
	catch(std::exception const &e){
		std::cerr << e.what() << '\n';
	}
	return (0);
}

