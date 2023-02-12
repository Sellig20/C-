/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecolmou <jecolmou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 19:13:23 by jecolmou          #+#    #+#             */
/*   Updated: 2023/02/06 19:13:25 by jecolmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {}
Contact::~Contact() {}

std::string Contact::get_first_name() const
{
    return (this->first_name_priv);
}

std::string Contact::get_last_name() const
{
    return (this->last_name_priv);
}

std::string Contact::get_nickname() const
{
    return (this->nickname_priv);
}

std::string Contact::get_phone_number() const
{
    return (this->phone_number_priv);
}

std::string Contact::get_darkest_secret() const
{
    return (this->darkest_secret_priv);
}

void Contact::set_first_name(std::string first_name)
{
    this->first_name_priv = first_name;
}

void Contact::set_last_name(std::string last_name)
{
    this->last_name_priv = last_name;
}

void Contact::set_nickname(std::string nickname)
{
    this->nickname_priv = nickname;
}

void Contact::set_phone_number(std::string phone_number)
{
    this->phone_number_priv = phone_number;
}

void Contact::set_darkest_secret(std::string darkest_secret)
{
    this->darkest_secret_priv = darkest_secret;
}
