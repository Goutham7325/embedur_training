# Multi-Link Operation (MLO) in Wi-Fi 7 and Its Impact on Throughput and Latency

## Overview

**Multi-Link Operation (MLO)** is a key innovation introduced in **Wi-Fi 7 (802.11be)** that allows a device to **simultaneously use multiple frequency bands and channels** for communication.

Unlike previous WiFi generations where a device operates on a **single link at a time**, MLO enables **parallel data transmission across multiple links**, significantly improving performance.

---

## What is MLO?

- A device (STA) can connect to an Access Point (AP) using **multiple links**:
  - 2.4 GHz  
  - 5 GHz  
  - 6 GHz  

- These links can be used:
  - **Simultaneously (parallel transmission)**
  - **Dynamically (switching between links)**

---

## Types of MLO Operation

<img width="1024" height="647" alt="image" src="https://github.com/user-attachments/assets/0063b560-c5cb-4b8f-9da9-26f068c5d9c3" />

### 1. Simultaneous Transmission (STR - Simultaneous Transmit and Receive)
- Multiple links active at the same time  
- Data split across links  

---

### 2. Non-Simultaneous Operation
- Device switches between links  
- Used when hardware constraints exist  

---

### 3. Redundant Transmission
- Same data sent across multiple links  
- Improves reliability  

<img width="1163" height="724" alt="image" src="https://github.com/user-attachments/assets/054c088e-d26e-42fa-9f2f-2325a5dddfd8" />

---

## How MLO Works

1. Device establishes multiple links with AP  
2. Traffic is:
   - Split across links (load balancing), or  
   - Duplicated (for reliability)  
3. Scheduler decides:
   - Which link to use  
   - When to transmit  

---

## Impact on Throughput

### 1. Parallel Data Transmission
- Data transmitted over multiple links simultaneously  
- **Aggregated bandwidth increases total throughput**

---

### 2. Better Spectrum Utilization
- Uses multiple bands efficiently  
- Avoids idle channels  

---

### 3. Higher Peak Data Rates
- Combined bandwidth of multiple channels  
- Enables **multi-gigabit speeds**

---

### 4. Reduced Bottlenecks
- Traffic distributed across links  
- Prevents congestion on a single channel  

---

## Impact on Latency

### 1. Reduced Waiting Time
- Device can transmit on **any available link**  
- Avoids delays due to busy channels  

---

### 2. Faster Channel Access
- Multiple links increase chances of immediate transmission  

---

### 3. Lower Jitter
- Stable performance across links  
- Consistent packet delivery  

---

### 4. Redundancy Reduces Delay
- Duplicate transmission ensures faster successful delivery  
- Minimizes retransmission delays  

---

## Additional Benefits

### 1. Improved Reliability
- If one link fails, others continue communication  

---

### 2. Load Balancing
- Traffic dynamically distributed across links  

---

### 3. Better Performance in Congested Environments
- Avoids interference by switching links  

---

## Comparison with Traditional Single-Link Operation

| Feature | Traditional WiFi | Wi-Fi 7 (MLO) |
|--------|------------------|---------------|
| Number of Links | One | Multiple |
| Throughput | Limited | Much higher |
| Latency | Higher | Lower |
| Reliability | Moderate | High |
| Channel Utilization | Limited | Efficient |

---

## Example Scenario

- Device connected to:
  - 5 GHz (moderate load)
  - 6 GHz (low load)

### Without MLO:
- Uses one band → limited performance  

### With MLO:
- Uses both bands simultaneously  
- Achieves:
  - Higher speed  
  - Lower delay  

---

## Key Takeaways

- MLO enables **multi-band, parallel communication**  
- Significantly boosts **throughput**  
- Reduces **latency and jitter**  
- Improves **reliability and efficiency**  

---

## Conclusion

Multi-Link Operation (MLO) is one of the most impactful innovations in Wi-Fi 7. By enabling simultaneous use of multiple frequency bands, it overcomes the limitations of single-link communication, delivering **ultra-high throughput, ultra-low latency, and robust connectivity** required for next-generation wireless applications.
