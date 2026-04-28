# Medium Access Control Methodologies (IEEE 802.11)

## Overview

In wireless networks, multiple devices share the same transmission medium. The **Medium Access Control (MAC) methodologies** define how devices coordinate access to this shared channel to avoid collisions and ensure efficient communication.

IEEE 802.11 primarily uses **contention-based** and **controlled access** mechanisms.

---

## 1. Distributed Coordination Function (DCF)

### Definition
DCF is the **default and mandatory access method** in IEEE 802.11. It is a **contention-based protocol** using **CSMA/CA (Carrier Sense Multiple Access with Collision Avoidance)**.

---

### Working of DCF

1. **Carrier Sensing**
   - STA listens to the channel
   - If idle → proceed
   - If busy → wait

2. **Interframe Space (DIFS)**
   - STA waits for **DIFS (Distributed Interframe Space)** before transmitting

3. **Backoff Mechanism**
   - STA selects a random backoff time within a contention window
   - Counter decreases when channel is idle
   - Freezes when channel becomes busy

4. **Transmission**
   - When backoff reaches zero, STA transmits

5. **Acknowledgment (ACK)**
   - Receiver sends ACK after **SIFS**
   - If no ACK → retransmission occurs

---

### Collision Avoidance

- Uses **CSMA/CA**, not collision detection
- Optional **RTS/CTS mechanism**:
  - RTS (Request to Send)
  - CTS (Clear to Send)
- Helps avoid **hidden node problem**

---

### Characteristics

- Distributed and decentralized  
- Fair access among stations  
- Suitable for general-purpose communication  

---

## 2. Point Coordination Function (PCF)

### Definition

PCF is a **centralized, contention-free access method** where the AP controls medium access.

---

### Working of PCF

1. AP acts as **Point Coordinator (PC)**  
2. Time is divided into:
   - **Contention-Free Period (CFP)**
   - **Contention Period (CP)**  

3. During CFP:
   - AP polls stations sequentially  
   - Only polled station can transmit  

4. After CFP:
   - DCF resumes during CP  

---

### Characteristics

- No collisions during CFP  
- Supports time-sensitive traffic  
- Rarely implemented in real systems  

---

## 3. Hybrid Coordination Function (HCF)

Introduced in **IEEE 802.11e** to support **Quality of Service (QoS)**.

HCF combines advantages of DCF and PCF.

---

### Components of HCF

#### a. Enhanced Distributed Channel Access (EDCA)

- Extension of DCF with **priority-based access**
- Traffic divided into **Access Categories (AC)**:
  - Voice (highest priority)
  - Video
  - Best effort
  - Background (lowest priority)

---

#### EDCA Working

- Each category has:
  - Different **contention window sizes**
  - Different **Interframe Spaces (AIFS)**  
- Higher priority traffic:
  - Smaller backoff
  - Faster access to medium  

---

#### b. HCF Controlled Channel Access (HCCA)

- Centralized polling by AP (Hybrid Coordinator)  
- Similar to PCF but more flexible  
- Supports **QoS guarantees**

---

### Characteristics

- Provides traffic prioritization  
- Supports real-time applications  
- Widely used (EDCA is standard in modern WiFi)  

---

## 4. CSMA/CA (Core Mechanism)

### Key Features

- **Carrier Sensing**:
  - Physical sensing (detect signal energy)
  - Virtual sensing using **NAV (Network Allocation Vector)**  

- **Collision Avoidance**:
  - Random backoff
  - RTS/CTS (optional)

- **Interframe Spaces**:
  - SIFS (highest priority)
  - PIFS
  - DIFS
  - AIFS (QoS-based)

---

## Comparison of MAC Methodologies

| Method | Type | Control | QoS Support | Usage |
|-------|------|--------|------------|------|
| DCF | Contention-based | Distributed | No | Default (all networks) |
| PCF | Contention-free | Centralized (AP) | Limited | Rarely used |
| EDCA | Contention-based | Distributed | Yes | Widely used |
| HCCA | Controlled | Centralized (AP) | Strong QoS | Limited use |

---

## Key Concepts

- **Contention-based access** → Devices compete for medium  
- **Contention-free access** → AP schedules transmissions  
- **QoS-aware access** → Priority-based transmission  

---

## Conclusion

IEEE 802.11 MAC methodologies provide flexible mechanisms to manage medium access. While **DCF (CSMA/CA)** remains the foundation, enhancements like **EDCA and HCF** enable efficient handling of modern applications such as voice and video. Centralized methods like **PCF and HCCA** offer controlled access but are less commonly implemented in practice.
