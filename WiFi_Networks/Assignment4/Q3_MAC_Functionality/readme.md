# MAC Layer Functionalities (IEEE 802.11)

The **MAC (Media Access Control) layer** in IEEE 802.11 (WiFi) is responsible for coordinating access to the wireless medium and ensuring reliable communication. Its functionalities are broadly divided into three planes:

- **Management Plane**
- **Control Plane**
- **Data Plane**

---

## 1. Management Plane Functionalities

The **Management Plane** handles network setup, maintenance, and coordination between devices and Access Points (APs).
<img width="1228" height="803" alt="image" src="https://github.com/user-attachments/assets/1f7fd837-0cc9-4d6a-91a7-3e470de4aa01" />

### Key Functions:

- **Beaconing**
  - AP periodically broadcasts beacon frames
  - Advertises network parameters (SSID, supported rates, timing info)

- **Scanning**
  - **Passive scanning**: listening to beacon frames
  - **Active scanning**: sending probe requests and receiving probe responses

- **Authentication**
  - Establishes identity of a station (STA) with the AP
  - Can be open, shared key, or WPA/WPA2/WPA3-based

- **Association / Reassociation**
  - STA joins an AP and becomes part of the BSS
  - Reassociation allows roaming between APs

- **Disassociation / Deauthentication**
  - Terminates connection between STA and AP

- **Synchronization**
  - Maintains timing synchronization using beacon timestamps

- **Power Management**
  - Stations enter sleep mode to save power
  - AP buffers frames for sleeping stations
  - Traffic Indication Map (TIM) used to notify buffered data

- **Radio Resource Management (RRM)**
  - Channel measurement and optimization
  - Load balancing across APs

---

## 2. Control Plane Functionalities

The **Control Plane** ensures reliable delivery of frames and manages access to the shared wireless medium.
<img width="1240" height="601" alt="image" src="https://github.com/user-attachments/assets/0de1c8be-a092-400d-9895-cf5dbd898a52" />

### Key Functions:

- **Medium Access Control (Channel Access)**
  - Uses **CSMA/CA (Carrier Sense Multiple Access with Collision Avoidance)**
  - Includes backoff algorithms and contention window handling

- **Interframe Spacing (IFS)**
  - Defines priority using different waiting intervals:
    - SIFS (Short IFS)
    - DIFS (Distributed IFS)
    - PIFS (Point Coordination IFS)

- **Acknowledgment (ACK) Mechanism**
  - Receiver sends ACK for successfully received frames
  - Retransmission occurs if ACK is not received

- **RTS/CTS Mechanism**
  - Request to Send / Clear to Send handshake
  - Reduces collisions due to hidden node problem

- **Fragmentation and Reassembly**
  - Large frames split into smaller fragments
  - Improves reliability in noisy environments

- **Error Control**
  - Uses **Frame Check Sequence (FCS)** for error detection
  - Corrupted frames are discarded

- **Retransmission Handling**
  - Frames retransmitted on failure (based on retry limits)

- **Network Allocation Vector (NAV)**
  - Virtual carrier sensing mechanism
  - Indicates medium reservation time

---

## 3. Data Plane Functionalities

The **Data Plane** is responsible for actual data transfer between devices.
<img width="1226" height="585" alt="image" src="https://github.com/user-attachments/assets/ce11f04f-5428-4c53-8684-eebb51a1cb7c" />

### Key Functions:

- **Frame Encapsulation and Decapsulation**
  - Converts higher-layer data into MAC frames
  - Extracts payload at receiver

- **Addressing and Forwarding**
  - Uses MAC addresses (up to 4 address fields in WiFi)
  - Supports infrastructure and ad-hoc modes

- **Data Delivery**
  - Handles unicast, multicast, and broadcast transmission

- **Quality of Service (QoS)**
  - Prioritizes traffic using **802.11e (WMM)**
  - Traffic classes:
    - Voice
    - Video
    - Best effort
    - Background

- **Aggregation**
  - Combines multiple frames for efficiency:
    - A-MSDU (Aggregated MAC Service Data Unit)
    - A-MPDU (Aggregated MAC Protocol Data Unit)

- **Block Acknowledgment**
  - Acknowledges multiple frames together
  - Improves throughput

- **Security and Encryption**
  - Implements WPA/WPA2/WPA3
  - Encryption methods:
    - TKIP
    - AES (CCMP)

- **Throughput Optimization**
  - Frame bursting
  - Reduced overhead techniques

---

## Summary

| Plane        | Purpose                          | Key Responsibilities |
|--------------|----------------------------------|----------------------|
| Management   | Network setup & maintenance      | Beaconing, association, authentication, power saving |
| Control      | Medium access & reliability      | CSMA/CA, ACK, RTS/CTS, retransmissions |
| Data         | Data transmission               | Framing, QoS, aggregation, security |

---

## Conclusion

The MAC layer in IEEE 802.11 is a complex and feature-rich component that ensures efficient wireless communication. By dividing responsibilities across **management, control, and data planes**, it provides robust support for network formation, medium access coordination, and high-performance data transfer.
