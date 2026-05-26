# Operating Systems – Exploratory Notes

## 1. Child Process – `fork()`

### Introduction

In operating systems, a **process** is an executing instance of a program.  
A process can create another process using the `fork()` system call in UNIX/Linux systems.

The new process created is called the **child process**, while the original process is called the **parent process**.

---

## Syntax

```c
pid_t fork();
```

---

## Working of `fork()`

When `fork()` is executed:

- The operating system creates a duplicate of the current process.
- Both parent and child continue execution from the next instruction after `fork()`.
- The child gets its own Process ID (PID).
- Memory space is copied logically using techniques like **Copy-On-Write (COW)**.

---

## Return Values

| Return Value | Meaning |
|---|---|
| `0` | Returned to child process |
| Positive PID | Returned to parent process |
| `-1` | Fork failed |

---

## Example

```c
#include <stdio.h>
#include <unistd.h>

int main()
{
    pid_t pid = fork();

    if(pid == 0)
    {
        printf("Child Process\n");
    }
    else
    {
        printf("Parent Process\n");
    }

    return 0;
}
```

---

## Applications of `fork()`

- Process creation in Linux
- Running multiple tasks simultaneously
- Shell command execution
- Server-client architectures

---

## Advantages

- Enables multiprocessing
- Efficient task handling
- Better CPU utilization

---

## Disadvantages

- High memory usage for many processes
- Context switching overhead
- Synchronization complexity

---

# 2. Handling Common Signals

## What is a Signal?

A signal is a software interrupt sent to a process to notify it about an event.

Signals are used for:

- Interrupt handling
- Error notification
- Process control
- Communication between processes

---

## Common Signals

| Signal | Description |
|---|---|
| `SIGINT` | Interrupt signal (`Ctrl + C`) |
| `SIGTERM` | Termination request |
| `SIGKILL` | Forcefully terminate process |
| `SIGSTOP` | Stop process execution |
| `SIGCONT` | Continue stopped process |
| `SIGSEGV` | Segmentation fault |
| `SIGALRM` | Alarm clock signal |

---

## Signal Handling

Signal handling allows a process to respond to signals gracefully instead of terminating abruptly.

---

## Example

```c
#include <stdio.h>
#include <signal.h>

void handler(int sig)
{
    printf("SIGINT received\n");
}

int main()
{
    signal(SIGINT, handler);

    while(1);

    return 0;
}
```

---

## Benefits of Signal Handling

- Prevents unexpected termination
- Allows cleanup before exit
- Improves fault tolerance
- Useful in daemon/server applications

---

# 3. Exploring Different Kernel Crashes

## What is a Kernel?

The kernel is the core part of an operating system that manages:

- Memory
- CPU scheduling
- Device drivers
- Processes
- File systems

---

## What is a Kernel Crash?

A kernel crash occurs when the operating system kernel encounters a fatal error and cannot continue safely.

Linux systems may display:

```text
Kernel Panic
```

Windows systems may show:

```text
Blue Screen of Death (BSOD)
```

---

## Causes of Kernel Crashes

### 1. Invalid Memory Access

Occurs when kernel code accesses illegal memory locations.

Example:

- Null pointer dereference
- Buffer overflow

---

### 2. Faulty Device Drivers

Drivers operate in kernel mode. Bugs in drivers can crash the kernel.

---

### 3. Hardware Failures

- RAM corruption
- Overheating
- CPU faults
- Disk failures

---

### 4. Deadlocks

Two or more processes wait indefinitely for resources.

---

### 5. Stack Overflow in Kernel Space

Too much recursive execution inside kernel functions.

---

## Kernel Panic Example

```text
Kernel panic - not syncing: Fatal exception
```

---

## Prevention Methods

- Proper driver testing
- Memory protection
- Error handling
- Synchronization mechanisms
- Regular system updates

---

# 4. Time Complexity

## Definition

Time complexity measures how the execution time of an algorithm increases with input size.

It helps analyze algorithm efficiency.

---

## Big-O Notation

Big-O notation represents the worst-case execution time.

---

## Common Time Complexities

| Complexity | Name |
|---|---|
| `O(1)` | Constant |
| `O(log n)` | Logarithmic |
| `O(n)` | Linear |
| `O(n log n)` | Linearithmic |
| `O(n²)` | Quadratic |
| `O(2^n)` | Exponential |

---

## Examples

### Constant Time – `O(1)`

```c
x = arr[0];
```

Execution time does not depend on input size.

---

### Linear Time – `O(n)`

```c
for(i = 0; i < n; i++)
```

Execution grows directly with input size.

---

### Quadratic Time – `O(n²)`

```c
for(i = 0; i < n; i++)
{
    for(j = 0; j < n; j++)
}
```

Nested loops increase computation significantly.

---

## Importance

- Helps compare algorithms
- Improves optimization
- Reduces execution time
- Essential in large-scale systems

---

# 5. Locking Mechanism – Mutex / Spinlock

## Need for Synchronization

When multiple threads access shared resources simultaneously, data inconsistency may occur.

This issue is called:

```text
Race Condition
```

Synchronization mechanisms prevent race conditions.

---

# Mutex

## Definition

A mutex (Mutual Exclusion) is a lock that allows only one thread to access a critical section at a time.

---

## Working

1. Thread acquires lock
2. Accesses shared resource
3. Releases lock
4. Other threads wait until lock is released

---

## Example

```c
#include <pthread.h>

pthread_mutex_t lock;

pthread_mutex_lock(&lock);

/* Critical Section */

pthread_mutex_unlock(&lock);
```

---

## Advantages

- Prevents race conditions
- Safe thread synchronization
- Efficient for long waiting periods

---

## Disadvantages

- Context switching overhead
- Possible deadlocks

---

# Spinlock

## Definition

A spinlock is a lock where a thread continuously checks until the lock becomes available.

It does not sleep while waiting.

---

## Working

```text
while(lock == busy)
{
    // keep checking
}
```

---

## Advantages

- Very fast for short waiting times
- Useful in kernel programming

---

## Disadvantages

- Wastes CPU cycles while spinning
- Not suitable for long waits

---

# Mutex vs Spinlock

| Feature | Mutex | Spinlock |
|---|---|---|
| Waiting Method | Sleeps | Busy waits |
| CPU Usage | Low | High |
| Suitable For | Long waits | Short waits |
| Context Switch | Yes | No |
| Kernel Usage | Moderate | Frequent |

---

# Conclusion

The explored topics provide fundamental understanding of operating systems and concurrent programming concepts. Process creation using `fork()`, signal handling, kernel crash analysis, algorithm complexity, and synchronization techniques are essential concepts for developing efficient and reliable system software.
