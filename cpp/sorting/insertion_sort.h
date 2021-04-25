/**
 * Insertion sort algorithm
 * 
 * Best-case:       O(n)
 * Average-case:    O(n^2) 
 * Worst-case:      O(n^2)
 * 
 * Best used for small-sized containers
 * 
 * insertion_sort is faster than modern_insertion_sort
 * Partially due to std::swap
 * 
 * @author Michael Victorino
 * */

#include <array>


namespace algo {

    template<size_t N>
    void insertion_sort(std::array<int, N> arr) 
    {
        int j, k;
        for(int i = 1; i < arr.size(); i++) {
            j = i;
            k = arr.at(i);
            while(j > 0 && arr.at(j-1) > k) {
                arr.at(j) = arr.at(j-1);
                j--;
            }
            arr.at(j) = k;
                    
        }

    }

    template<size_t N>
    void modern_insertion_sort(std::array<int, N> arr) 
    {
        int i, j;
        for(i = 1; i< arr.size(); i++) {
            j = i;
            auto k = arr[j];
            while(j > 0 and (arr[j-1] > k)) 
            {
                std::swap(arr[j], arr[j-1]);
                j--;
            }
            arr[j] = k;
        }
    }

}