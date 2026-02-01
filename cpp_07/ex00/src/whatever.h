/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <thodavid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 12:47:15 by thodavid          #+#    #+#             */
/*   Updated: 2026/02/01 09:16:41 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_H
#define WHATEVER_H

#include <iostream>
#include <string>

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

#endif // WHATEVER_H
