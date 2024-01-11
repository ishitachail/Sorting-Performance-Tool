#include <iostream>
#include </Users/user/source/SortingPerformanceTool/SortStrategy.h>

sortStrategy::~sortStrategy(){

}

void sortStrategy :: Print(const std::vector<int>& vector)const{
    for(int i : vector){
        std::cout<<i<<" ";
    }
}

void bubbleSortStrategy :: sort(std::vector<int>& vector){
    //implementation of bubble sort on vector
      bool swap = true;

      while(swap){

        swap = false;

        for (size_t i = 0; i < vector.size()-1; i++) {

            if (vector[i]>vector[i+1] ){

                vector[i] += vector[i+1];

                vector[i+1] = vector[i] - vector[i+1];

                vector[i] -=vector[i+1];

                swap = true;
            }
        }
    }
}

void selectionSortStrategy :: sort(std::vector<int>& vector){
    //implementation of selection sort on vector
     for (int currentIndex = 0; currentIndex < vector.size() - 1; currentIndex++) {
        int minIndex = currentIndex;
        for (int i = currentIndex + 1; i < vector.size(); i++) {
            if (vector[i] < vector[minIndex]) {
                minIndex = i;
            }
        }
        if (minIndex != currentIndex) {
            int temp = vector[currentIndex];
            vector[currentIndex] = vector[minIndex];
            vector[minIndex] = temp;
        }
    }
}

void quickSortStrategy :: sort(std::vector<int>& vector){ 
    //implementation of quicksort on vector
    if (vector.size() <= 1) {
        return;  // Already sorted
    }

    int pivot = vector[vector.size() / 2];
    std::vector<int> left;
    std::vector<int> right;

    for (int element : vector) {
        if (element < pivot) {
            left.push_back(element);
        } else if (element > pivot) {
            right.push_back(element);
        }
    }

    sort(left);
    sort(right);

    vector.clear();
    vector.insert(vector.end(), left.begin(), left.end());
    vector.push_back(pivot);
    vector.insert(vector.end(), right.begin(), right.end());
}