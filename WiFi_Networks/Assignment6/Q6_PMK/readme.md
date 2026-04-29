# Role of Pairwise Master Key (PMK) in the 4-Way Handshake

## Overview

The **Pairwise Master Key (PMK)** is the **root secret** used in the WiFi security process (WPA2/WPA3). It is established **before the 4-way handshake** and is used to derive all session-specific encryption keys.

The PMK itself is **never transmitted over the air**, ensuring security.

---

## How PMK Is Obtained

### WPA2-Personal (PSK)
- PMK is derived from:
  - WiFi passphrase  
  - SSID  

---

### WPA2-Enterprise
- PMK is generated through:
  - **802.1X / EAP authentication**  

---

## Role of PMK in the 4-Way Handshake

The PMK plays a central role in **deriving the session keys** used for secure communication.

---

### 1. Key Derivation (PTK Generation)

During the handshake, both STA and AP independently compute:


PTK = PRF(PMK, ANonce, SNonce, MAC_AP, MAC_STA)


Where:
- **PMK** → Master secret  
- **ANonce** → Random number from AP  
- **SNonce** → Random number from STA  
- **MAC addresses** → Ensure uniqueness  

---

### 2. Mutual Authentication

- Both STA and AP prove they possess the **same PMK**
- Verified using:
  - **MIC (Message Integrity Code)**  

**Result:**
- Confirms both parties are legitimate  

---

### 3. Secure Key Expansion

PMK is used to derive **PTK**, which is split into:

- **KCK (Key Confirmation Key)** → Integrity (MIC)  
- **KEK (Key Encryption Key)** → Encrypts GTK  
- **TK (Temporal Key)** → Encrypts data  

---

### 4. Protection of Key Exchange

- PMK ensures that:
  - Session keys are derived securely  
  - Keys are not exposed during transmission  

---

### 5. Basis for Session Security

- PMK acts as the **foundation of all encryption and authentication**  
- Each session derives unique keys from the same PMK  

---

## Key Properties of PMK

- **Not transmitted over air**  
- **Shared securely before handshake**  
- **Used only for key derivation**  
- **Ensures session uniqueness when combined with nonces**  

---

## Summary

| Role of PMK | Description |
|------------|-------------|
| Key Derivation | Used to generate PTK |
| Authentication | Confirms both parties share the same secret |
| Security Foundation | Root key for all session keys |
| Confidentiality | Never transmitted over the network |

---

## Conclusion

The **Pairwise Master Key (PMK)** is the cornerstone of WiFi security during the 4-way handshake. It enables **secure key generation, mutual authentication, and protected communication** without ever being exposed, making it essential for maintaining confidentiality and integrity in wireless networks.
