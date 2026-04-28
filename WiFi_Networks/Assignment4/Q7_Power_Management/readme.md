# Power Saving in MAC Layer (IEEE 802.11)

## Overview

The **power-saving scheme in the MAC layer** of IEEE 802.11 (WiFi) is designed to reduce energy consumption in wireless devices, especially battery-powered clients like smartphones and laptops.

Since wireless communication requires continuous listening, the MAC layer introduces mechanisms that allow stations (STAs) to **enter low-power (sleep) states** while still maintaining connectivity with the Access Point (AP).

---

## Basic Concept

- The STA alternates between:
  - **Awake state** → Can transmit/receive frames  
  - **Doze (sleep) state** → Radio is turned off to save power  

- The AP **buffers frames** destined for sleeping STAs  
- STA periodically wakes up to check if data is available  

---

## Key Components

### 1. Beacon Frames
- Sent periodically by the AP  
- Contain **Traffic Indication Map (TIM)**  
- Helps STAs know if the AP has buffered data  

---

### 2. Traffic Indication Map (TIM)

<img width="768" height="155" alt="image" src="https://github.com/user-attachments/assets/dadd5479-7891-4307-8993-341c02b3cee9" />

- A bitmap included in beacon frames  
- Indicates which STAs have pending data  
- Each STA checks its **Association ID (AID)** in the TIM  

---

### 3. Delivery Traffic Indication Message (DTIM)

- Special type of TIM  
- Indicates presence of:
  - **Broadcast**
  - **Multicast traffic**  
- Sent at regular intervals (DTIM period)  

---

### 4. PS-Poll Frame

<img width="716" height="354" alt="image" src="https://github.com/user-attachments/assets/3d3ab1c3-6af2-48f2-bfbd-0c4deb81fa5b" />

<img width="706" height="180" alt="image" src="https://github.com/user-attachments/assets/400a2d8d-337f-4c65-a25d-06dc5f969b88" />

- Sent by STA to AP to request buffered data  
- Used in legacy power-saving mode  

---

## Power Saving Mechanisms

IEEE 802.11 defines multiple power-saving schemes:

---

## 1. Legacy Power Save Mode (PSM)

### Working:

1. STA informs AP that it is entering sleep mode  
2. AP buffers incoming frames for the STA  
3. STA wakes up at **beacon intervals**  
4. STA checks TIM:
   - If data exists → sends **PS-Poll**  
5. AP transmits buffered frames  

### Features:

- Simple implementation  
- Works in all WiFi standards  

### Limitations:

- Higher latency  
- Inefficient for high-throughput applications  

---

## 2. Automatic Power Save Delivery (APSD)

Introduced in **IEEE 802.11e** for QoS support.

### Types of APSD:

#### a. Scheduled APSD (S-APSD)
- AP schedules delivery times  
- STA wakes at predefined intervals  

#### b. Unscheduled APSD (U-APSD)
- STA sends a trigger frame  
- AP responds with buffered data  

### Advantages:

- Reduced latency  
- Better suited for real-time applications (VoIP, video)  
- More efficient than legacy PSM  

---

## 3. WMM Power Save (WiFi Multimedia Power Save)

- Based on **U-APSD**  
- Used in modern WiFi devices  
- Supports traffic prioritization:
  - Voice
  - Video
  - Best effort
  - Background  

### Features:

- Low latency  
- Efficient for multimedia traffic  
- Widely implemented  

---

## 4. Power Save Multi-Poll (PSMP)

- Introduced in **802.11n**  
- AP controls when STAs can transmit/receive  

### Working:

- AP sends a schedule to multiple STAs  
- Each STA wakes up only during assigned time slots  

### Advantages:

- Efficient in dense networks  
- Reduces contention  

---

## 5. Target Wake Time (TWT)

- Introduced in **802.11ax (WiFi 6)**  

### Working:

- STA and AP negotiate specific wake-up times  
- STA sleeps for longer durations  

### Types:

- **Individual TWT** → Per-device scheduling  
- **Broadcast TWT** → Shared schedule for multiple devices  

### Advantages:

- Significant power savings  
- Reduced contention and interference  
- Ideal for IoT devices  

---

## Comparison of Power Saving Mechanisms

| Mechanism | Standard | Efficiency | Latency | Use Case |
|----------|----------|-----------|--------|----------|
| Legacy PSM | 802.11 | Low | High | Basic devices |
| APSD | 802.11e | Medium | Low | Voice/Video |
| WMM PS | 802.11e | High | Low | Multimedia |
| PSMP | 802.11n | High | Medium | Dense networks |
| TWT | 802.11ax | Very High | Low | IoT, modern WiFi |

---

## Key Benefits

- Reduces battery consumption  
- Maintains connectivity while sleeping  
- Optimizes network efficiency  
- Supports modern applications with QoS  

---

## Conclusion

The MAC layer power-saving schemes in IEEE 802.11 evolve from simple sleep mechanisms to advanced scheduling techniques like **TWT**. These mechanisms balance **energy efficiency, latency, and throughput**, making WiFi suitable for both high-performance devices and low-power IoT applications.
