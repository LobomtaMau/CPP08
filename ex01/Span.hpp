#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <exception>
#include <iterator>

class Span {
    private:
        unsigned int _maxSize;
        std::vector<int> _nr;

    public:
        Span (unsigned int);
        Span (const Span &other);
        Span &operator=(const Span &other);
        ~Span();

        void addNumber(int nr);

        template<typename Itt>
        void addNumbersRange(Itt begin, Itt end);
        int shortestSpan() const;
        int longestSpan() const;

        class FullOrNoSpanExeption : public std::exception {
            public:
                const char *what() const throw();
        };
};


#endif