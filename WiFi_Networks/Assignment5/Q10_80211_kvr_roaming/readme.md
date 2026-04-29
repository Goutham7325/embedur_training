# How 802.11k, 802.11v, and 802.11r Work Together for Seamless Roaming

## Overview

In enterprise WiFi networks, seamless roaming is achieved by combining three key IEEE standards:

- **802.11k** → Provides **radio environment awareness**
- **802.11v** → Provides **network-assisted client steering**
- **802.11r** → Provides **fast and secure handoff**

Together, they optimize **AP selection, decision-making, and transition speed**, ensuring uninterrupted connectivity.

---

## Roles of Each Standard

### 1. 802.11k – Neighbor Awareness

- Provides **Neighbor Reports**
- STA learns:
  - Nearby APs  
  - Channels  
  - Signal metrics  

<img width="827" height="341" alt="image" src="https://github.com/user-attachments/assets/770cafa5-571c-447c-a7f8-3560268bd5e4" />

### Role in Roaming:
- Reduces scanning time  
- Helps STA quickly identify candidate APs  

---

### 2. 802.11v – Network-Assisted Steering

- AP suggests better AP using:
  - **BSS Transition Management (BTM)**  
- Enables:
  - Load balancing  
  - Intelligent client movement  

<img width="835" height="425" alt="image" src="https://github.com/user-attachments/assets/a8d86c35-4c51-4b8c-9f86-483736a9e322" />

### Role in Roaming:
- Guides STA to optimal AP  
- Prevents “sticky client” problem  

---

### 3. 802.11r – Fast Transition

- Enables **fast reauthentication**  
- Uses:
  - PMK-R0 and PMK-R1 key hierarchy  

<img width="843" height="452" alt="image" src="https://github.com/user-attachments/assets/6c329439-fb7c-4e1d-9ecb-b1ab99332033" />

<img width="832" height="449" alt="image" src="https://github.com/user-attachments/assets/40e1a777-c840-4ce3-9ad4-7004c24b840f" />

### Role in Roaming:
- Reduces handoff delay  
- Ensures minimal packet loss  

---

## Combined Roaming Workflow

### Step-by-Step Process

<img width="837" height="531" alt="image" src="https://github.com/user-attachments/assets/db2345f1-81a2-452c-9030-222384735237" />

1. **Neighbor Discovery (802.11k)**
   - STA receives neighbor list from current AP  
   - No need for full channel scan  

---

2. **Decision Making (802.11v)**
   - AP recommends a better AP  
   - STA evaluates and decides to roam  

---

3. **Fast Transition (802.11r)**
   - STA performs fast authentication with target AP  
   - Skips full 4-way handshake  

---

4. **Reassociation**
   - STA connects to new AP with minimal delay  

---
## Simplified Flow


802.11k → Find candidate APs
802.11v → Select best AP
802.11r → Fast handoff


---

## Benefits of Combined Operation

<img width="1513" height="848" alt="image" src="https://github.com/user-attachments/assets/1d35f7ee-1671-42f3-8d7d-1f3646b2b96d" />

### 1. Faster Roaming
- Reduced scanning + fast authentication  

---

### 2. Lower Latency
- Transition delay reduced to **<50 ms**  

---

### 3. Minimal Packet Loss
- Maintains session continuity  

---

### 4. Improved User Experience
- Smooth voice/video calls  
- No noticeable disconnections  

---

### 5. Better Network Efficiency
- Load balancing across APs  
- Reduced congestion  

---

## Comparison: Without vs With 802.11k/v/r

| Feature | Without k/v/r | With k/v/r |
|--------|--------------|------------|
| AP Discovery | Slow | Fast |
| Roaming Decision | Client-only | Assisted |
| Authentication Time | High | Low |
| Roaming Delay | High | Very Low |
| User Experience | Interrupted | Seamless |

---

## Real-World Use Cases

- Enterprise campuses  
- Hospitals (critical mobility)  
- Warehouses (mobile scanners)  
- Airports and public WiFi  

---

## Key Insight

- **802.11k** → "Where are the APs?"  
- **802.11v** → "Which AP should I use?"  
- **802.11r** → "Switch quickly and securely"  

---

## Conclusion

The combination of **802.11k, 802.11v, and 802.11r** creates a powerful roaming framework for enterprise WiFi. By integrating **awareness, guidance, and fast transition**, these standards enable **seamless mobility, low latency, and high reliability**, making them essential for modern wireless networks.
