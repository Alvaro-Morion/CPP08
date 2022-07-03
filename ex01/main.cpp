/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 12:00:29 by amorion-          #+#    #+#             */
/*   Updated: 2022/07/03 12:25:41 by amorion-         ###   ########.fr       */
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
	}

}
