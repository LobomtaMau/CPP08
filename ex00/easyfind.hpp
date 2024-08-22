#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <exception>
#include <iterator>

class NotFoundException : public std::exception {
    public:
        const char *what() const throw() {
            return "Element not Found";
        }
};

template <typename Template>
typename 


#endif