
# Fast BSS Transition (802.11r) and Its Benefits in Mobile Environments

## Overview

**IEEE 802.11r**, also known as **Fast BSS Transition (FT)**, is a standard designed to **reduce roaming delay** in WiFi networks. It enables a wireless client (STA) to quickly switch between Access Points (APs) within the same network **without redoing full authentication each time**.

This is especially important for **real-time applications** such as VoIP, video calls, and online gaming.

---

## Problem with Traditional Roaming

In normal WiFi roaming:

1. STA disconnects from current AP  
2. Performs:
   - Scanning  
   - Authentication  
   - Association  
   - Full security handshake (e.g., 4-way handshake)  

### Issue:
- Takes **100–300 ms or more**
- Causes:
  - Packet loss  
  - Voice/video interruptions  

---

## Concept of 802.11r (Fast BSS Transition)

802.11r **optimizes the roaming process** by allowing the STA to **pre-establish security credentials** with multiple APs.

---

## Key Idea

- Instead of performing a full authentication at every AP:
  - A **key hierarchy** is created  
  - Keys are **derived and shared in advance**  

---

## Key Components

### 1. PMK-R0 (Master Key)
- Derived from initial authentication  
- Stored at the network level  

---

### 2. PMK-R1 (Per-AP Key)
- Derived from PMK-R0  
- Distributed to target APs  

---

### 3. Mobility Domain
- Group of APs that support fast roaming  
- Identified by a **Mobility Domain ID (MDID)**  

---

## Fast Transition Process

### Two Modes

---

### 1. Over-the-Air FT

<img width="408" height="405" alt="image" src="https://github.com/user-attachments/assets/d9244ad3-6502-4a64-a3ce-bcd0477a0058" />

<img width="550" height="276" alt="image" src="https://github.com/user-attachments/assets/bd4b01c2-71a2-4cae-a944-ea08db9f9c0d" />

1. STA communicates directly with **target AP**  
2. Performs:
   - Fast authentication  
   - Reassociation  

---

### 2. Over-the-DS FT (Distribution System)

<img width="413" height="421" alt="image" src="https://github.com/user-attachments/assets/5dd4ebee-0014-40af-bbf3-f619b5259d73" />

<img width="550" height="356" alt="image" src="https://github.com/user-attachments/assets/4b0ddee6-7ab6-4ddc-ade3-be2ea33dceed" />

1. STA communicates via **current AP**  
2. Current AP coordinates with target AP  
3. Transition is prepared before moving  

---

## Simplified Flow


Initial Authentication → Key Derivation (PMK-R0, PMK-R1)
→ Fast Transition → Reassociation (No full handshake)



---

## Benefits of 802.11r

### 1. Reduced Roaming Latency
- Roaming delay reduced to **<50 ms**  
- Seamless transitions  

---

### 2. Minimal Packet Loss
- Maintains session continuity  
- No noticeable interruption  

---

### 3. Improved Real-Time Performance
- Ideal for:
  - VoIP calls  
  - Video conferencing  
  - AR/VR applications  

---

### 4. Reduced Authentication Overhead
- Avoids full re-authentication  
- Faster key exchange  

---

### 5. Better User Experience
- Smooth mobility across APs  
- No connection drops  

---

## Comparison: Traditional vs 802.11r Roaming

| Feature | Traditional Roaming | 802.11r (FT) |
|--------|--------------------|--------------|
| Authentication | Full every time | Pre-authenticated |
| Delay | High (100–300 ms) | Low (<50 ms) |
| Packet Loss | Noticeable | Minimal |
| Real-time Support | Poor | Excellent |

---

## Relationship with 802.11k and 802.11v

- **802.11k** → Helps find best AP  
- **802.11v** → Guides client to switch  
- **802.11r** → Makes switching fast  

Together, they enable **seamless roaming**.

---

## Use Cases

- Enterprise WiFi networks  
- Hospitals  
- Airports  
- Warehouses  
- Smart campuses  

---

## Conclusion

**802.11r Fast BSS Transition** is a critical enhancement for modern WiFi networks, enabling **fast, seamless roaming with minimal delay and packet loss**. By optimizing the authentication process and pre-distributing keys, it ensures reliable performance in **mobile and real-time communication environments**.
