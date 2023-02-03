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