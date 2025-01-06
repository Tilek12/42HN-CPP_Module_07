/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 11:53:55 by tkubanyc          #+#    #+#             */
/*   Updated: 2025/01/06 16:08:26 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>
#include <cstddef>
#include <iostream>

/*----------------------*/
/*  Define Array class  */
/*----------------------*/
template <typename T>
class	Array {
private:

	T*		_data;
	size_t	_size;

public:

	Array( void );
	Array( size_t n );
	Array( const Array& other );
	Array&	operator=( const Array& other );
	~Array( void );

	T&			operator[]( size_t index );
	const T&	operator[]( size_t index ) const;

	size_t		size( void ) const;

};

#include "Array.tpp"

#endif
