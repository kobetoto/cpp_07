/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <thodavid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 12:47:15 by thodavid          #+#    #+#             */
/*   Updated: 2026/01/27 11:55:39 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T>
void swap(T &a, T &b){
    T tmp = a;
    a = b;
    b = tmp;
}

template <typename T>
T const &max(T const &x, T const &y){
    if (x == y)
        return (y);
    return (x > y ? x : y);
}

template <typename T>
T const &min(T const &x, T const &y){
    if (x == y)
        return (y);
    return (x < y ? x : y);
}

#endif // WHATEVER_HPP
