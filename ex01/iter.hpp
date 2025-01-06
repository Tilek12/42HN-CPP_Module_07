/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 22:56:16 by tkubanyc          #+#    #+#             */
/*   Updated: 2025/01/06 16:21:06 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <cstddef>
#include <iostream>

/*-----------------*/
/*  iter function  */
/*-----------------*/
template <typename T, typename F>
void	iter( T* array, size_t length, F func ) {
	for ( size_t i = 0; i < length; i++ ) {
		func( array[i] );
	}
}

#endif
