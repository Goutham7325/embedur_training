# Scanning Process in IEEE 802.11 (WiFi)

## Overview

**Scanning** is the process by which a wireless station (STA), such as a laptop or smartphone, discovers available wireless networks (Access Points - APs). It is the **first step before authentication and association** in a WiFi network.

The scanning process allows a device to:
- Identify nearby APs
- Learn network parameters (SSID, channel, capabilities)
- Select the best AP for connection

---

## Types of Scanning

IEEE 802.11 defines two main types of scanning:

1. **Passive Scanning**
2. **Active Scanning**

---

## 1. Passive Scanning

### Definition
In passive scanning, the STA **listens for beacon frames** transmitted periodically by Access Points.
<img width="504" height="447" alt="image" src="https://github.com/user-attachments/assets/fb288226-8797-49e0-8ee0-eb044791f396" />

### Process Steps

1. STA tunes to a specific channel  
2. Waits for **beacon frames** from APs  
3. Extracts information such as:
   - SSID
   - Supported data rates
   - Security parameters
   - Timestamp and beacon interval  
4. Moves to the next channel and repeats  

### Characteristics

- No transmission from STA (only listening)
- Relies on periodic beacon intervals
- Slower compared to active scanning
- Lower power consumption

### Advantages

- Energy efficient  
- Less network traffic overhead  
- Mandatory in some regulatory domains  

### Disadvantages

- Higher latency (waiting for beacon interval)  
- May miss hidden or low-signal APs  

---

## 2. Active Scanning
<img width="600" height="377" alt="image" src="https://github.com/user-attachments/assets/ecb52756-24e9-412d-a19c-ec29fcb8b72b" />

### Definition
In active scanning, the STA **actively sends probe request frames** and waits for responses from APs.

### Process Steps

1. STA broadcasts a **Probe Request** frame  
   - Can include specific SSID or be a wildcard  
2. APs receiving the request respond with **Probe Response** frames  
3. STA collects information similar to beacon frames  
4. STA moves across channels and repeats  

### Characteristics

- STA initiates communication  
- Faster discovery process  
- Higher power consumption  

### Advantages

- Faster than passive scanning  
- Can discover hidden SSIDs (if probe matches)  
- More proactive and efficient  

### Disadvantages

- Increased network overhead  
- Consumes more battery  
- May cause congestion in dense environments  

---

## Comparison of Passive vs Active Scanning

| Feature              | Passive Scanning        | Active Scanning        |
|---------------------|------------------------|------------------------|
| STA Transmission    | No                     | Yes (Probe Request)    |
| Speed               | Slower                 | Faster                 |
| Power Consumption   | Low                    | Higher                 |
| Network Overhead    | Minimal                | Higher                 |
| Hidden SSID Support | Limited                | Supported              |

---

## Additional Notes

- Scanning can be **full scan** (all channels) or **partial scan** (selected channels)  
- Devices often use a hybrid approach:
  - Passive scanning for background discovery  
  - Active scanning for quick connection  

- Modern WiFi standards optimize scanning to reduce:
  - Connection delay  
  - Power usage  

---

## Conclusion

Scanning is a critical MAC layer function in WiFi that enables devices to discover and connect to networks. While **passive scanning** is energy-efficient and less intrusive, **active scanning** provides faster and more reliable discovery. The choice between them depends on factors like power constraints, latency requirements, and network environment.
