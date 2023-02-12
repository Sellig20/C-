/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecolmou <jecolmou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 19:13:29 by jecolmou          #+#    #+#             */
/*   Updated: 2023/02/06 19:13:30 by jecolmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

#ifndef CONTACT_H
#define CONTACT_H

class Contact {
public :
  Contact();
  ~Contact();
  std::string get_first_name() const;
  std::string get_last_name() const;
  std::string get_nickname() const;
  std::string get_phone_number() const;
  std::string get_darkest_secret() const;
  void set_first_name(std::string first_name);
  void set_last_name(std::string last_name);
  void set_nickname(std::string nickname);
  void set_phone_number(std::string phone_number);
  void set_darkest_secret(std::string darkest_secret);
private :
  std::string first_name_priv;
  std::string last_name_priv;
  std::string nickname_priv;
  std::string phone_number_priv;
  std::string darkest_secret_priv;
};

#endif
