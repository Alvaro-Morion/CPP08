/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 09:51:18 by amorion-          #+#    #+#             */
/*   Updated: 2022/07/03 11:02:33 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<vector>
#include<list>
#include "easyfind.hpp"

int main(void)
{
	{
		std::vector<int> v;
		v.push_back(0);
		v.push_back(1);
		v.push_back(0);
		v.push_back(2);

		std::cout << "Find 10 in v:\n";
		std::vector<int>::iterator it; 
		try
		{
			it = easyfind(v, 10);
			std::cout << "Resultado: " << *it << "siguiente: " << *(it+1) << std::endl;
		}
		catch(const std::exception &e)
		{
			std::cout << e.what();
		}
		std::cout << "Find 0 in v:\n";
    	try
    	{
        	it = easyfind(v, 0);
        	std::cout << "Resultado: " << *it << " siguiente: " << *(it+1) << std::endl;
    	}
    	catch(const std::exception &e)
    	{
        	std::cout << e.what();
    	}
		std::cout << "Find 2 in v:\n";
    	try
    	{	
        	it = easyfind(v, 2);
        	std::cout << "Resultado: " << *it << " siguiente: " << *(it+1) << std::endl;
    	}
    	catch(const std::exception &e)
    	{
        	std::cout << e.what();
    	}
	}
	{
		std::list<int> l;
        l.push_back(0);
        l.push_back(1);
        l.push_back(0);
        l.push_back(2);
		std::list<int>::const_iterator it;
		std::cout << "Find 10 in l:\n";
		try
        {
            it = easyfind(l, 10);
            std::cout << "Resultado: " << *it << std::endl;
        }
        catch(const std::exception &e)
        {
            std::cout << e.what();
        }
        std::cout << "Find 2 in l:\n";
        try
        {
            it = easyfind(l, 2);
            std::cout << "Resultado: " << *it << std::endl;
        }
        catch(const std::exception &e)
        {
            std::cout << e.what();
        }
	}
	
	return(0);
}
