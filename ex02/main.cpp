/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knomura <knomura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 16:17:14 by knomura           #+#    #+#             */
/*   Updated: 2026/07/26 20:55:36 by knomura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main(void)
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << b.toInt() << std::endl;
	std::cout << b.toFloat() << std::endl;
	std::cout << "MAX == " << Fixed::max(a, b) << std::endl;

	a = 1200;
	std::cout << a / b << std::endl;

	if (a >= b)
		a = a + b;
	else
		a = a - b;
	std::cout << a << std::endl;

	std::cout << std::endl
			  << "=== comparison operators ===" << std::endl;
	Fixed const c(10.5f);
	Fixed const d(10.5f);
	Fixed const e(42.42f);

	std::cout << std::boolalpha;
	std::cout << "c = " << c << " / d = " << d << " / e = " << e << std::endl;
	std::cout << "c >  d : " << (c > d) << std::endl;
	std::cout << "c <  d : " << (c < d) << std::endl;
	std::cout << "c >= d : " << (c >= d) << std::endl;
	std::cout << "c <= d : " << (c <= d) << std::endl;
	std::cout << "c == d : " << (c == d) << std::endl;
	std::cout << "c != d : " << (c != d) << std::endl;
	std::cout << "c >  e : " << (c > e) << std::endl;
	std::cout << "c <  e : " << (c < e) << std::endl;
	std::cout << "c != e : " << (c != e) << std::endl;
	std::cout << std::noboolalpha;

	std::cout << std::endl
			  << "=== decrement operators ===" << std::endl;
	Fixed f(3);
	std::cout << f << std::endl;
	std::cout << --f << std::endl;
	std::cout << f << std::endl;
	std::cout << f-- << std::endl;
	std::cout << f << std::endl;

	std::cout << std::endl
			  << "=== min ( non-const ) ===" << std::endl;
	std::cout << "a = " << a << " / f = " << f << std::endl;
	std::cout << "MIN == " << Fixed::min(a, f) << std::endl;

	Fixed::min(a, f) = 42;
	std::cout << "after min( a, f ) = 42 : a = " << a << " / f = " << f << std::endl;

	return 0;
}