#pragma once
#include <vector>

class integer{
    public:
        virtual std::vector<int> createVector( int size)=0;
};

class sortedInteger: public integer{
    public:
        virtual std::vector<int> createVector(int size)override;
};

class unsortedInteger: public integer{
    public:
        virtual std::vector<int> createVector(int size)override;
};

class reverseSortedInteger: public integer{
    public: 
        virtual std::vector<int> createVector(int size)override;
};


/*                      integer    
                           |
                           |
            ---------------------------------
            |              |                |
            ^              ^                ^
            |              |                |
    sortedInteger    unsortedInteger    reverseSortedInteger


*/
class doubled{
    public:
        virtual std::vector<double> createVector( int size)=0;
};

class sortedDouble: public doubled{
    public:
        virtual std::vector<double> createVector(int size)override;
};

class unsortedDouble: public doubled{
    public:
        virtual std::vector<double> createVector(int size)override;
};

class reverseSortedDouble: public doubled{
    public: 
        virtual std::vector<double> createVector(int size)override;
};


/*                      doubled    
                           |
                           |
            ---------------------------------
            |              |                |
            ^              ^                ^
            |              |                |
    sortedDouble    unsortedDouble    reverseSortedDouble


*/

class num_factory{
    public:
        virtual integer* createInteger()=0;
        virtual doubled* createDouble()=0;
};

class sortedFactory: public num_factory{
    public:
        integer* createInteger();
        doubled* createDouble();
};

class unsortedFactory: public num_factory{
    public:
        integer* createInteger();
         doubled* createDouble();
};

class reverseSortedFactory: public num_factory{
    public:
        integer* createInteger();
        doubled* createDouble();
};

/*                      num_factory    
                           |
                           |
            ---------------------------------
            |              |                |
            ^              ^                ^
            |              |                |
    sortedFactory    unsortedFactory    reverseSortedFactory


*/

enum characteristic{
    sorted,
    unsorted,
    reverseSorted
};

class dataFactory{
    public:
        static num_factory* createFactory(characteristic c);
};