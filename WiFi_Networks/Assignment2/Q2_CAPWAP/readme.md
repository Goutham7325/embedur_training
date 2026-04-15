# CAPWAP Protocol and AP–Controller Communication Flow

## 1. Introduction to CAPWAP

**CAPWAP (Control And Provisioning of Wireless Access Points)** is a standardized protocol defined in **RFC 5415** and **RFC 5416**. It enables communication between **Lightweight Access Points (APs)** and a **Wireless LAN Controller (WLC)** in centralized wireless architectures.

CAPWAP is responsible for:
- Centralized management of APs
- Transport of control messages and user data
- Secure communication between AP and controller

---

## 2. Key Features of CAPWAP

- **Centralized control** of multiple APs
- **Secure communication** using DTLS (Datagram Transport Layer Security)
- **Encapsulation of wireless traffic**
- **Vendor interoperability** (standard protocol)
- Works over **IP networks (Layer 3)**

---

## 3. CAPWAP Architecture

CAPWAP splits communication into two logical tunnels between AP and WLC:

### 3.1 Control Tunnel
- Used for management and signaling
- Carries:
  - Configuration messages
  - Authentication and authorization
  - AP join and registration
  - Keepalive messages

### 3.2 Data Tunnel
- Used for client data traffic
- Carries:
  - Encapsulated 802.11 frames
- May be enabled or disabled depending on AP mode:
  - **Central switching** → traffic goes to WLC
  - **Local switching (FlexConnect)** → traffic breaks out locally

---

## 4. CAPWAP Transport Details

- Operates over **UDP**
- Uses two ports:
  - UDP **5246** → Control messages
  - UDP **5247** → Data traffic
- Secured using **DTLS encryption** (mainly for control plane)

---

## 5. AP to WLC Communication Flow

The communication between AP and WLC happens in multiple phases:

---

## 5.1 Phase 1: AP Boot and Initialization

1. AP powers on
2. Gets IP address via **DHCP**
3. Learns WLC IP using one of the following:
   - DHCP Option 43
   - DNS (e.g., `cisco-capwap-controller`)
   - Static configuration
   - Broadcast (Layer 2 mode)

---

## 5.2 Phase 2: Discovery Phase

- AP sends **CAPWAP Discovery Request** to WLC(s)
- WLC responds with **Discovery Response**
- AP selects the best WLC based on:
  - Load
  - Response time
  - Configuration

---

## 5.3 Phase 3: Join Phase

1. AP sends **Join Request** to selected WLC
2. WLC authenticates AP:
   - Using certificates (X.509)
3. WLC sends **Join Response**
4. Secure **DTLS tunnel** is established

---

## 5.4 Phase 4: Configuration Phase

- WLC sends configuration parameters:
  - SSID details
  - Security policies
  - RF parameters (channel, power)
- AP applies configuration and becomes operational

---

## 5.5 Phase 5: Data Transfer Phase

Once AP is active:

### Control Plane:
- Periodic **keepalive messages**
- Configuration updates
- Client state management

### Data Plane:
- Client traffic is handled in two ways:

#### Central Switching:
- Client data encapsulated in CAPWAP
- Sent to WLC
- WLC forwards to destination network

#### Local Switching:
- Data is bridged locally at AP
- Only control traffic goes to WLC

---

## 5.6 Phase 6: Keepalive and Heartbeat

- AP and WLC exchange **echo (keepalive) messages**
- Ensures tunnel is alive
- If no response:
  - AP attempts to reconnect or discover new WLC

---

## 6. CAPWAP Message Types

### Control Messages
- Discovery Request / Response
- Join Request / Response
- Configuration Status
- Echo Request / Response
- Change State Event

### Data Messages
- Encapsulated client frames (802.11)

---

## 7. Flow Summary

1. AP boots and gets IP
2. AP discovers WLC
3. AP joins WLC and authenticates
4. Secure CAPWAP tunnel established
5. WLC pushes configuration
6. AP starts serving clients
7. Continuous control and data exchange via tunnels

---

## 8. Advantages of CAPWAP

- Centralized network management
- Improved scalability
- Secure AP–controller communication
- Simplified deployment
- Consistent policy enforcement

---

## 9. Limitations

- Dependency on WLC
- Additional overhead due to encapsulation
- Possible latency in centralized data forwarding

---

## 10. Conclusion

CAPWAP is a fundamental protocol in modern wireless networks that enables efficient communication between APs and controllers. By separating control and data planes and using secure tunnels, it ensures scalable, manageable, and secure wireless deployments.
