/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 11:14:21 by amorion-          #+#    #+#             */
/*   Updated: 2022/07/03 12:15:43 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
/* Constructor and destructor */
span::span()
{};

span::span(unsigned int n) : size(n), full(0)
{};

span::span(span const &src)
{
	std::vector<int>::const_iterator i = src.v.begin();
	std::vector<int>::const_iterator last = src.v.end();
	this->size = src.size;
	this->full = src.full;
	
	while(i != last)
	{
		this->v.push_back(*i);
		i++;
	}
}
span::~span()
{};

/* operators */

span	&span::operator=(span &rhs)
{
    std::vector<int>::const_iterator i = rhs.v.begin();
    std::vector<int>::const_iterator last = rhs.v.end();
    this->size = rhs.size;
    this->full = rhs.full;
	unsigned int x = 0;;
    while(i != last)
	{
        this->v[x] = *i;
		x++;
		i++;
	}
	return(*this);
}

/* funcions */

void	span::addNumber(int n)
{
	if(full == size)
		throw(std::out_of_range("span class is full\n"));
	else
	{
		full++;
		v.push_back(n);
	}
}

int	span::longestSpan(void) const
{
	if(size < 2)
		throw(std::out_of_range("not enough elements\n"));
	else
		return(*std::max_element(v.begin(), v.end())-*std::min_element(v.begin(), v.end()));
}

int	span::shortestSpan(void) const
{
	if (size < 2)
		throw(std::out_of_range("not enough elements\n"));
	else
	{
		std::vector<int>::const_iterator i = v.begin();
		std::vector<int>::const_iterator j = i + 1;
		std::vector<int>::const_iterator last = v.end();
		int dif = j - i;
		while(i != (last - 1))
		{
			j = i + 1;
			while(j != last)
			{
				if(*j > *i && *j - *i < dif)
					dif = *j - *i;
				else if(*j < *i && *i - *j < dif)
					dif = *i - *j;
				j++;

			}
			if(dif == 0)
				break;
			i++;
		}
		return(dif);
	}
}
