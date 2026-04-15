# Types of PPDU and Frame Formats Across Wi-Fi Generations

## 1. Introduction

A **PPDU (PLCP Protocol Data Unit)** is the PHY layer frame transmitted over the air in IEEE 802.11.  
Its structure evolves across Wi-Fi generations to support higher data rates, MIMO, and multi-user communication.

---

## 2. General PPDU Structure


| Preamble | PHY Header | Data (PSDU) |


### Components
- **Preamble** → Synchronization, channel estimation  
- **PHY Header** → Transmission parameters (rate, length)  
- **PSDU** → MAC layer data  

---

## 3. Types of PPDU Across Wi-Fi Standards

PPDU formats vary depending on the PHY technology used.

---

## 3.1 DSSS PPDU (802.11b)

### Structure

| Sync | SFD | Signal | Service | Length | CRC | PSDU |


### Components
- **Sync** → Receiver synchronization  
- **SFD (Start Frame Delimiter)** → Frame start indication  
- **Signal** → Data rate  
- **Service** → Reserved  
- **Length** → Payload size  
- **CRC** → Error detection  
- **PSDU** → Data  

### Characteristics
- Simple structure  
- Low data rate  
- Robust transmission  

---

## 3.2 OFDM PPDU (802.11a/g)

### Structure

| STF | LTF | SIGNAL | DATA |


### Components
- **STF (Short Training Field)** → Detection, AGC  
- **LTF (Long Training Field)** → Channel estimation  
- **SIGNAL** → Rate, length  
- **DATA** → PSDU  

### Characteristics
- Introduces OFDM  
- Higher data rates  
- Better multipath handling  

---

## 3.3 HT PPDU (802.11n)

### Types
- **HT-Mixed Format**
- **HT-Greenfield Format**

---

### HT-Mixed Format (Backward Compatible)


| Legacy STF | Legacy LTF | Legacy SIGNAL |
| HT-SIG | HT-STF | HT-LTF(s) | DATA |


### Features
- Backward compatibility with older devices  
- Supports **MIMO**  

---

### HT-Greenfield Format


| HT-STF | HT-LTF(s) | HT-SIG | DATA |


### Features
- No legacy support  
- More efficient  

---

## 3.4 VHT PPDU (802.11ac)

### Structure

| L-STF | L-LTF | L-SIG |
| VHT-SIG-A | VHT-STF | VHT-LTF(s) | VHT-SIG-B | DATA |


### Components
- **L- fields** → Legacy compatibility  
- **VHT-SIG-A/B** → Configuration and user info  
- **VHT-LTF** → Channel estimation for MIMO  

### Features
- Supports **MU-MIMO (downlink)**  
- Higher bandwidth (80/160 MHz)  
- 256-QAM  

---

## 3.5 HE PPDU (802.11ax – Wi-Fi 6)

### Structure

| L-STF | L-LTF | L-SIG |
| HE-SIG-A | HE-STF | HE-LTF(s) | HE-SIG-B | DATA |


### Components
- **HE-SIG-A/B** → Resource allocation (OFDMA)  
- **HE-LTF** → Multi-user channel estimation  

### Features
- Supports **OFDMA**  
- Uplink and downlink MU-MIMO  
- Improved efficiency in dense networks  

---

## 3.6 EHT PPDU (802.11be – Wi-Fi 7)

### Structure (Simplified)

| Legacy Fields | EHT-SIG | EHT-STF | EHT-LTF(s) | DATA |


### Features
- **Multi-Link Operation (MLO)**  
- 320 MHz bandwidth  
- 4096-QAM  
- Enhanced multi-user support  

---

## 4. Comparison of PPDU Types

| Standard | PPDU Type | Key Features |
|----------|-----------|--------------|
| 802.11b | DSSS PPDU | Simple, low rate |
| 802.11a/g | OFDM PPDU | Higher speed |
| 802.11n | HT PPDU | MIMO, higher throughput |
| 802.11ac | VHT PPDU | MU-MIMO, wide channels |
| 802.11ax | HE PPDU | OFDMA, high efficiency |
| 802.11be | EHT PPDU | Ultra-high speed, multi-link |

---

## 5. Evolution Trends

### 5.1 Increasing Complexity
- More fields added for:
  - Multi-user support  
  - Channel estimation  
  - Resource allocation  

---

### 5.2 Backward Compatibility
- Legacy fields retained in newer formats  
- Ensures older devices can detect transmissions  

---

### 5.3 Support for Advanced Technologies
- MIMO → HT  
- MU-MIMO → VHT  
- OFDMA → HE  
- Multi-link → EHT  

---

## 6. Key Observations

- Early PPDUs were **simple and single-user**  
- Modern PPDUs are:
  - Multi-user aware  
  - Highly optimized  
  - Designed for dense environments  

---

## 7. Summary

- PPDU is the **transmitted PHY frame**  
- Its structure evolves with Wi-Fi standards  
- Each generation adds:
  - Better efficiency  
  - Higher throughput  
  - Multi-user capabilities  

---

## 8. Conclusion

The evolution of PPDU formats reflects the advancement of Wi-Fi technology. From simple DSSS frames to complex multi-user OFDMA-based structures, PPDU design plays a critical role in achieving high-performance wireless communication.
