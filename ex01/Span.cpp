#include "Span.hpp"
#include "limits"

Span::Span(unsigned int n) : _maxSize(n) {}

Span::Span (const Span &other) : _maxSize(other._maxSize), _nr(other._nr) {}

Span &Span::operator=(const Span &other) {
    if (this != &other) {
        _maxSize = other._maxSize;
        _nr = other._nr;
    }
    return *this;
}

Span::~Span() {}

void Span::addNumber(int nr) {
    if(_nr.size() >= _maxSize) {
        throw FullOrNoSpanExeption();
    }
    _nr.push_back(nr);
}

template<typename Itt>
void Span::addNumbersRange(Itt begin, Itt end) {
    if(std::distance(begin, end) + _nr.size() > _maxSize) {
        throw FullOrNoSpanExeption();
    }
    _nr.insert(_nr.end(), begin, end);
}

int Span::shortestSpan() const {
    if(_nr.size() < 2) {
        throw FullOrNoSpanExeption();
    }

    std::vector<int> sortedNrs = _nr;
    std::sort(sortedNrs.begin(), sortedNrs.end());

    int smallest = std::numeric_limits<int>::max();
    for (size_t i = 1; i < sortedNrs.size(); i++)
        smallest = std::min(smallest, sortedNrs[i] - sortedNrs[i - 1]);
    return smallest;
}


int Span::longestSpan() const {
    if(_nr.size() < 2) {
        throw FullOrNoSpanExeption();
    }
    int  minNb = *std::min_element(_nr.begin(), _nr.end());
    int  maxNb = *std::max_element(_nr.begin(), _nr.end());

    return (maxNb - minNb);
}


const char *Span::FullOrNoSpanExeption::what() const throw() {
    return "Span Full or not enough numbers.\n";
}


