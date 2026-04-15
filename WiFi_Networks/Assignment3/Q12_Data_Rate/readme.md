# How Data Rate is Calculated in Wi-Fi (PHY Layer)

## 1. Introduction

The **data rate (throughput at PHY layer)** in Wi-Fi depends on multiple physical layer parameters such as:
- Modulation scheme  
- Coding rate  
- Channel bandwidth  
- Number of spatial streams  
- Guard interval  

---

## 2. General Formula for Data Rate

For OFDM-based Wi-Fi systems:

:contentReference[oaicite:0]{index=0}

---

## 3. Explanation of Parameters

### 3.1 Number of Subcarriers
- Depends on channel bandwidth:
  - 20 MHz → 52 data subcarriers  
  - 40 MHz → 108  
  - 80 MHz → 234  
  - 160 MHz → 468  

---

### 3.2 Bits per Subcarrier (Modulation)

| Modulation | Bits/Subcarrier |
|------------|----------------|
| BPSK | 1 |
| QPSK | 2 |
| 16-QAM | 4 |
| 64-QAM | 6 |
| 256-QAM | 8 |
| 1024-QAM | 10 |

---

### 3.3 Coding Rate

- Error correction factor  
- Common values:
  - 1/2  
  - 2/3  
  - 3/4  
  - 5/6  

---

### 3.4 Number of Spatial Streams

- Depends on MIMO:
  - 1 stream (SISO)  
  - 2, 3, 4 streams  

---

### 3.5 Symbol Duration

- Includes:
  - Useful symbol time  
  - Guard interval  

Typical values:
- Long GI → 4 µs  
- Short GI → 3.6 µs  

---

## 4. Example Calculation

### Example: 802.11n (20 MHz, 1 stream)

- Subcarriers = 52  
- Modulation = 64-QAM → 6 bits  
- Coding rate = 3/4  
- Symbol duration = 4 µs  

### Step Calculation

:contentReference[oaicite:1]{index=1}

### Result
- Data rate ≈ **58.5 Mbps**

---

## 5. Simplified Formula (Common Use)


Data Rate = (Bits per symbol × Number of symbols per second × Spatial streams)


---

## 6. Factors Affecting Data Rate

### 6.1 Channel Bandwidth
- Wider channel → more subcarriers → higher rate  

---

### 6.2 Modulation Scheme
- Higher QAM → more bits per symbol → higher rate  

---

### 6.3 Coding Rate
- Higher coding rate → less redundancy → higher rate  

---

### 6.4 MIMO (Spatial Streams)
- More streams → linear increase in throughput  

---

### 6.5 Guard Interval
- Short GI → more symbols per second → higher rate  

---

## 7. Example Across Standards

| Standard | Max Data Rate |
|----------|--------------|
| 802.11n | 600 Mbps |
| 802.11ac | ~6.9 Gbps |
| 802.11ax | ~9.6 Gbps |
| 802.11be | ~46 Gbps |

---

## 8. Key Insight

### Trade-offs
- Higher data rate requires:
  - Better signal quality (high SNR)  
  - Less interference  

---

## 9. Summary

Data rate in Wi-Fi depends on:
- Subcarriers (bandwidth)  
- Modulation (bits per symbol)  
- Coding rate  
- Spatial streams  
- Symbol duration  

---

## 10. Conclusion

Wi-Fi data rate is not fixed—it dynamically changes based on channel conditions and configuration. Modern Wi-Fi achieves high speeds by combining:
- High-order modulation  
- Wide channels  
- MIMO  
- Efficient symbol timing  
