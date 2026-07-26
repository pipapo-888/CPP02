/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knomura <knomura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 16:17:40 by knomura           #+#    #+#             */
/*   Updated: 2026/07/26 19:23:37 by knomura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include "Fixed.hpp"

Fixed::Fixed() : _fixedPointNum(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const int num) : _fixedPointNum(num * (1 << _fBits))
{
	std::cout << "Int constructor called\n";
}

Fixed::Fixed(const float value) : _fixedPointNum(roundf(value * (1 << _fBits)))
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

bool Fixed::operator>(const Fixed &obj) const
{
	return (_fixedPointNum > obj._fixedPointNum);
}

bool Fixed::operator<(const Fixed &obj) const
{
	return (_fixedPointNum < obj._fixedPointNum);
}

bool Fixed::operator>=(const Fixed &obj) const
{
	return (_fixedPointNum >= obj._fixedPointNum);
}

bool Fixed::operator<=(const Fixed &obj) const
{
	return (_fixedPointNum <= obj._fixedPointNum);
}

bool Fixed::operator==(const Fixed &obj) const
{
	return (_fixedPointNum == obj._fixedPointNum);
}

bool Fixed::operator!=(const Fixed &obj) const
{
	return (_fixedPointNum != obj._fixedPointNum);
}

Fixed Fixed::operator+(const Fixed &obj) const
{
	Fixed tmp(toFloat() + obj.toFloat());
	return (tmp);
}

Fixed Fixed::operator-(const Fixed &obj) const
{
	Fixed tmp(toFloat() - obj.toFloat());
	return (tmp);
}

Fixed Fixed::operator*(const Fixed &obj) const
{
	Fixed tmp(toFloat() * obj.toFloat());
	return (tmp);
}

Fixed Fixed::operator/(const Fixed &obj) const
{
	Fixed tmp(toFloat() / obj.toFloat());
	return (tmp);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	_fixedPointNum++;
	return tmp;
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	_fixedPointNum--;
	return tmp;
}

Fixed &Fixed::operator++()
{
	_fixedPointNum++;
	return (*this);
}

Fixed &Fixed::operator--()
{
	_fixedPointNum--;
	return (*this);
}

Fixed &Fixed::max(Fixed &f1, Fixed &f2)
{
	if (f1 > f2)
		return f1;
	return f2;
}

Fixed &Fixed::min(Fixed &f1, Fixed &f2)
{
	if (f1 < f2)
		return f1;
	return f2;
}

Fixed const &Fixed::max(const Fixed& f1, const Fixed& f2)
{
	if (f1 > f2)
		return f1;
	return f2;
}

Fixed const &Fixed::min(const Fixed& f1, const Fixed& f2)
{
	if (f1 < f2)
		return f1;
	return f2;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

int Fixed::getRawBits() const
{
	return (_fixedPointNum);
}

void Fixed::setRawBits(int const raw)
{
	_fixedPointNum = raw;
}

float Fixed::toFloat() const
{
	return ((float)_fixedPointNum / (1 << _fBits));
}

int Fixed::toInt() const
{
	return _fixedPointNum / (1 << _fBits);
}

std::ostream &operator<<(std::ostream &out, const Fixed &obj)
{
	out << obj.toFloat();
	return out;
}
