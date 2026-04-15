# Modulation Schemes in the PHY Layer (Wi-Fi) and Their Performance

## 1. Introduction

In the PHY layer, **modulation** is the process of converting digital data (bits) into a form suitable for transmission over a wireless channel by altering a **carrier signal**.

Three main carrier properties can be modified:
- **Amplitude**
- **Frequency**
- **Phase**

Wi-Fi standards use different modulation schemes to balance:
- Data rate  
- Reliability  
- Spectral efficiency  

---

## 2. Basic Idea of Modulation

- Digital bits → mapped to symbols  
- Each symbol represents multiple bits  
- Higher-order modulation = more bits per symbol  

### Example
- BPSK → 1 bit per symbol  
- QPSK → 2 bits per symbol  
- 16-QAM → 4 bits per symbol  
- 64-QAM → 6 bits per symbol  
- 256-QAM → 8 bits per symbol  
- 1024-QAM → 10 bits per symbol  
- 4096-QAM → 12 bits per symbol  

---

## 3. Types of Modulation Used in Wi-Fi

## 3.1 DSSS (Direct Sequence Spread Spectrum)

### Used In
- 802.11b

### How it Works
- Data is spread using a pseudo-random code
- Uses **BPSK / QPSK / CCK**

### Characteristics
- Low data rate  
- High robustness  
- Good range  

---

## 3.2 OFDM (Orthogonal Frequency Division Multiplexing)

### Used In
- 802.11a/g/n/ac

### How it Works
- Splits channel into multiple **orthogonal subcarriers**
- Each subcarrier carries part of the data
- Uses QAM on each subcarrier

### Advantages
- High data rate  
- Resistant to multipath fading  
- Efficient spectrum usage  

---

## 3.3 OFDMA (Orthogonal Frequency Division Multiple Access)

### Used In
- 802.11ax (Wi-Fi 6), 802.11be (Wi-Fi 7)

### How it Works
- Extension of OFDM
- Divides subcarriers into groups (Resource Units)
- Multiple users share the channel simultaneously

### Advantages
- Better efficiency in dense networks  
- Reduced latency  
- Improved multi-user performance  

---

## 4. Common Modulation Schemes

## 4.1 BPSK (Binary Phase Shift Keying)

### Working
- Uses 2 phases (0° and 180°)
- Represents 1 bit per symbol

### Performance
- Very robust  
- Works at low SNR  
- Low data rate  

---

## 4.2 QPSK (Quadrature Phase Shift Keying)

### Working
- Uses 4 phases
- Represents 2 bits per symbol

### Performance
- Moderate data rate  
- Good reliability  

---

## 4.3 QAM (Quadrature Amplitude Modulation)

### Variants
- 16-QAM  
- 64-QAM  
- 256-QAM  
- 1024-QAM  
- 4096-QAM  

### Working
- Combines amplitude and phase changes
- Each symbol represents multiple bits

### Performance
- Higher data rates  
- Requires better signal quality (high SNR)  

---

## 5. Performance Comparison

| Modulation | Bits/Symbol | Data Rate | Noise Resistance | SNR Requirement |
|------------|------------|----------|------------------|-----------------|
| BPSK | 1 | Very Low | Very High | Very Low |
| QPSK | 2 | Low | High | Low |
| 16-QAM | 4 | Medium | Moderate | Medium |
| 64-QAM | 6 | High | Lower | High |
| 256-QAM | 8 | Very High | Low | Very High |
| 1024-QAM | 10 | Ultra High | Very Low | Very High |
| 4096-QAM | 12 | Extreme | Extremely Low | Extremely High |

---

## 6. Modulation Across Wi-Fi Standards

| Standard | Modulation Type | Max QAM | Notes |
|----------|----------------|---------|------|
| 802.11b | DSSS (BPSK/QPSK/CCK) | Low | Robust but slow |
| 802.11a/g | OFDM | 64-QAM | Faster, less range |
| 802.11n | OFDM + MIMO | 64-QAM | Higher throughput |
| 802.11ac | OFDM | 256-QAM | High-speed networks |
| 802.11ax | OFDMA | 1024-QAM | Efficient in dense networks |
| 802.11be | OFDMA | 4096-QAM | Ultra-high throughput |

---

## 7. Trade-Off: Data Rate vs Reliability

### Key Principle
- Higher-order modulation:
  - More bits per symbol  
  - Higher speed  
  - Lower reliability  

- Lower-order modulation:
  - Fewer bits per symbol  
  - Lower speed  
  - Higher reliability  

---

## 8. Adaptive Modulation in Wi-Fi

Wi-Fi devices dynamically adjust modulation based on channel conditions:

### Good Signal (High SNR)
- Use **256-QAM / 1024-QAM**
- Achieve high data rates  

### Poor Signal (Low SNR)
- Fall back to **QPSK / BPSK**
- Maintain connection reliability  

---

## 9. Key Observations

- Evolution trend:
  - DSSS → OFDM → OFDMA  
- Increasing QAM levels:
  - Improves throughput  
  - Requires better channel quality  
- Modern Wi-Fi focuses on:
  - Efficiency  
  - Multi-user support  
  - High-density environments  

---

## 10. Conclusion

Modulation schemes are central to PHY layer performance:
- They determine how efficiently data is transmitted  
- Different schemes offer trade-offs between **speed and robustness**

Modern Wi-Fi standards use advanced modulation like **1024-QAM and 4096-QAM** along with OFDMA to deliver high throughput while adapting to real-world conditions.
