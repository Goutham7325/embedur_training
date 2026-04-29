# Difference Between Authentication and Encryption in Wi-Fi Security

## Overview

In WiFi security, **authentication** and **encryption** are two fundamental but distinct concepts:

- **Authentication** → Verifies *who* is allowed to access the network  
- **Encryption** → Protects *what* data is transmitted over the network  

Both are essential for secure wireless communication but serve different purposes.

---

## 1. Authentication

### Definition
Authentication is the process of **verifying the identity of a user or device** before granting access to a WiFi network.

---

### Purpose
- Ensures only **authorized users/devices** can connect  
- Prevents unauthorized access  

---

### Common Methods

- **Open Authentication**
  - No verification (insecure)

<img width="588" height="312" alt="image" src="https://github.com/user-attachments/assets/7142de1b-11bc-42ba-9280-d21cc0da3efd" />

- **Pre-Shared Key (PSK)**
  - Uses a shared password (WPA2/WPA3-Personal)

<img width="567" height="355" alt="image" src="https://github.com/user-attachments/assets/43d0ce0c-5e8c-4c5c-a43b-c40e4962eec7" />

<img width="769" height="325" alt="image" src="https://github.com/user-attachments/assets/7ae70d35-07f2-4a22-acab-55430841836e" />

- **802.1X / EAP**
  - Enterprise-level authentication using credentials/certificates  

<img width="498" height="172" alt="image" src="https://github.com/user-attachments/assets/d7b95aa7-80d0-4175-ba4b-a013af69a67b" />

<img width="567" height="270" alt="image" src="https://github.com/user-attachments/assets/218578a1-915a-42ac-a9b5-78cdfad69782" />

---

### Example

- Entering a WiFi password to connect to a network  

---

### Key Point
- Happens **before network access is granted**

---

## 2. Encryption

### Definition
Encryption is the process of **encoding data** so that only authorized parties can read it.

---

### Purpose
- Protects data from **eavesdropping**  
- Ensures privacy of communication  

---

### Common Methods

- **WPA2 → AES-CCMP**  
- **WPA3 → AES-GCMP**  

<img width="800" height="400" alt="image" src="https://github.com/user-attachments/assets/a707e236-891f-4b37-b967-17433d8921cb" />

---

### Example

- Data packets transmitted over WiFi are encrypted so attackers cannot read them  

---

### Key Point
- Happens **after authentication**, during data transmission  

---

## Key Differences

| Feature | Authentication | Encryption |
|--------|---------------|------------|
| Purpose | Verify identity | Protect data |
| When it occurs | Before access | During communication |
| Focus | User/device access | Data privacy |
| Example | Password login | AES-encrypted packets |
| Security Role | Access control | Confidentiality |

---

## How They Work Together

1. **Authentication Phase**
   - User/device proves identity  
   - Network grants access  

2. **Encryption Phase**
   - Secure keys are generated (via 4-way handshake)  
   - Data is encrypted during transmission  

---

## Simple Analogy

- **Authentication** → Showing your ID to enter a building  
- **Encryption** → Speaking in a secret language inside the building  

---

## Conclusion

Authentication and encryption are complementary components of WiFi security. While authentication ensures that only trusted devices gain access, encryption ensures that the data exchanged remains confidential and secure. Together, they form the foundation of a secure wireless network.
