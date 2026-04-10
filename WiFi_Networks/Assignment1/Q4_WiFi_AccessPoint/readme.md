## Basic Functionalities of a Wi-Fi Access Point (AP)

A **Wi-Fi Access Point (AP)** is a device that connects wireless clients to a wired network and manages wireless communication. Its core functions are defined mainly at the **PHY and MAC layers** of the OSI model.

---

### 1. Wireless Connectivity Provision
- Broadcasts the **SSID (network name)**  
- Allows devices (stations) to discover and connect to the network  
- Acts as a **central communication hub** for wireless clients  

---

### 2. Medium Access Control (MAC Layer Function)
- Controls how multiple devices share the wireless medium  
- Implements **CSMA/CA (Carrier Sense Multiple Access with Collision Avoidance)**  
- Manages:
  - Frame transmission
  - Acknowledgments (ACKs)
  - Retransmissions  

---

### 3. Frame Forwarding / Bridging
- Acts as a **bridge between wireless and wired networks**  
- Forwards data:
  - From wireless clients → wired LAN  
  - From wired LAN → wireless clients  
- Uses **MAC addresses** for frame delivery  

---

### 4. Authentication and Association
- Handles client connection procedures:
  - **Authentication** (identity verification)  
  - **Association** (joining the network)  
- Maintains a list of connected clients  

---

### 5. Security Management
- Implements security protocols such as:
  - WPA2 / WPA3  
- Provides:
  - Encryption of data  
  - Access control (password-based or enterprise authentication)  

---

### 6. Radio Resource Management
- Manages wireless parameters:
  - Channel selection  
  - Transmission power  
- Reduces interference and optimizes performance  

---

### 7. Beacon Transmission
- Periodically sends **beacon frames** containing:
  - SSID  
  - Supported data rates  
  - Timing information  
- Helps devices discover and synchronize with the AP  

---

### 8. Mobility and Roaming Support
- In multi-AP networks (ESS):
  - Assists clients in roaming between APs  
  - Maintains session continuity  

---

### 9. Quality of Service (QoS)
- Prioritizes traffic (e.g., voice, video, data)  
- Uses mechanisms like **WMM (Wi-Fi Multimedia)**  

---

## Summary
A Wi-Fi Access Point primarily:
- Connects wireless devices to a network  
- Controls medium access  
- Ensures secure and reliable communication  
- Bridges wireless and wired networks  
- Supports scalability and mobility in larger deployments
