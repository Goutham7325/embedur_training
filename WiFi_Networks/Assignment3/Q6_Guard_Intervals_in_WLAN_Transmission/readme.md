# Role of Guard Intervals in WLAN Transmission and Impact of Short Guard Interval

## 1. Introduction

In WLAN systems (especially those using **OFDM**), a **Guard Interval (GI)** is a short time gap inserted between transmitted symbols.

### Purpose
- Prevent **inter-symbol interference (ISI)**
- Handle **multipath propagation**

---

## 2. Why Guard Interval is Needed

### 2.1 Multipath Propagation Problem

In wireless environments:
- Signals reflect off walls, furniture, and objects
- Multiple delayed copies of the same signal arrive at the receiver

### Effect
- Overlapping of symbols  
- Distortion of received data  
- Increased error rate  

---

## 3. What is Guard Interval?

### Definition
A **Guard Interval (GI)** is a time buffer inserted between consecutive OFDM symbols.

### Implementation
- Typically implemented as a **Cyclic Prefix (CP)**
- A portion of the end of the symbol is copied and added to the beginning

---

## 4. How Guard Interval Works

1. Transmitter sends an OFDM symbol  
2. A copy of the last part of the symbol is added at the front  
3. This creates a buffer zone  
4. Delayed signals (echoes) fall within this interval  
5. Receiver ignores GI and processes only the valid symbol  

---

## 5. Types of Guard Intervals in WLAN

| Type | Duration |
|------|---------|
| Long Guard Interval | 800 ns |
| Short Guard Interval (SGI) | 400 ns |

---

## 6. Role of Guard Interval

### 6.1 Eliminates Inter-Symbol Interference (ISI)
- Prevents overlap between adjacent symbols  

### 6.2 Handles Multipath Delay Spread
- Absorbs delayed signal reflections  

### 6.3 Maintains Orthogonality
- Ensures subcarriers in OFDM remain orthogonal  

### 6.4 Improves Reliability
- Reduces bit errors in complex environments  

---

## 7. Short Guard Interval (SGI)

### Definition
A **Short Guard Interval** reduces the GI duration from **800 ns to 400 ns**

---

## 8. How SGI Improves Efficiency

### 8.1 Reduced Overhead

- Guard interval does not carry new data  
- Shorter GI → less wasted time  

### Result
- More time available for actual data transmission  

---

### 8.2 Increased Throughput

- Shorter symbol duration  
- More symbols transmitted per second  

### Approx Gain
- **~10–11% increase in data rate**

---

### 8.3 Better Spectral Efficiency

- More efficient use of available bandwidth  
- Higher bits per second per Hz  

---

## 9. Trade-Offs of Short GI

### Advantages
- Higher throughput  
- Better efficiency  

### Disadvantages
- Less protection against multipath  
- More errors in:
  - Large indoor spaces  
  - High reflection environments  

---

## 10. When to Use SGI

### Suitable Conditions
- Strong signal (high SNR)  
- Low multipath delay  
- Short distance between AP and client  

### Not Suitable
- Large buildings  
- Outdoor environments with reflections  
- Weak signal conditions  

---

## 11. Summary

| Feature | Long GI (800 ns) | Short GI (400 ns) |
|--------|------------------|-------------------|
| Protection from ISI | High | Moderate |
| Data Rate | Lower | Higher |
| Efficiency | Lower | Higher |
| Reliability | Higher | Slightly lower |

---

## 12. Conclusion

The **Guard Interval** is essential in WLAN transmission to combat multipath interference and ensure reliable communication.

Using a **Short Guard Interval (SGI)** improves efficiency by reducing overhead and increasing throughput, but it must be used carefully depending on channel conditions.

### Key Insight:
- GI ensures **reliability**  
- SGI improves **efficiency**
