This cpp code is about analyzing performance of different sorting algorithms on different data types.
The code makes use of Design Patterns for OOP's(object oriented programming) to make the code easily extensible and efficient.

File : SortStrategy.cpp ->
This code makes use of "Strategy Pattern". Strategy is a behavioral design pattern that lets you define a family of algorithms, 
put each of them into a separate class, and make their objects interchangeable. The Strategy pattern suggests that you take a 
class that does something specific in a lot of different ways and extract all of these algorithms into separate classes called strategies.
The original class, called context, must have a field for storing a reference to one of the strategies. The context delegates the work 
to a linked strategy object instead of executing it on its own.
Here the context is the class 'sortStrategy' and it's derived classes (i.e. strategies) are 'bubbleSortStrategy','selectionSortStrategy'
,'quickSortStrategy'. The context class has a pure virtual function 'sort' which works on the STL container vector. Ech of the derived classes 
have their individual implementation of the function sort.

File : data.cpp -> 
This code makes use of "Abstract Factory Pattern". Abstract Factory is a creational design pattern that lets you produce families of related objects without specifying their concrete classes. The first thing the Abstract Factory pattern suggests is to explicitly declare interfaces for each distinct product of the product family. Then you can make all variants of products follow those interfaces. Here the Abstract Factory is 'dataFactory'. This factory creates  objects of the concrete Factory 'num_factory'. The derived factories of 'num_factory' are 'sortedFactory', 'unsortedFactory', 'reverseSortedFactory'. These Factories have their own implementations of function 'createInteger' and 'createDouble'(they create object of the necessary class). The main purpose of this code is that is provides the client with different datatypes like data can be type int or double, data can be of different STL conatiners like vector, array, etc, data can be sorted, unsorted and reversesorted, also number of elemsts in a conatiner is one of the parameters. Therefore we have class 'integer' and its derived classes 'sortedInteger', 'unsortedInteger', 'reverseSortedInteger' with implementation of the function 'createVector' with size passes as an argument. We also have class 'doubled' and its derived classes 'sortedDouble', 'unsortedDouble', 'reverseSortedDouble' with implemenation of the function 'createVector' with size passes as an argument. 

