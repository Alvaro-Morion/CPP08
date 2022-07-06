/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 16:33:19 by amorion-          #+#    #+#             */
/*   Updated: 2022/07/06 18:32:24 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include<stack>

template<typename T>
class MutantStack : public std::stack<T>
{
	public:
		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator	begin()
		{
			return(this->c.begin());
		}

		iterator	end()
		{
			return(this->c.end());
		}
		
		MutantStack()
		{}
		
		MutantStack<T>(MutantStack<T> &src)
		{
			iterator end = src.end();
			iterator begin = src.begin();

			while(begin != end)
			{
				this->push(*begin);
				begin++;
			}
		}

		MutantStack<T>	&operator=(MutantStack<T> rhs)
		{
			iterator end = rhs.end();
			iterator begin = rhs.begin();
			iterator ref1 = this->begin();
			iterator ref2 = this->end();
			while(ref1 != ref2)
			{
				this->pop();
				ref1++;
			}
			while(begin != end)
			{
				this->push(*begin);
				begin++;
			}
			return(*this);
		}

		virtual ~MutantStack()
		{}
};
#endif
