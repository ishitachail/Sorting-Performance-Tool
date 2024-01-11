#include <iostream>
#include <vector>
#include <time.h>
#include <stdlib.h>
#include </Users/user/source/SortingPerformanceTool/data.h>
 
//this code is used to create different types of data to be used as test cases in performance measurement

// the data can be of different STL container with size as argument and at the same time it can be sorted, unsorted and reverse sorted.

using namespace std;

std::vector<int> sortedInteger :: createVector(int size){
    time_t t1;
    std::vector<int> v(size,0);
    srand ( (unsigned) time (&t1)); 
    generate(v.begin(), v.end(), rand);
    sort(v.begin(),v.end());
    return v; // creates random sorted integer type vector
}

std::vector<int> unsortedInteger :: createVector(int size){
    time_t t1;
    std::vector<int> v(size,0);
    srand ( (unsigned) time (&t1)); 
    generate(v.begin(), v.end(), rand);
    return v; // creates random unsorted integer type vector
}
        
std::vector<int> reverseSortedInteger:: createVector(int size){
    time_t t1;
    std::vector<int> v(size,0);
    srand ( (unsigned) time (&t1)); 
    generate(v.begin(), v.end(), rand);
    sort(v.begin(), v.end(), greater<int>()); 
    return v; //creates random reverse sorted integer type vector
}

std::vector<double> sortedDouble :: createVector(int size){
    time_t t1;
    std::vector<double> randomDoubles;
    for (int i = 0; i < size; ++i) {
        double randomDouble = static_cast<double>(rand()) / RAND_MAX;
        randomDoubles.push_back(randomDouble);
    }
    sort(randomDoubles.begin(),randomDoubles.end());
    return randomDoubles; //creates random sorted double type vector
}

std::vector<double> unsortedDouble:: createVector(int size){
    time_t t1;
    std::vector<double> randomDoubles;
    for (int i = 0; i < size; ++i) {
        double randomDouble = static_cast<double>(rand()) / RAND_MAX;
        randomDoubles.push_back(randomDouble);
    }
    return randomDoubles; // creates random unsorted double type vector
}
        
std::vector<double> reverseSortedDouble :: createVector(int size){
    time_t t1;
    std::vector<double> randomDoubles;
    for (int i = 0; i < size; ++i) {
        double randomDouble = static_cast<double>(rand()) / RAND_MAX;
        randomDoubles.push_back(randomDouble);
    }
    sort(randomDoubles.begin(),randomDoubles.end(),greater<double>());
    return randomDoubles; //creates random reverse sorted double type vector
}


//the function createInteger and createDouble return objects of the respective classes
integer* sortedFactory:: createInteger(){
    return new sortedInteger();
}
        
doubled*  sortedFactory :: createDouble(){
    return new sortedDouble();
}

integer* unsortedFactory:: createInteger(){
    return new unsortedInteger();
}
        
doubled* unsortedFactory :: createDouble(){
    return new unsortedDouble();
}


integer* reverseSortedFactory :: createInteger(){
    return new reverseSortedInteger();
}

doubled* reverseSortedFactory :: createDouble(){
    return new reverseSortedDouble();
}


// createFactory creates object of factory 
num_factory*  dataFactory :: createFactory(characteristic c){
switch (c)
{
    case characteristic::sorted:
        return new sortedFactory();
        break;
    case characteristic::unsorted:
        return new unsortedFactory();
        break;
    case characteristic::reverseSorted:
        return new reverseSortedFactory();
        break;
    default:
        break;
}
}
