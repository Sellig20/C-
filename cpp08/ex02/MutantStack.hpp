/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecolmou <jecolmou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 19:48:07 by jecolmou          #+#    #+#             */
/*   Updated: 2023/02/21 20:37:13 by jecolmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>

template<typename T>
class MutantStack : public std::stack<T>
{
	public :
		MutantStack<T>()
		{
			return ;
		};
		MutantStack<T>(const MutantStack<T> &src)
		{
			(*this) = src;
		};
		~MutantStack<T>()
		{
			return ;
		};
		MutantStack<T> &operator=(const MutantStack<T> &src)
		{
			this->c = src.c;
			return (*this);
		};

		typedef typename std::stack<T>::container_type::iterator 					iterator;
		typedef typename std::stack<T>::container_type::const_iterator 				const_iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator 			reverse_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator 		const_reverse_iterator;

		iterator		begin()
		{
			return (this->c.begin());
		};

		iterator		end()
		{
			return (this->c.end());
		};

		const_iterator	begin() const
		{
			return (this->c.begin());
		};

		const_iterator	end() const
		{
			return (this->c.end());
		};

		reverse_iterator		rbegin()
		{
			return (this->c.rbegin());
		};

		reverse_iterator		rend()
		{
			return (this->c.rend());
		};

		const_reverse_iterator	rbegin() const
		{
			return (this->c.rbegin());
		};

		reverse_iterator 		rend() const
		{
			return (this->c.rend());
		};

	private :
};

#endif
