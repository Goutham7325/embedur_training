# Purpose of IEEE 802.11k and 802.11v and Their Role in Roaming

## Overview

In WiFi networks, **roaming** refers to a client (STA) moving between Access Points (APs) while maintaining connectivity.  
Standards like **IEEE 802.11k** and **IEEE 802.11v** enhance roaming by improving **decision-making, efficiency, and user experience**.

They are often used alongside **802.11r (Fast BSS Transition)** for seamless roaming.

<img width="1233" height="496" alt="image" src="https://github.com/user-attachments/assets/94a7f06f-14c4-4ef6-a793-c7adbb11b736" />

---

## IEEE 802.11k – Radio Resource Management (RRM)

### Purpose

802.11k provides **information about the radio environment** to help clients make better roaming decisions.

---

### Key Features

<img width="550" height="402" alt="image" src="https://github.com/user-attachments/assets/a1fe7515-06ae-46b3-bf25-32023169d9fe" />

#### 1. Neighbor Reports
- AP provides a list of **neighboring APs**
- Includes:
  - Channel information  
  - BSSID  
  - Signal-related metrics  

---

#### 2. Channel Load Reports
- Indicates how busy a channel is  
- Helps STA avoid congested APs  

---

#### 3. Beacon Reports
- STA measures and reports signal strength of nearby APs  

---

### How 802.11k Aids Roaming

- Reduces need for full scanning  
- Speeds up AP discovery  
- Helps STA choose the **best candidate AP**  

---

## IEEE 802.11v – Network Assisted Roaming

### Purpose

802.11v allows the **network (AP/controller) to guide client behavior**, improving roaming efficiency and load balancing.

---

### Key Features

#### 1. BSS Transition Management
- AP suggests a better AP to the client  
- STA can accept or reject  

---

#### 2. Network-Assisted Roaming
- AP actively participates in roaming decisions  
- Reduces client-side guesswork  

---

#### 3. Load Balancing
- AP can redirect clients to less congested APs  

---

#### 4. Power Management Enhancements
- Works with mechanisms like TWT  
- Improves battery efficiency  

---

### How 802.11v Aids Roaming

- Provides **guided roaming decisions**  
- Prevents clients from sticking to weak APs  
- Improves overall network performance  

---

## Combined Role in Roaming

| Feature | 802.11k | 802.11v |
|--------|---------|---------|
| Function | Provides network information | Guides client decisions |
| Role | Measurement & reporting | Control & steering |
| Roaming Speed | Faster scanning | Faster decision-making |
| Efficiency | High | Very high |

---

## Roaming Process with 802.11k and 802.11v

1. STA receives **neighbor list (802.11k)**  
2. STA measures signal strength  
3. AP suggests better AP (**802.11v BSS Transition**)  
4. STA selects optimal AP  
5. Roaming occurs with minimal delay  

---

## Benefits

- Faster roaming  
- Reduced latency  
- Lower packet loss  
- Better user experience  
- Improved load distribution  
- Reduced scanning overhead  

---

## Key Insight

- **802.11k = "Where should I go?" (Information)**  
- **802.11v = "Go there" (Guidance)**  

---

## Conclusion

IEEE 802.11k and 802.11v significantly enhance WiFi roaming by combining **intelligent network awareness** with **network-assisted decision-making**. Together, they reduce roaming delays, improve performance, and enable seamless mobility in modern wireless networks.
