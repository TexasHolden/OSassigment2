# OSassigment2
Holden Stallsmith
11/30/2021
Written in C++

The Bankers Algorithm Problem: We were assigned to right code to solve the following:
Considering a system with five processes P0 through P4 and three resources of type A, B, C. Resource type A has 10 instances, 
B has 5 instances and type C has 7 instances. Suppose at time t0 following snapshot of the system has been taken:
0 1 0 2 0 0 3 0 2 2 1 1 0 0 2 7 5 3 3 2 2 9 0 2 2 2 2  4 3 3 3 3 2
(data above is not originally presented this way)

How I went about this is quite simple, I developed code to take data from the input file to then insert that data into code that implements the Bankers Algorithm.

For awhile I thought I could get away with reusing integer variables i and j for the input file retrieval code. However, the values for those variables stayed changed
which caused massive problems for me down the line.

Instructions:
After getting the code, enter these two commands into the terminal:
c++ main.cpp
./a.out 
