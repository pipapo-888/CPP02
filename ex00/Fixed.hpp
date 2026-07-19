/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knomura <knomura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 16:17:45 by knomura           #+#    #+#             */
/*   Updated: 2026/07/19 18:59:49 by knomura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed
{
	private:
		int _fixedPointNum;
		static const int _fBits;
	
	public:
		Fixed();
		Fixed(const Fixed &obj);
		Fixed& operator = (const Fixed& obj);
		~Fixed();
		int getRawBits();
		void setRawBits(int const raw);
};

#endif
