/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <thodavid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 13:14:40 by thodavid          #+#    #+#             */
/*   Updated: 2026/01/27 16:43:43 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

//int *a = new int(100) 
//allocates a single int and initializes it to 100. 
//Think of the int(100) as a constructor call.

/* CONSTRUCTOR */
template < typename T >
Array<T>::Array(void) : _size(0), _arr(new T[0]) {};

template < typename T >
Array<T>::Array( unsigned int size ) : _size(size), _arr(new T[size]) {};

template < typename T >
Array<T>::Array(Array const &src) : _size(src._size), _arr(src._arr) {};

/* DESTRUCTOR */
template < typename T >
Array<T>::~Array(){
    delete[] _arr; 
    return;
};

/* OPERATOR */
template < typename T >
Array<T> &Array<T>::operator=(Array<T> const &rightHandSide){
    if (this != &rightHandSide)
    {
        this->~Array();
        new (this) Array(rightHandSide);
    }
    return *this;
            //     if (this != &rightHandSide) {
            //     delete[] _arr;
            //     _size = rightHandSide._size;
            //     _arr = new T[_size];
            //     for (size_t i = 0; i < _size; i++)
            //         _arr[i] = rightHandSide._arr[i];
            // }
            // return *this;
}

template < typename T >
T &Array<T>::operator[](size_t i){
    if (i >= _size)
        throw outOfBoundsException();
    return _arr[i];
}

// template < typename T >
// Array<T> const &Array<T>::operator[](size_t i){
//     if (i >= _size)
//         throw outOfBoundsException();
//     return _arr[i];
// }

/* Member f() */
template < typename T >
int Array<T>::size( void ) const { return this->_size;}

/*
Construction par copie et affectation. Dans les deux cas, 
la modification du tableau original ou de sa copie après copie 
ne doit pas affecter l'autre tableau.
*/
