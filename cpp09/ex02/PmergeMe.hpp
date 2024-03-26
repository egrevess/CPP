#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <list>
# include <deque>
# include <iostream>
# include <chrono> // Pour std::chrono

# define K 10

class PmergeMe {
	public:
		static void sortAndDisplay(std::deque<int>& data);
		static void sortAndDisplay(std::list<int>& data);

	private:
		static void mergeInsertSort(std::deque<int>& data); // Implémentation spécifique pour deque
		static void mergeInsertSort(std::list<int>& data); // Implémentation spécifique pour list
};

void printList(const std::list<int>& lst);

#endif // PMERGEME_HPP
