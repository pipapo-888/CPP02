/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knomura <knomura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 16:17:45 by knomura           #+#    #+#             */
/*   Updated: 2026/07/26 19:22:00 by knomura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int _fixedPointNum;
	static const int _fBits = 8;

public:
	Fixed();
	Fixed(const Fixed &obj);
	Fixed(const int num);
	Fixed(const float value);
	~Fixed();

	Fixed &operator=(const Fixed &obj);
	bool operator>(const Fixed &obj) const;
	bool operator<(const Fixed &obj) const;
	bool operator>=(const Fixed &obj) const;
	bool operator<=(const Fixed &obj) const;
	bool operator==(const Fixed &obj) const;
	bool operator!=(const Fixed &obj) const;
	Fixed operator+(const Fixed &obj) const;
	Fixed operator-(const Fixed &obj) const;
	Fixed operator*(const Fixed &obj) const;
	Fixed operator/(const Fixed &obj) const;

	Fixed operator++(int);
	Fixed operator--(int);
	Fixed &operator++();
	Fixed &operator--();

	static Fixed &max(Fixed &f1, Fixed &f2);
	static Fixed &min(Fixed &f1, Fixed &f2);
	static Fixed const &max(const Fixed &f1, const Fixed &f2);
	static Fixed const &min(const Fixed &f1, const Fixed &f2);

	int getRawBits() const;
	void setRawBits(int const raw);
	float toFloat() const;
	int toInt() const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &obj);

#endif
