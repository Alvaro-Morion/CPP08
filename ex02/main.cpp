/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 18:14:44 by amorion-          #+#    #+#             */
/*   Updated: 2022/09/09 19:08:51 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
#include<iostream>
#include<list>
int main()
{
	std::cout << "Given Main\n";
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	{
		std::cout << "List output\n";
		std::list<int> mstack;
    	mstack.push_back(5);
    	mstack.push_back(17);
    	std::cout << mstack.back() << std::endl;
    	mstack.pop_back();
    	std::cout << mstack.size() << std::endl;
    	mstack.push_back(3);
    	mstack.push_back(5);
    	mstack.push_back(737);
    	mstack.push_back(0);
		std::list<int>::iterator it = mstack.begin();
		std::list<int>::iterator ite = mstack.end();
    	++it;
    	--it;
    	while (it != ite)
    	{
			std::cout << *it << std::endl;
			++it;
		}
	}

	{
		std::cout << "Copy\n";
		MutantStack<int> copy(mstack);
		MutantStack<int>::iterator it = copy.begin();
		MutantStack<int>::iterator ite = copy.end();
		while (it != ite)
    	{
   		std::cout << *it << std::endl;
    	++it;
    	}
	}
	{
		std::cout << "Assignation\n";
		MutantStack<int> asign;
		asign.push(-1);
		asign = mstack;
		MutantStack<int>::iterator it = asign.begin();
        MutantStack<int>::iterator ite = asign.end();
        while (it != ite)
        {
        std::cout << *it << std::endl;
        ++it;
        }
	}
return 0;
}
