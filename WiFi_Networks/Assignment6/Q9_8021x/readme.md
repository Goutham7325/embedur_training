# What Problem Does 802.1X Solve in a Network?

## Overview

**IEEE 802.1X** is a **network access control (NAC) protocol** designed to solve the problem of **unauthorized access to a network**. It provides a secure framework for **authenticating users and devices before granting access** to network resources.

---

## Core Problem

### 1. Uncontrolled Network Access

In traditional networks (especially with shared passwords like WPA2-PSK):

- Anyone with the password can connect  
- No way to identify individual users  
- Difficult to revoke access for a specific user  

**Result:**
- Security risks  
- Lack of accountability  
- Poor access control  

---

### 2. Lack of Per-User Authentication

- All users share the same credentials (PSK)  
- No unique identity verification  

**Result:**
- No user-level control  
- Hard to track or audit activity  

---

### 3. Weak Access Control in Enterprise Networks

- No centralized authentication system  
- Manual management of credentials  

**Result:**
- Scalability issues  
- Increased administrative overhead  

---

## How 802.1X Solves These Problems

<img width="444" height="284" alt="image" src="https://github.com/user-attachments/assets/57c736c0-a660-42cb-bfd2-3b9f7eec3b19" />

### 1. Strong Authentication Framework

- Uses **EAP (Extensible Authentication Protocol)**  
- Authenticates each user/device individually  

---

### 2. Three-Entity Model

802.1X introduces:

- **Supplicant** → Client (user/device)  
- **Authenticator** → Network device (AP/switch)  
- **Authentication Server** → RADIUS server  

---

### 3. Per-User Access Control

- Each user has **unique credentials**:
  - Username/password  
  - Certificates  

**Result:**
- Fine-grained access control  
- Easy user revocation  

802.1X authentication involves three parties:
A supplicant, an authenticator, and an authentication server. 
The supplicant is a client device (such as a laptop) that wishes to attach to the LAN/WLAN. The term 'supplicant' is also used interchangeably to refer to the software running on the client that provides credentials to the authenticator.   
The authenticator is a network device that provides a data link between the client and the network and can allow or block network traffic between the two, such as an Ethernet switch or wireless access point; and the authentication server is typically a trusted server that can receive and respond to requests for network access, and can tell the authenticator if the connection is to be allowed, and various settings that should apply to that client's connection or setting.    
Authentication servers typically run software supporting the RADIUS and EAP protocols. In some cases, the authentication server software may be running on the authenticator hardware.

<img width="687" height="483" alt="image" src="https://github.com/user-attachments/assets/ea6afd21-80a8-4c22-9d36-427ef66b62b8" />

---

### 4. Dynamic Key Generation

- Generates **unique session keys per user**  
- Works with WPA2/WPA3-Enterprise  

**Result:**
- Improved security  
- No shared keys  

---

### 5. Centralized Authentication (RADIUS)

- Authentication handled by a central server  
- Policies can be applied consistently  

**Result:**
- Scalable and manageable network  

---

### 6. Network Access Enforcement

- Blocks traffic until authentication succeeds  
- Only authenticated users can access the network  

---
## The typical authentication procedure consists of

<img width="532" height="489" alt="image" src="https://github.com/user-attachments/assets/9d4b8775-091e-430d-9686-4f51a88e6ff9" />

- Initialization On detection of a new supplicant, the port on the switch (authenticator) is enabled and set to the "unauthorized" state. In this state, only 802.1X traffic is allowed; other traffic, such as the Internet Protocol (and with that TCP and UDP), is dropped.
- Initiation To initiate authentication the authenticator will periodically transmit EAP-Request Identity frames to a special Layer 2 MAC address (01:80:C2:00:00:03) on the local network segment. The supplicant listens at this address, and on receipt of the EAP-Request Identity frame, it responds with an EAP-Response Identity frame containing an identifier for the supplicant such as a User ID. The authenticator then encapsulates this Identity response in a RADIUS Access-Request packet and forwards it on to the authentication server. The supplicant may also initiate or restart authentication by sending an EAPOL-Start frame to the authenticator, which will then reply with an EAP-Request Identity frame.
- Negotiation (Technically EAP negotiation) The authentication server sends a reply (encapsulated in a RADIUS Access-Challenge packet) to the authenticator, containing an EAP Request specifying the EAP Method (The type of EAP based authentication it wishes the supplicant to perform). The authenticator encapsulates the EAP Request in an EAPOL frame and transmits it to the supplicant. At this point, the supplicant can start using the requested EAP Method, or do a NAK ("Negative Acknowledgement") and respond with the EAP Methods it is willing to perform.
- Authentication If the authentication server and supplicant agree on an EAP Method, EAP Requests and Responses are sent between the supplicant and the authentication server (translated by the authenticator) until the authentication server responds with either an EAP-Success message (encapsulated in a RADIUS Access-Accept packet), or an EAP-Failure message (encapsulated in a RADIUS Access-Reject packet). If authentication is successful, the authenticator sets the port to the "authorized" state and normal traffic is allowed. If it is unsuccessful, the port remains in the "unauthorized" state. When the supplicant logs off, it sends an EAPOL-logoff message to the authenticator, the authenticator then sets the port to the "unauthorized" state, once again blocking all non-EAP traffic.
## Comparison: Without vs With 802.1X

| Feature | Without 802.1X (PSK) | With 802.1X |
|--------|---------------------|-------------|
| Authentication | Shared password | Per-user authentication |
| Access Control | Weak | Strong |
| Key Management | Static/shared | Dynamic/per-session |
| Scalability | Poor | High |
| Security | Moderate | High |
| User Tracking | Not possible | Possible |

---

## Real-World Use Cases

- Enterprise WiFi networks  
- Corporate LANs (wired + wireless)  
- Universities and campuses  
- Secure government networks  

---

## Key Benefits

- Eliminates shared password risks  
- Enables **identity-based access control**  
- Improves security and accountability  
- Supports scalable network management  

---

## Conclusion

802.1X solves the critical problem of **unauthorized and unmanaged network access** by introducing **strong, per-user authentication and centralized control**. It transforms network security from a shared-key model to a **secure, scalable, and identity-driven system**, making it essential for modern enterprise networks.
