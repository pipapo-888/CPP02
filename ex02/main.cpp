/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knomura <knomura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 16:17:14 by knomura           #+#    #+#             */
/*   Updated: 2026/07/26 13:32:37 by knomura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main( void ) {
Fixed a;
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;
std::cout << b << std::endl;
std::cout << b.toInt() << std::endl;
std::cout << b.toFloat() << std::endl;
std::cout << "MAX == " << Fixed::max( a, b ) << std::endl;

a = 1200;
std::cout << a / b << std::endl;
std::cout << a / Fixed(0) << std::endl;

return 0;
}