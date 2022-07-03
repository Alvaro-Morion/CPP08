/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 09:40:25 by amorion-          #+#    #+#             */
/*   Updated: 2022/07/03 11:02:30 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include<iostream>
# include<algorithm>

template<typename T>
typename T::iterator	easyfind(T c, int value)
{
	typename T::iterator	it = c.begin();
	typename T::iterator 	last = c.end();
	typename T::iterator	res = std::find(it, last, value);
	if(res == last)
		throw(std::runtime_error("Element not found\n"));
	else
		return(res);
}
#endif
