
# include "Span.hpp"

int main() {
    try {
        Span<int> span(5); // Crée un objet Span pouvant contenir jusqu'à 5 éléments

        span.addNumber(10);
        span.addNumber(20);
        span.addNumber(5);
        span.addNumber(30);
        span.addNumber(15);

        // Test de shortestSpan et longestSpan
        unsigned int shortest = span.shortestSpan();
        unsigned int longest = span.longestSpan();

        std::cout << "Shortest span: " << shortest << std::endl;
        std::cout << "Longest span: " << longest << std::endl;

        // Test de l'exception LimitReached
        span.addNumber(25); // Lève l'exception LimitReached

        // Test de l'exception DistanceNotFound
        Span<int> emptySpan(0);
        emptySpan.shortestSpan(); // Lève l'exception DistanceNotFound
    } catch (const std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

	try
    {
        Span<std::vector<int> > spann(10000); // Crée un objet Span avec une capacité de 10000
        srand(time(nullptr)); // Initialise le générateur de nombres aléatoires avec le temps actuel

        // Ajoute 10000 nombres aléatoires entre 1 et 10000 dans le Span
        for (int i = 0; i < 10000; ++i)
        {
            int randomNumber = rand() % 10000 + 1;
            spann.addNumber(randomNumber);
        }

        // Calcule et affiche la plus courte et la plus longue distance
        unsigned int shortest = spann.shortestSpan();
        unsigned int longest = spann.longestSpan();

        std::cout << "Shortest span: " << shortest << std::endl;
        std::cout << "Longest span: " << longest << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }


    return 0;
}