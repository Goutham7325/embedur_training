# PPDU, PLCP, and PMD in the 802.11 PHY Layer

## 1. Introduction

In the IEEE 802.11 PHY layer, data transmission is organized into structured units and sublayers to ensure proper communication over the wireless medium.

Three key terms are:
- **PPDU (PLCP Protocol Data Unit)**
- **PLCP (Physical Layer Convergence Protocol)**
- **PMD (Physical Medium Dependent sublayer)**

These define how data is **formatted, processed, and transmitted** over the air.

---

## 2. PPDU (PLCP Protocol Data Unit)

## 2.1 Definition

**PPDU** is the **actual PHY layer frame** that is transmitted over the wireless medium.

It is formed by adding PHY-specific information to the MAC layer data.

---

## 2.2 Structure of PPDU


| Preamble | PLCP Header | PSDU |


- **Preamble** → Synchronization and channel estimation  
- **PLCP Header** → Transmission parameters  
- **PSDU** → Payload (MAC frame)

---

## 2.3 Key Points

- PPDU is what is **physically transmitted over air**
- It encapsulates MAC layer data
- Format varies slightly across standards (OFDM, DSSS, etc.)

---

## 3. PLCP (Physical Layer Convergence Protocol)

## 3.1 Definition

**PLCP** is a sublayer of the PHY layer that acts as an **interface between MAC layer and physical transmission (PMD)**.

---

## 3.2 Functions of PLCP

- Converts **MAC frame (MSDU/MPDU)** into **PSDU**
- Adds:
  - Preamble  
  - PLCP header  
- Prepares data for transmission

---

## 3.3 Responsibilities

- Frame formatting  
- Synchronization support  
- Providing transmission parameters:
  - Data rate  
  - Length  
  - Modulation scheme  

---

## 3.4 Output of PLCP

- Produces **PPDU**, which is passed to PMD for transmission

---

## 4. PMD (Physical Medium Dependent Sublayer)

## 4.1 Definition

**PMD** is the lower sublayer of PHY responsible for **actual signal transmission and reception** over the medium.

---

## 4.2 Functions of PMD

- Modulation and demodulation  
- Signal transmission over RF  
- Frequency selection  
- Power control  
- Encoding/decoding of bits into signals  

---

## 4.3 Responsibilities

- Converts digital data into analog RF signals  
- Handles:
  - OFDM / DSSS modulation  
  - Carrier generation  
  - Signal amplification  

---

## 5. Relationship Between PPDU, PLCP, and PMD

### Transmission Flow

1. MAC layer generates frame  
2. PLCP:
   - Adds header and preamble  
   - Forms PPDU  
3. PMD:
   - Modulates signal  
   - Transmits over air  

---

### Reception Flow

1. PMD receives RF signal  
2. Demodulates into digital data  
3. PLCP:
   - Interprets header  
   - Extracts PSDU  
4. Passes data to MAC layer  

---

## 6. Comparison

| Component | Role | Layer Position |
|----------|------|----------------|
| PPDU | Actual transmitted frame | PHY output |
| PLCP | Formatting and interface | Upper PHY |
| PMD | Signal transmission | Lower PHY |

---

## 7. Simple Analogy

- **PLCP** → Prepares a parcel (adds label, packaging)  
- **PPDU** → Final packaged parcel ready to ship  
- **PMD** → Delivery system (truck sending parcel over road)  

---

## 8. Summary

- **PPDU**: The complete PHY frame transmitted over air  
- **PLCP**: Prepares and formats data into PPDU  
- **PMD**: Handles actual transmission using radio signals  

---

## 9. Conclusion

These three components work together to ensure reliable wireless communication:
- PLCP bridges MAC and PHY  
- PMD handles real-world transmission  
- PPDU is the final transmitted unit  

Together, they form the foundation of the **802.11 PHY layer operation**.
