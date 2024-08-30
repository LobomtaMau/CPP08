#include "Span.hpp"

int main()
{
    try{
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << "\n";
        std::cout << sp.longestSpan() << "\n\n";

        std::vector<int> muitoNr;
        // muitoNr.push_back(2);
        // muitoNr.push_back(8);
        // muitoNr.push_back(15);

        Span sp2(10);
        sp2.addNumbersRange(muitoNr.begin(), muitoNr.end());

        sp2.addNumber(10);
        sp2.addNumber(20);
        sp2.addNumber(30);
        sp2.addNumber(40);
        std::cout << "sp2 Shortest span: " << sp2.shortestSpan() << "\n";
        std::cout << "sp2 Longest span: " << sp2.longestSpan() << "\n\n";

    }
    catch (const std::exception &e) {
        std::cerr << e.what() << "\n";
    }


    return 0;
}