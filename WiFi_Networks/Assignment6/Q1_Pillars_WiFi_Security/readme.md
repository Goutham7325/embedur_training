# Pillars of Wi-Fi Security

## Overview

Wi-Fi security is built on a set of fundamental principles that ensure **safe, reliable, and trustworthy wireless communication**. These pillars protect data, users, and network infrastructure from unauthorized access and attacks.

---

## 1. Authentication

### Purpose
- Verifies the identity of users/devices before granting access  

<img width="910" height="438" alt="image" src="https://github.com/user-attachments/assets/3ac12c41-02fb-4efa-8cb4-9040f60b1d3a" />

### Mechanisms
- **Open Authentication** (no security, legacy)  
- **Pre-Shared Key (PSK)** (WPA2/WPA3-Personal)  
- **802.1X / EAP** (WPA2/WPA3-Enterprise)  

### Importance
- Prevents unauthorized devices from connecting to the network  

---

## 2. Confidentiality (Encryption)

### Purpose
- Protects data from being read by unauthorized parties  

### Mechanisms
- **WPA2 → AES-CCMP**  
- **WPA3 → SAE + AES-GCMP**  

### Importance
- Ensures data privacy during transmission  

---

## 3. Integrity

### Purpose
- Ensures that transmitted data is **not altered or tampered with**  

### Mechanisms
- **Message Integrity Code (MIC)**  
- Cryptographic hashing  

### Importance
- Detects data corruption or malicious modification  

---

## 4. Access Control

### Purpose
- Determines **who can access network resources**  

### Mechanisms
- MAC filtering  
- VLAN segmentation  
- Role-based access (in enterprise networks)  

### Importance
- Limits network usage to authorized users/devices  

---

## 5. Key Management

### Purpose
- Secure generation, distribution, and updating of encryption keys  

### Mechanisms
- **4-Way Handshake (EAPOL)**  
- Dynamic key generation (PTK, GTK)  

### Importance
- Ensures secure session establishment and prevents key reuse  

---

## 6. Availability

### Purpose
- Ensures the network remains **accessible and operational**  

### Threats
- Denial of Service (DoS) attacks  
- Jamming/interference  

### Importance
- Maintains continuous network service  

---

## 7. Non-Repudiation (Optional / Advanced)

### Purpose
- Ensures that actions cannot be denied later  

### Mechanisms
- Logging  
- Authentication records  

### Importance
- Useful in enterprise and secure environments  

---

## Summary Table

| Pillar | Function | Example Mechanism |
|--------|----------|------------------|
| Authentication | Verify identity | PSK, 802.1X |
| Confidentiality | Protect data | AES encryption |
| Integrity | Prevent tampering | MIC |
| Access Control | Restrict usage | VLAN, MAC filtering |
| Key Management | Secure key exchange | 4-way handshake |
| Availability | Ensure uptime | Anti-DoS measures |
| Non-Repudiation | Accountability | Logs |

---

## Conclusion

Wi-Fi security relies on multiple interconnected pillars to provide **secure authentication, encrypted communication, data integrity, controlled access, and reliable availability**. Modern standards like **WPA3** strengthen these pillars, making wireless networks more secure against evolving threats.
