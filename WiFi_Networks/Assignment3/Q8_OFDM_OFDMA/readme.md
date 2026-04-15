# Difference Between OFDM and OFDMA

## 1. Introduction

**OFDM (Orthogonal Frequency Division Multiplexing)** and **OFDMA (Orthogonal Frequency Division Multiple Access)** are closely related technologies used in Wi-Fi PHY layer.

- **OFDM** → Single-user transmission technique  
- **OFDMA** → Multi-user extension of OFDM  

---

## 2. What is OFDM?

### Definition
OFDM divides a channel into multiple **orthogonal subcarriers**, and all subcarriers are used by **one user at a time**.

### Key Idea
- One user occupies the **entire bandwidth** during transmission  

### Used In
- 802.11a/g/n/ac  

---

## 3. What is OFDMA?

### Definition
OFDMA divides subcarriers into groups called **Resource Units (RUs)** and assigns them to **multiple users simultaneously**.

### Key Idea
- Multiple users share the channel at the same time  

### Used In
- 802.11ax (Wi-Fi 6)  
- 802.11be (Wi-Fi 7)  

---

## 4. Working Principle

### 4.1 OFDM

1. Channel is divided into subcarriers  
2. All subcarriers assigned to one user  
3. Data transmitted in parallel  

---

### 4.2 OFDMA

1. Channel divided into subcarriers  
2. Subcarriers grouped into Resource Units (RUs)  
3. Different users assigned different RUs  
4. Multiple users transmit simultaneously  

---

## 5. Key Differences

| Feature | OFDM | OFDMA |
|--------|------|--------|
| Access Type | Single-user | Multi-user |
| Channel Usage | Entire channel per user | Shared among users |
| Efficiency | Lower in multi-user scenarios | Higher |
| Latency | Higher | Lower |
| Scheduling | Not required | Required (by AP) |
| Complexity | Simpler | More complex |
| Use Case | High throughput for one user | Many users with smaller data |

---

## 6. Performance Comparison

### 6.1 Efficiency

- OFDM:
  - Inefficient when many users send small data  
- OFDMA:
  - Efficient for multiple small transmissions  

---

### 6.2 Latency

- OFDM:
  - Users must wait for their turn  
- OFDMA:
  - Multiple users transmit at once → lower delay  

---

### 6.3 Spectrum Utilization

- OFDM:
  - Wastes bandwidth when traffic is light  
- OFDMA:
  - Allocates only required subcarriers → better utilization  

---

## 7. Example (Simple Analogy)

### OFDM
- One person uses the entire highway  

### OFDMA
- Multiple people use different lanes of the highway simultaneously  

---

## 8. Advantages of OFDMA Over OFDM

- Supports multiple users simultaneously  
- Better performance in dense environments  
- Reduced contention and collisions  
- Improved battery life (Target Wake Time support)  

---

## 9. When Each is Used

| Scenario | Preferred Technique |
|----------|--------------------|
| Single user, high bandwidth | OFDM |
| Many users, small packets | OFDMA |
| Dense environments (campus, stadium) | OFDMA |

---

## 10. Summary

- **OFDM** → Divides frequency into subcarriers for one user  
- **OFDMA** → Divides subcarriers among multiple users  

### Core Difference:
- OFDM = **Frequency division**  
- OFDMA = **Frequency division + multiple access**

---

## 11. Conclusion

OFDMA builds upon OFDM to improve efficiency and scalability in modern Wi-Fi networks. It is especially important in environments with many connected devices, where efficient spectrum sharing is critical.
