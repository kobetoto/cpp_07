/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <thodavid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 12:58:01 by thodavid          #+#    #+#             */
/*   Updated: 2026/01/27 15:51:59 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template<typename T>
class Array{

    public:
        Array( void );
        Array( unsigned int size );
        Array( Array const &src );
        Array &operator=(Array const &rightHandSide);
        T &operator[](size_t i);
        // Array const &operator[](size_t i);
        ~Array();

        int size( void ) const;

        class outOfBoundsException : public std::exception
        {
            public:
                const char *what() const throw() {return "Out of bounds";}
        };

    private:
        unsigned int _size;
        T *_arr;
};

#include "Array.tpp"

#endif //ARRAY_HPP
