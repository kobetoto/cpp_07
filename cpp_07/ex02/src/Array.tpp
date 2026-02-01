/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <thodavid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 13:14:40 by thodavid          #+#    #+#             */
/*   Updated: 2026/02/01 12:46:28 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// int *a = new int(100)
// allocates a single int and initializes it to 100.

/* CONSTRUCTOR */
template <typename T>
Array<T>::Array(void) : _size(0), _arr(new T[0]()){};

template <typename T>
Array<T>::Array(unsigned int n) : _size(n), _arr(new T[n]()){};

template <typename T>
Array<T>::Array(Array const &src) : _size(src._size), _arr(new T[src._size]())
{
    for (unsigned int i = 0; i < _size; i++)
        _arr[i] = src._arr[i];
};

/* DESTRUCTOR */
template <typename T>
Array<T>::~Array()
{
    delete[] _arr;
    return;
};

/* OPERATOR */
template <typename T>
Array<T> &Array<T>::operator=(Array<T> const &rightHandSide)
{
    if(this == &rightHandSide)
        return (*this);

    T *tmp = new T[rightHandSide._size]();
    for (unsigned int i = 0; i < rightHandSide._size; i++)
        tmp[i] = rightHandSide._arr[i];
    delete[] _arr;

    _arr = tmp;
    _size = rightHandSide._size;
    return *this;
}

template <typename T>
T &Array<T>::operator[](size_t i)
{
    if (i >= _size)
        throw outOfBoundsException();
    return _arr[i];
}

template < typename T >
T const &Array<T>::operator[](size_t i) const {
    if (i >= _size)
        throw outOfBoundsException();
    return _arr[i];
}

/* Member f() */
template <typename T>
unsigned int Array<T>::size(void) const { return this->_size; }
