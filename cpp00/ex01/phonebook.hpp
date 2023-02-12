/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecolmou <jecolmou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 19:13:42 by jecolmou          #+#    #+#             */
/*   Updated: 2023/02/06 19:13:43 by jecolmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include "Contact.hpp"

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

class Phonebook {
    public :
        Phonebook();
        ~Phonebook();
        int add_contact();
        int search_contact();
    private :
        Contact people[8];
        int index;
};

#endif
