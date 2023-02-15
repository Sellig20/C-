/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecolmou <jecolmou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 19:47:56 by jecolmou          #+#    #+#             */
/*   Updated: 2023/02/15 20:12:03 by jecolmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef BRAIN_H
#define BRAIN_H

class Brain
{
	public :
		Brain();
		Brain(const Brain &src);
		~Brain();
		Brain & operator=(const Brain &src);

	private :
		std::string ideas[100];

};

#endif
