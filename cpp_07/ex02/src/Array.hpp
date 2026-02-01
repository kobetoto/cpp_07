/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <thodavid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 12:58:01 by thodavid          #+#    #+#             */
/*   Updated: 2026/02/01 10:24:38 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>
#include <exception>
#include <cstddef>

template<typename T>
class Array{

    public:
        Array( void );
        Array( unsigned int size );
        Array( Array const &src );
        Array &operator=(Array const &rightHandSide);
        T &operator[](size_t i);
        T const &operator[](size_t i) const;
        ~Array();

        unsigned int size( void ) const;

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
