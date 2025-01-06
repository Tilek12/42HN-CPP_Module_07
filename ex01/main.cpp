/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 23:04:26 by tkubanyc          #+#    #+#             */
/*   Updated: 2025/01/06 16:20:23 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

/*--------------------------------*/
/*  Function to print an element  */
/*--------------------------------*/
template <typename T>
void printElement( const T& element ) {
	std::cout << element << " ";
}

/*-----------------------------------------*/
/*  Function to double an integer element  */
/*-----------------------------------------*/
void doubleElement( int& element ) {
	element *= 2;
}

/*-----------------*/
/*  Main function  */
/*-----------------*/
int main( void ) {

	// Test with an array of integers
	int intArray[] = { 1, 2, 3, 4, 5 };
	size_t intArraySize = sizeof( intArray ) / sizeof( intArray[0] );

	std::cout << "Original int array: ";
	iter( intArray, intArraySize, printElement<int> );
	std::cout << std::endl;

	iter( intArray, intArraySize, doubleElement );

	std::cout << "Doubled int array: ";
	iter( intArray, intArraySize, printElement<int> );
	std::cout << std::endl;

	// Test with an array of strings
	std::string strArray[] = { "Hello!", "Templates", "Are", "Awesome" };
	size_t strArraySize = sizeof( strArray ) / sizeof( strArray[0] );

	std::cout << "String array: ";
	iter( strArray, strArraySize, printElement<std::string> );
	std::cout << std::endl;

	return 0;
}
