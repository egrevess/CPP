#include "PmergeMe.hpp"
#include <deque>
#include <list>
#include <sstream>
#include <cctype>  

void isSorted(const std::list<int>& lst) {

    if (lst.empty() || lst.size() == 1) {
        return;
    }
    std::list<int>::const_iterator it = lst.begin();
    std::list<int>::const_iterator next_it = it;
    ++next_it;
    while (next_it != lst.end()) {
        if (*it > *next_it) {
            std::cerr << "List not sorted \n";
			return ;
        }
        ++it;
        ++next_it;
    }
	//std::cout << "Sorted \n";
}

void isSorted(const std::deque<int>& dq) {
    if (dq.empty() || dq.size() == 1) {
        return ;
    }
    for (std::deque<int>::const_iterator it = dq.begin(); it != dq.end() - 1; ++it) {
        if (*it > *(it + 1)) {
			std::cerr << "Deque not sorted \n";
            return ;
        }
    }
	//std::cout << "Sorted \n";
}

void printList(const std::list<int>& lst) {
	for (std::list<int>::const_iterator it = lst.begin(); it != lst.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

void printDeque(const std::deque<int>& dq) {
    std::deque<int>::const_iterator it;
    for (it = dq.begin(); it != dq.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

int main(int argc, char* argv[]) {
    std::deque<int> dataDeque;
    std::list<int> dataList;

    // Remplissage des conteneurs avec les arguments d'entrée
	if (argc >= 1) {
		for (int i = 1; i < argc; ++i) {
			for (int j = 0; argv[i][j]; ++j) {
				if (!std::isdigit(argv[i][j])) {
					std::cerr << "Error: " << argv[i] << ": invalid input\n";
					return 1;
				}
			}
			std::istringstream iss(argv[i]);
			int n;
			iss >> n;
			if (iss.fail() || n < 0) {
				std::cerr << "Error: " << argv[i] << ": invalid number\n";
				return 1;
			}
			dataDeque.push_back(n);
			dataList.push_back(n);
    	}
		std::cout << "Before: " ;
		printList(dataList);

		// Tri et affichage pour list
		PmergeMe::sortAndDisplay(dataList);

		// Tri et affichage pour deque
		PmergeMe::sortAndDisplay(dataDeque);

		isSorted(dataList);
		isSorted(dataDeque);
		return 0;
	}
	else {
		std::cout << "Error: Not enough arguments" << std::endl;
	}
	return 1;
}
