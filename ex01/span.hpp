/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 11:04:40 by amorion-          #+#    #+#             */
/*   Updated: 2022/07/04 17:51:07 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include<algorithm>
# include<vector>
# include<stdexcept>

class span
{
	public:
		span(unsigned int n);
		span(span const &src);

		~span();

		span	&operator=(span &rhs);

		void	addNumber(int n);
		void	addNumber(std::vector<int>::iterator i1, std::vector<int>::iterator i2);
		int		shortestSpan(void) const;
		int		longestSpan(void) const;
	private:
		std::vector<int> v;
		unsigned int size;
		unsigned int full;
		span();
};
#endif
