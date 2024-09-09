#include "Span.hpp"

int main()
{
    try{
        Span sp1 = Span(5);
        sp1.addNumber(6);
        sp1.addNumber(3);
        sp1.addNumber(17);
        sp1.addNumber(9);
        sp1.addNumber(11);
        std::cout << "sp1 Shortest span: " << sp1.shortestSpan() << "\n";
        std::cout << "sp1 Longest span: "<< sp1.longestSpan() << "\n\n";

        Span sp2(10);
        sp2.addNumber(10);
        sp2.addNumber(20);

        std::vector<int> numbers;
        numbers.push_back(21);
        numbers.push_back(30);
        numbers.push_back(40);
        numbers.push_back(50);

        sp2.addNumbersRange(numbers.begin(), numbers.end());
        // sp2.printNumbers();
        sp2.addNumber(21);
        sp2.addNumber(70);

        // sp2.printNumbers();

        std::cout << "sp2 Shortest span: " << sp2.shortestSpan() << "\n";
        std::cout << "sp2 Longest span: " << sp2.longestSpan() << "\n\n";

        // std::vector<int> maisNrs;
        // maisNrs.push_back(21);
        // maisNrs.push_back(30);
        // maisNrs.push_back(40);
        // maisNrs.push_back(50);
        // sp2.addNumbersRange(maisNrs.begin(), maisNrs.end());

    }
    catch (const std::exception &e) {
        std::cerr << e.what() << "\n";
    }


    return 0;
}