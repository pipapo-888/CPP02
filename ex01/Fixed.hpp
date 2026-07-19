/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knomura <knomura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 16:17:45 by knomura           #+#    #+#             */
/*   Updated: 2026/07/19 20:01:55 by knomura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

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
	Fixed &operator=(const Fixed &obj);
	~Fixed();
	int getRawBits() const;
	void setRawBits(int const raw);
	
};

#endif
