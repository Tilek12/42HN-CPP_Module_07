/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 20:41:52 by tkubanyc          #+#    #+#             */
/*   Updated: 2025/01/06 16:22:46 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

/*-------------------*/
/*  Swap two values  */
/*-------------------*/
template <typename T>
void	swap( T& a, T& b ) {
	T temp = a;
	a = b;
	b = temp;
}

/*------------------------------------*/
/*  Return the smaller of two values  */
/*------------------------------------*/
template <typename T>
const T&	min( const T& a, const T& b ) {
	return ( a < b ) ? a : b;
}

/*-----------------------------------*/
/*  Return the larger of two values  */
/*-----------------------------------*/
template <typename T>
const T&	max( const T& a, const T& b ) {
	return ( a > b ) ? a : b;
}

#endif
