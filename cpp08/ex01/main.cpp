#include "Span.hpp"
#include <iostream>
#include <cstdlib> // Pour rand()
#include <ctime>   // Pour time()

int main() {
    try {
        Span span(5); // Créer un objet Span pouvant contenir jusqu'à 5 éléments

        span.addNumber(6);
        span.addNumber(3);
        span.addNumber(17);
        span.addNumber(9);
        span.addNumber(11);

        // Tester shortestSpan et longestSpan
        std::cout << "Shortest span: " << span.shortestSpan() << std::endl;
        std::cout << "Longest span: " << span.longestSpan() << std::endl;

        // Ajouter un autre nombre pour tester la limite
        span.addNumber(13); // Devrait lever une exception
    } catch (const Span::LimitReached& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    } catch (const Span::DistanceNotFound& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    // Tester avec un Span vide
    try {
        Span emptySpan(0);
        emptySpan.shortestSpan(); // Devrait lever une exception
    } catch (const Span::DistanceNotFound& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

	std::cout << "---TEST 1---\n";
	{
		Span	span(10000);

		try
		{
			for (int i = 0; i < 10000; i++)
				span.addNumber(rand() % 10000);
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		try
		{
			std::cout << "Shortest span: " << span.shortestSpan() << std::endl;
			std::cout << "Longest span: " << span.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
		std::cout << "\n\n---TEST 4---\n";
	{
		Span	span(10);

		try
		{
			span.addNumber(11);
			span.addNumber(6);
			span.addNumber(3);
			span.addNumber(17);
			span.addNumber(9);
			span.addNumber(11);
			span.addNumbers(span.begin(), span.end());
		}
		catch (const std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		try
		{
			std::cout << "Shortest span: " << span.shortestSpan() << std::endl;
			std::cout << "Longest span: " << span.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}

    return 0;
}
