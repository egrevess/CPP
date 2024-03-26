#include "PmergeMe.hpp"
#include <iterator> 

void PmergeMe::sortAndDisplay(std::deque<int>& data) {
    std::chrono::time_point<std::chrono::high_resolution_clock> start = std::chrono::high_resolution_clock::now();
    mergeInsertSort(data);
    std::chrono::time_point<std::chrono::high_resolution_clock> end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double, std::micro> diff = end - start;
	std::cout << "Time to process a range of "<< data.size() << " elements with std::deque : " << diff.count() << " us" << std::endl ;
}

void PmergeMe::sortAndDisplay(std::list<int>& data) {
    std::chrono::time_point<std::chrono::high_resolution_clock> start = std::chrono::high_resolution_clock::now();
    mergeInsertSort(data);
    std::chrono::time_point<std::chrono::high_resolution_clock> end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double, std::micro> diff = end - start;
	std::cout << "After: ";
    printList(data);
	std::cout << "Time to process a range of "<< data.size() << " elements with std::list : " << diff.count() << " us" << std::endl ;
}

//logique pour deque 

void insertSortDeque(std::deque<int>& dq, int i1, int i2) {
    for (int i = i1 + 1; i <= i2; ++i) {
        int temp = dq[i];
        int j = i - 1;
        while (j >= i1 && dq[j] > temp) {
            dq[j + 1] = dq[j];
            --j;
        }
        dq[j + 1] = temp;
    }
}

void mergeDeque(std::deque<int>& dq, int i1, int mid, int i2) {
    std::deque<int> temp(i2 - i1 + 1);
    int li = i1, ri = mid + 1, ti = 0;

    while (li <= mid && ri <= i2) {
        if (dq[li] <= dq[ri]) {
            temp[ti++] = dq[li++];
        } else {
            temp[ti++] = dq[ri++];
        }
    }

    while (li <= mid) {
        temp[ti++] = dq[li++];
    }

    while (ri <= i2) {
        temp[ti++] = dq[ri++];
    }

    for (int i = i1; i <= i2; ++i) {
        dq[i] = temp[i - i1];
    }
}

void mergeInsertSortDeque(std::deque<int>& dq, int i1, int i2) {
    if (i2 - i1 <= K) {
        insertSortDeque(dq, i1, i2);
    } else {
        int mid = i1 + (i2 - i1) / 2;
        mergeInsertSortDeque(dq, i1, mid);
        mergeInsertSortDeque(dq, mid + 1, i2);
        mergeDeque(dq, i1, mid, i2);
    }
}

void PmergeMe::mergeInsertSort(std::deque<int>& data) {
	if (!data.empty()) {
    	mergeInsertSortDeque(data, 0, data.size() - 1);
	}
}

//logique pour les lists

template<typename Iter>
Iter advanceIter(Iter it, int distance) {
    std::advance(it, distance);
    return it;
}

void insertSortList(std::list<int>& /*lst*/, std::list<int>::iterator begin, std::list<int>::iterator end) {
    if (begin == end) return;
    for (std::list<int>::iterator it = std::next(begin); it != end; ++it) {
		int cur = *it;
		std::list<int>::iterator j = it;
		std::list<int>::iterator j_prev = std::prev(j);
        while (j != begin && *j_prev > cur) {
            *j = *j_prev;
            --j;
            if (j != begin) {
                j_prev = std::prev(j);
            }
        }
        *j = cur;
    }
}

void mergeList(std::list<int>& /*lst*/, std::list<int>::iterator begin, std::list<int>::iterator mid, std::list<int>::iterator end) {
    std::list<int> temp(std::distance(begin, end));
    std::list<int>::iterator it = temp.begin();
    std::list<int>::iterator left = begin, right = mid;
    while (left != mid && right != end) {
        if (*left < *right) {
            *it++ = *left++;
        } else {
            *it++ = *right++;
        }
    }
    std::copy(left, std::next(mid), it);
    std::copy(right, end, it);
    std::copy(temp.begin(), temp.end(), begin);
}

void mergeInsertSortList(std::list<int>& lst, std::list<int>::iterator begin, std::list<int>::iterator end) {
    int distance = std::distance(begin, end);
    if (distance <= K) {
        insertSortList(lst, begin, end);
    } else {
        std::list<int>::iterator mid = advanceIter(begin, distance / 2);
        mergeInsertSortList(lst, begin, mid);
        mergeInsertSortList(lst, mid, end);
        mergeList(lst, begin, mid, end);
    }
}

void PmergeMe::mergeInsertSort(std::list<int>& data) {
   if (!data.empty()) {
        mergeInsertSortList(data, data.begin(), data.end());
    }
}
