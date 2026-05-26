# Adding Signal Handling 
## 1. Write a C program to define 3 different threads with the following purposes where N is the input

- **Thread A**  
  To run a loop and return the sum of first N prime numbers.

- **Thread B & C**  
  Should run in parallel.
  
  - One thread prints `"Thread 1 running"` every 2 seconds.
  - The other thread prints `"Thread 2 running"` every 3 seconds.
  - Both should execute for 100 seconds.

---

## 2. In the above program

- Add signal handling for `SIGINT` (etc) and prevent termination.
- Convert the above threads to individual functions and note down:
  
  - The time taken
  - The flow of execution
