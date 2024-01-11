#pragma once
#include <vector>

class sortStrategy {
    public:
        virtual ~sortStrategy();
        virtual void sort(std::vector<int>& vector)=0; //pure virtual function that is needed to be implemented by all child classes 
        void Print(const std::vector<int>& vector) const;
};

class bubbleSortStrategy : public sortStrategy{
    public : 
        virtual void sort(std::vector<int>& vector) override;
};

class selectionSortStrategy : public sortStrategy{
    public : 
        virtual void sort(std::vector<int>& vector) override;
};

class quickSortStrategy : public sortStrategy {
public:
    virtual void sort(std::vector<int>& vector) override;
};

/*                        sortStartegy   
                              |
                              |
            -----------------------------------------
            |                   |                    |
            ^                   ^                    ^
            |                   |                    |
 bubbleSortStartegy  selectionSortStartegy   quicksortSortStartegy


*/


