/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knomura <knomura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 16:17:40 by knomura           #+#    #+#             */
/*   Updated: 2026/07/22 13:39:17 by knomura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

Fixed::Fixed() : _fixedPointNum(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const int num) : _fixedPointNum(num)
{
	std::cout << "Int constructor called\n";
}

Fixed::Fixed(const float value):_fixedPointNum(value)
{
	std::cout << "Float constructor called\n";
}

Fixed::Fixed(const Fixed &obj) : _fixedPointNum(obj._fixedPointNum)
{
	std::cout << "Copy constructor called\n";
}

Fixed &Fixed::operator=(const Fixed &obj)
{
	std::cout << "Copy assignment operator called\n";
	_fixedPointNum = obj._fixedPointNum;
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called\n";
	return (_fixedPointNum);
}

void Fixed::setRawBits(int const raw)
{
	_fixedPointNum = raw;
}

float Fixed::toFloat() const
{
	
}

int Fixed::toInt() const
{
	
}

std::ostream &operator<<(std::ostream &out, const Fixed &obj)
{
	out << obj.getRawBits() << std::endl;
}