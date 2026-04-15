# Split-MAC Architecture in Wireless Networks

## 1. Introduction
**Split-MAC (Split Media Access Control)** is a wireless architecture used in controller-based Wi-Fi networks where MAC layer functions are divided between:
- **Access Point (AP)** – Handles time-critical, real-time operations  
- **Wireless LAN Controller (WLC)** – Handles centralized, non-time-critical operations  

This architecture is widely used in **Lightweight Access Points (LAPs)**.

---

## 2. Why Split-MAC?
In traditional (autonomous) APs:
- Each AP performs **all MAC functions independently**
- Configuration, security, and management must be done **per AP**
- Scaling becomes difficult in large deployments

**Split-MAC solves this by centralizing intelligence in the controller while keeping fast operations at the AP.**

---

## 3. MAC Layer Functions Split

###  Functions handled by AP (Real-Time / Time-Critical)
These require immediate response and cannot tolerate delay:
- Beacon transmission
- Probe request/response handling
- Frame acknowledgment (ACK)
- RTS/CTS handling
- Encryption/Decryption (in some designs)
- Packet buffering and retransmission
- PHY layer interaction (radio transmission)

 These are kept at the AP to ensure **low latency and fast response**

---

###  Functions handled by WLC (Non-Time-Critical)
These involve decision-making and network-wide policies:
- Authentication (802.1X, WPA/WPA2/WPA3)
- Association and re-association control
- Roaming decisions
- RF management (channel, power control)
- QoS enforcement
- Security policies (ACLs, firewall rules)
- Client session management

These are centralized for **better control and consistency**

---

## 4. How Split-MAC Works (Basic Flow)

1. Client sends a **probe request**
2. AP responds immediately (real-time function)
3. Client attempts **authentication/association**
4. AP forwards request to WLC via **CAPWAP tunnel**
5. WLC processes:
   - Authentication
   - Policy enforcement
6. WLC sends decision back to AP
7. AP completes association with client

---

## 5. Role of CAPWAP in Split-MAC
- **CAPWAP (Control And Provisioning of Wireless Access Points)** is the protocol used between AP and WLC
- Two tunnels:
  - **Control Tunnel** → management & signaling
  - **Data Tunnel** → client traffic (in some modes)

---

## 6. Advantages of Split-MAC

###  Improved Performance
- Time-sensitive tasks stay at AP → **low latency**
- Controller handles heavy processing → **reduced AP load**

---

###  Centralized Management
- Configure hundreds of APs from a **single controller**
- Easier updates and troubleshooting

---

###  Better Scalability
- Adding new APs is simple (plug-and-play)
- Ideal for large networks (campus, enterprises)

---

###  Enhanced Security
- Centralized authentication and policy enforcement
- Consistent security across all APs

---

###  Efficient Roaming
- Controller manages client movement between APs
- Enables **fast and seamless roaming**

---

## 7. Performance Improvements Explained

| Feature | Without Split-MAC (Autonomous AP) | With Split-MAC |
|--------|----------------------------------|----------------|
| Processing Load | High on each AP | Distributed (AP + WLC) |
| Response Time | May vary per AP | Consistent and optimized |
| Roaming | Slower | Faster (controller-assisted) |
| Configuration | Manual per AP | Centralized |
| Scalability | Limited | High |

---

## 8. Limitations of Split-MAC

- Dependency on WLC:
  - If controller fails → AP functionality may be affected
- CAPWAP overhead:
  - Additional encapsulation adds slight delay
- Requires controller infrastructure (cost)

---

## 9. Summary

Split-MAC architecture:
- Divides MAC functions between AP and controller
- Keeps **real-time operations local** (AP)
- Centralizes **intelligence and control** (WLC)

 Result:  
**Better performance, scalability, security, and manageability in modern wireless networks**

---
