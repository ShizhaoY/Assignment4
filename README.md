# Assignment4
## Motivation

​	In this assignment, you will write a multi-threaded program that implements the banker's algorithm.  

Customers request and release resources from the bank. The banker will keep track of the resources. The  

banker will grant a request if it satisfies the safety algorithm. If a request does not leave the system in a  

safe state, the banker will deny it.

## Installation

gcc 180583280_173046900_a04.c  -o 180583280_173046900_a04

## Individual contribution 

### 180583280

- readFileInitData
- printfBaseInformation
- runStatus

- runRun

###  173046900

- runRQ
- runRL
- bankAlgorithm
- safeAlgorithm

## Features

-  anomaly detection 
-  simplicity of operator 

## Tests cases

Number of Customers: 5 

Currently Available resources: 10 5 7 8 

Maximum resources from file: 

6 4 7 3 

4 2 3 2 

2 5 3 3 

6 3 3 2 

5 5 7 5 

Enter Command: RQ 0 1 0 0 1 

State is safe, and request is satisfied 

Enter Command: RQ 1 1 1 1 1 

State is safe, and request is satisfied 

Enter Command: RQ 2 2 2 2 2 

State is safe, and request is satisfied 

Enter Command: RQ 3 1 1 1 1 

State is safe, and request is satisfied 

Enter Command: RQ 4 1 0 0 0 

State is safe, and request is satisfied 

Enter Command: Status 

Available Resources: 

4 1 3 3 

Maximum Resources: 

6 4 7 3 

4 2 3 2 

2 5 3 3 

6 3 3 2 

5 5 7 5 

Allocated Resources: 

1 0 0 1 

1 1 1 1 

2 2 2 2 

1 1 1 1 

1 0 0 0 

Need Resources: 

5 4 7 2 

3 1 2 1 

0 3 1 1 

5 2 2 1 

4 5 7 5 

Enter Command: Run 

Safe Sequence is: 1 3 2 4 0 

--> Customer/Thread 1 

 Allocated resources: 1 1 1 1 

 Needed: 3 1 2 1 

 Available: 4 1 3 3 

 Thread has started 

 Thread has finished 

 Thread is releasing resources 

 New Available: 5 2 4 4 

--> Customer/Thread 3 

 Allocated resources: 1 1 1 1 

 Needed: 5 2 2 1 

 Available: 5 2 4 4

Thread has started 

 Thread has finished 

 Thread is releasing resources 

 New Available: 6 3 5 5 

--> Customer/Thread 2 

 Allocated resources: 2 2 2 2 

 Needed: 0 3 1 1 

 Available: 6 3 5 5 

 Thread has started 

 Thread has finished 

 Thread is releasing resources 

 New Available: 8 5 7 7 

--> Customer/Thread 4 

 Allocated resources: 1 0 0 0 

 Needed: 4 5 7 5 

 Available: 8 5 7 7 

 Thread has started 

 Thread has finished 

 Thread is releasing resources 

 New Available: 9 5 7 7 

--> Customer/Thread 0 

 Allocated resources: 1 0 0 1 

 Needed: 5 4 7 2 

 Available: 9 5 7 7 

 Thread has started 

 Thread has finished 

 Thread is releasing resources 

 New Available: 10 5 7 8