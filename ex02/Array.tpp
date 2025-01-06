/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 13:37:28 by tkubanyc          #+#    #+#             */
/*   Updated: 2025/01/06 16:16:56 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

/*----------------------------------------*/
/*  Array Class constructor without size  */
/*----------------------------------------*/
template <typename T>
Array<T>::Array( void ) : _data( nullptr ), _size( 0 ) {}

/*-------------------------------------*/
/*  Array Class constructor with size  */
/*-------------------------------------*/
template <typename T>
Array<T>::Array( size_t n ) : _data( new T[n]() ), _size( n ) {}

/*--------------------------------*/
/*  Array Class copy constructor  */
/*--------------------------------*/
template <typename T>
Array<T>::Array( const Array& other ) : _data( nullptr ), _size( 0 ) {
	*this = other;
}

/*----------------------------------------*/
/*  Array Class copy assignment operator  */
/*----------------------------------------*/
template <typename T>
Array<T>& Array<T>::operator=( const Array& other ) {

	if (this != &other) {
		delete[] _data;
		_size = other._size;
		_data = new T[_size];
		for (size_t i = 0; i < _size; ++i) {
			_data[i] = other._data[i];
		}
	 }

	return *this;
}

/*--------------------------*/
/*  Array Class destructor  */
/*--------------------------*/
template <typename T>
Array<T>::~Array( void ) { delete[] _data; }

/*----------------------*/
/*  Subscript operator  */
/*----------------------*/
template <typename T>
T& Array<T>::operator[]( size_t index ) {

	if (index >= _size) {
		throw std::out_of_range("Index out of bounds");
	}

	return _data[index];
}

/*---------------------------------------*/
/*  Const version of subscript operator  */
/*---------------------------------------*/
template <typename T>
const T& Array<T>::operator[]( size_t index ) const {

	if (index >= _size) {
		throw std::out_of_range("Index out of bounds");
	}

	return _data[index];
}

/*-----------------*/
/*  Size function  */
/*-----------------*/
template <typename T>
size_t Array<T>::size() const { return _size; }
