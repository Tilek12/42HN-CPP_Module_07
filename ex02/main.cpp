/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 12:52:00 by tkubanyc          #+#    #+#             */
/*   Updated: 2025/01/06 16:02:19 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main() {
	try {
		// Default constructor
		Array<int> emptyArray;
		std::cout << "Empty array size: " << emptyArray.size() << "\n";

		// Constructor with size
		Array<int> intArray(5);
		std::cout << "Array of size 5 initialized with default values:\n";
		for (size_t i = 0; i < intArray.size(); ++i) {
			std::cout << intArray[i] << " ";
		}
		std::cout << "\n";

		// Modify elements
		for (size_t i = 0; i < intArray.size(); ++i) {
			intArray[i] = static_cast<int>(i * 10);
		}
		std::cout << "Modified array:\n";
		for (size_t i = 0; i < intArray.size(); ++i) {
			std::cout << intArray[i] << " ";
		}
		std::cout << "\n";

		// Copy constructor
		Array<int> copiedArray(intArray);
		std::cout << "Copied array:\n";
		for (size_t i = 0; i < copiedArray.size(); ++i) {
			std::cout << copiedArray[i] << " ";
		}
		std::cout << "\n";

		// Assignment operator
		Array<int> assignedArray;
		assignedArray = intArray;
		std::cout << "Assigned array:\n";
		for (size_t i = 0; i < assignedArray.size(); ++i) {
			std::cout << assignedArray[i] << " ";
		}
		std::cout << "\n";

		// Out-of-bounds access
		std::cout << "Accessing out-of-bounds element:\n";
		std::cout << intArray[10] << "\n"; // This should throw an exception
	}
	catch ( const std::exception& e ) {
		std::cerr << "Error: " << e.what() << "\n";
	}

	return 0;
}
