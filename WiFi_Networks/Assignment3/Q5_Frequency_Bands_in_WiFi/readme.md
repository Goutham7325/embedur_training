# Wi-Fi Frequency Bands and Their Channel Division

## 1. Introduction

Wi-Fi operates in **unlicensed frequency bands**, which are divided into smaller units called **channels**.  
Each channel represents a specific frequency range used for communication between devices.

The main Wi-Fi bands are:
- **2.4 GHz band**
- **5 GHz band**
- **6 GHz band (Wi-Fi 6E / Wi-Fi 7)**

---

## 2. Key Concepts

### 2.1 Channel
- A **channel** is a slice of the frequency band
- Devices communicate over a selected channel

### 2.2 Channel Width
- Determines how much data can be transmitted
- Common widths:
  - 20 MHz (basic)
  - 40 MHz
  - 80 MHz
  - 160 MHz
  - 320 MHz (Wi-Fi 7)

### 2.3 Overlapping vs Non-Overlapping Channels
- Overlapping channels interfere with each other  
- Non-overlapping channels can operate simultaneously without interference  

---

## 3. 2.4 GHz Band

### 3.1 Frequency Range
- **2.400 GHz – 2.4835 GHz**

### 3.2 Channel Division
- Total channels: **14** (region dependent)
- Each channel spacing: **5 MHz**
- Channel width: ~20 MHz → causes overlap

### 3.3 Channel List (Common)

| Channel | Center Frequency (GHz) |
|--------|------------------------|
| 1 | 2.412 |
| 2 | 2.417 |
| 3 | 2.422 |
| ... | ... |
| 11 | 2.462 |
| 14 | 2.484 (Japan only) |

### 3.4 Non-Overlapping Channels
- **1, 6, 11** (most commonly used)

### 3.5 Key Point
- Limited number of usable channels → **high congestion**

---

## 4. 5 GHz Band

### 4.1 Frequency Range
- ~**5.150 GHz – 5.825 GHz**

### 4.2 Band Subdivisions

The 5 GHz band is divided into sub-bands:

- **UNII-1**: Channels 36–48  
- **UNII-2**: Channels 52–64  
- **UNII-2 Extended**: Channels 100–144  
- **UNII-3**: Channels 149–165  

---

### 4.3 Channel List (20 MHz)

| Range | Channels |
|------|----------|
| UNII-1 | 36, 40, 44, 48 |
| UNII-2 | 52, 56, 60, 64 |
| UNII-2e | 100–144 |
| UNII-3 | 149, 153, 157, 161, 165 |

### 4.4 Channel Width Support
- 20 MHz → base channels  
- 40 MHz → combine 2 channels  
- 80 MHz → combine 4 channels  
- 160 MHz → combine 8 channels  

### 4.5 Special Note
- Some channels require **DFS (Dynamic Frequency Selection)** due to radar systems

---

## 5. 6 GHz Band (Wi-Fi 6E / Wi-Fi 7)

### 5.1 Frequency Range
- **5.925 GHz – 7.125 GHz** (varies by country)

### 5.2 Channel Division

- Large number of channels available  
- Designed for **wide channel usage**

### 5.3 Channel Availability

| Channel Width | Approx Number of Channels |
|--------------|--------------------------|
| 20 MHz | ~59 channels |
| 40 MHz | ~29 channels |
| 80 MHz | ~14 channels |
| 160 MHz | ~7 channels |
| 320 MHz | ~3 channels (Wi-Fi 7) |

### 5.4 Key Advantage
- All channels are **non-overlapping**
- Clean spectrum with minimal interference

---

## 6. Comparison of Bands and Channels

| Feature | 2.4 GHz | 5 GHz | 6 GHz |
|--------|--------|-------|-------|
| Frequency Range | 2.4 GHz | 5 GHz | 6 GHz |
| Total Channels | Few (14) | Moderate | Many |
| Non-overlapping Channels | 3 | Many | All |
| Channel Width | 20 MHz | Up to 160 MHz | Up to 320 MHz |
| Interference | High | Medium | Very Low |

---

## 7. Summary

- **2.4 GHz**
  - Few channels, high overlap  
  - Best for coverage, but congested  

- **5 GHz**
  - More channels, less interference  
  - Supports higher speeds  

- **6 GHz**
  - Many wide, non-overlapping channels  
  - Best for high-speed, low-latency applications  

---

## 8. Conclusion

Wi-Fi frequency bands are divided into channels to allow multiple devices to communicate efficiently.  
As we move from **2.4 GHz → 5 GHz → 6 GHz**, we get:
- More channels  
- Wider bandwidth  
- Less interference  

This evolution enables modern Wi-Fi to support high-speed and high-density wireless environments.
