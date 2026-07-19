/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knomura <knomura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 16:17:40 by knomura           #+#    #+#             */
/*   Updated: 2026/07/19 19:04:47 by knomura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

Fixed::Fixed() : _fixedPointNum(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed &obj): _fixedPointNum(obj._fixedPointNum)
{
	std::cout << "Copy constructor called\n";
}

Fixed &Fixed::operator=(const Fixed &obj)
{
	std::cout << "Copy assignment operator\n";
	if (this != &obj)
		_fixedPointNum = obj._fixedPointNum; // なぜ条件式必要なのか
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

int Fixed::getRawBits()
{
	std::cout << "getRawBits member function called\n";

	return (_fixedPointNum);
}

void Fixed::setRawBits(int const raw)
{
	_fixedPointNum = raw;
}