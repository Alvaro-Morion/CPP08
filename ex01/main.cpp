/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 12:00:29 by amorion-          #+#    #+#             */
/*   Updated: 2022/07/04 18:02:19 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <iostream>
int main(void)
{
	{
		std::cout << "Given main\n";
		span sp = span(5);
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;

		std::cout << "Adding too many elements\n";
		try
		{
			sp.addNumber(10);
			std::cout << "Successfully added";
		}
		catch(std::exception &e)
		{
			std::cout << e.what();
		}
		std::cout << "Too short\n";
        span u = span(10);
		u.addNumber(2);
		try
        {
            u.shortestSpan();
			std::cout << "Bad thing\n";
        }
        catch(std::exception &e)
        {
            std::cout << e.what();
        }
		std::cout << "Big span\n";
		span huge = span(10000);
		for(int i = 0; i < 10000; i++)
			huge.addNumber(i);
		std::cout << huge.longestSpan() << std::endl;
		std::cout << huge.shortestSpan() << std::endl;

		std::cout << "iterator for add number\n";
		std::vector<int> v;
		v.push_back(5);
		v.push_back(3);
		v.push_back(17);
		v.push_back(9);
		v.push_back(11);
		span iterated = span(5);
		std::vector<int>::iterator i1 = v.begin();
		std::vector<int>::iterator i2 = v.end();
		try
		{
			iterated.addNumber(i1, i2);
			std::cout << iterated.longestSpan() << std::endl;
			std::cout << iterated.shortestSpan() << std::endl;
		}
		catch(std::exception &e)
		{
			std::cout << e.what();
		}
	}
	return(0);
}
