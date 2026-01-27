/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <thodavid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 09:57:19 by thodavid          #+#    #+#             */
/*   Updated: 2026/01/27 11:56:58 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.h"

int main( void ) {
	int a = 2;
	int b = 3;
	std::cout << "a = " << a << ", b = " << b << std::endl;
	::swap( a, b ); //'::' dont search evrywere just at the base (of the prjct)
	std::cout << "after swap : a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;
}


/*
   Should output:
   a = 3, b = 2
   min(a, b) = 2
   max(a, b) = 3
   c = chaine2, d = chaine1
   min(c, d) = chaine1
   max(c, d) = chaine2



//template function defintion
//annonce au compilo le template (keyWord:: 'typename')
template< typename T >

T const & max(T const &x, T const &y){
return (x >= y ? x : y);
}


int	main(void){

int a = 21;
int b = 42;

std::cout << max<int>(a, b) << '\n';	//Explicite instanciation++
std::cout << max(a, b) << '\n';		//Implicite instanciation--

return (0);
}


template <typename T, typename U>
class List{
List<T, U>(){}
};
*/
