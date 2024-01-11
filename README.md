This cpp code is about analyzing performance of different sorting algorithms on different data types.
The code makes use of Design Patterns for OOP's(object oriented programming) to make the code easily extensible and efficient.

File : SortStrategy.cpp
This code makes use of "Strategy Pattern". Strategy is a behavioral design pattern that lets you define a family of algorithms, 
put each of them into a separate class, and make their objects interchangeable. The Strategy pattern suggests that you take a 
class that does something specific in a lot of different ways and extract all of these algorithms into separate classes called strategies.
The original class, called context, must have a field for storing a reference to one of the strategies. The context delegates the work 
to a linked strategy object instead of executing it on its own.
Here the context is the class 'sortStrategy' and it's derived classes (i.e. strategies) are 'bubbleSortStrategy','selectionSortStrategy'
,'quickSortStrategy'. The context class has a pure virtual function 'sort' which works on the STL container vector. Ech of the derived classes 
have their individual implementation of the function sort.
