/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 18:14:44 by amorion-          #+#    #+#             */
/*   Updated: 2022/07/06 18:32:21 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
#include<iostream>

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
	std::stack<int> s(mstack);
	
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
