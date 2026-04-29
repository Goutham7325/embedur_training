# Differences Between WEP, WPA, WPA2, and WPA3

## Overview

Wi-Fi security protocols have evolved over time to address weaknesses and improve protection against attacks. The main standards are:

- **WEP (Wired Equivalent Privacy)**
- **WPA (Wi-Fi Protected Access)**
- **WPA2**
- **WPA3**

Each newer standard provides stronger security than its predecessor.

---

## 1. WEP (Wired Equivalent Privacy)

### Key Features
- Introduced with early WiFi (802.11)
- Uses **RC4 encryption**
- Static key (shared among users)

### Limitations
- Weak encryption algorithm  
- Vulnerable to key cracking attacks  
- No proper key management  

### Status
- **Obsolete and insecure**

<img width="719" height="265" alt="image" src="https://github.com/user-attachments/assets/95a4f63d-f220-46bf-99c3-35ae3956a9b8" />

<img width="751" height="296" alt="image" src="https://github.com/user-attachments/assets/e9927c13-6a61-4ed9-91b7-abc14b18d14e" />

---

## 2. WPA (Wi-Fi Protected Access)

### Key Features
- Introduced as a temporary fix for WEP  
- Uses **TKIP (Temporal Key Integrity Protocol)**  
- Dynamic key generation  

<img width="728" height="822" alt="image" src="https://github.com/user-attachments/assets/acb5a72b-3aad-4309-9647-6cd2375912ed" />

### Improvements Over WEP
- Per-packet key mixing  
- Message Integrity Check (MIC)  

### Limitations
- Still based on RC4  
- Vulnerable to some attacks  

### Status
- **Deprecated**

---

## 3. WPA2

### Key Features
- Based on **IEEE 802.11i standard**  
- Uses **AES-CCMP encryption**  
- Strong security for many years  

### Modes
- **WPA2-Personal (PSK)**  
- **WPA2-Enterprise (802.1X/EAP)**  

### Improvements Over WPA
- Strong encryption (AES instead of RC4)  
- Better integrity and authentication  
- WPA2 employs the Advanced Encryption Standard (AES) with a 128-bit key, enhancing security through the Counter-Mode/CBC-Mac Protocol CCMP. This protocol ensures robust encryption and data integrity, using different Initialization Vectors (IVs) for encryption and authentication purposes

The 4-way handshake involves:

- The AP sending a random number (ANonce) to the client.
- The client responding with its random number (SNonce).
- The AP calculating the PTK from these numbers and sending an encrypted message to the client.
- The client decrypting this message with the PTK, confirming successful authentication
Post-handshake, the established PTK is used for encrypting unicast traffic, and the Group Temporal Key (GTK) is used for broadcast traffic. This comprehensive authentication and encryption mechanism is what makes WPA2 a robust security standard for wireless networks

### Limitations
- Vulnerable to:
  - Weak passwords (dictionary attacks)  
  - KRACK attack (patched in most systems)  

### Status
- **Widely used but being replaced**

---

## 4. WPA3

### Key Features
- Latest WiFi security standard  
- Uses **SAE (Simultaneous Authentication of Equals)** instead of PSK  
- Stronger encryption (**AES-GCMP**)  

### Improvements Over WPA2
- Protection against offline dictionary attacks  
- Forward secrecy (compromised keys don’t expose past sessions)  
- Enhanced security for open networks (**OWE**)  
One of WPA2’s biggest flaws was its reliance on Pre-Shared Key (PSK) authentication, which was vulnerable to brute force attacks. Attackers could capture Wi-Fi packets and effectively use software to repeatedly guess passwords until they gained access. 

WPA3 replaces this vulnerable PSK with Simultaneous Authentication of Equals (SAE), a much more secure authentication method.  

SAE means that: 
Even if an attacker intercepts Wi-Fi handshake data, they can’t reuse it to guess passwords offline. 
Password-guessing attempts are rate-limited, meaning hackers can’t bombard the network with login attempts. 
It becomes significantly harder to compromise a network, even if users choose weaker passwords (this is never recommended, of course). 
### Modes
- **WPA3-Personal (SAE)**  
- **WPA3-Enterprise (192-bit security)**  

### Advantages
- Strongest security available  
- Better protection in public and enterprise networks  

---

## Comparison Table

| Feature | WEP | WPA | WPA2 | WPA3 |
|--------|-----|-----|------|------|
| Encryption | RC4 | RC4 (TKIP) | AES-CCMP | AES-GCMP |
| Key Management | Static | Dynamic | Dynamic | Advanced |
| Authentication | Weak | PSK | PSK / 802.1X | SAE / 802.1X |
| Security Level | Very Low | Low | High | Very High |
| Vulnerability | Easily broken | Some weaknesses | Moderate | Strong |
| Status | Obsolete | Deprecated | Common | Latest |

---

## Key Differences Summary
# Wi-Fi Security Protocol Comparison

| Wi-Fi Security Protocol | Key Management Approach | Encryption Size | Protocols Used |
|------------------------|------------------------|-----------------|----------------|
| WEP  | Static keys | 64-bit, 128-bit | RC4 (Rivest Cipher 4) |
| WPA  | Dynamic keys | 128-bit | RC4 (Rivest Cipher 4) |
| WPA2 | Dynamic keys | 128-bit or 256-bit | AES using CCMP (Counter Mode with Cipher Block Chaining Message Authentication Code Protocol) |
| WPA3 | Dynamic keys (unique keys, individualized encryption) | 192-bit, 256-bit | AES-GCM (Galois-Counter Mode) with SAE (Simultaneous Authentication of Equals) |
### 1. Security Strength
- WEP < WPA < WPA2 < WPA3  

---

### 2. Encryption Evolution
- RC4 → TKIP → AES-CCMP → AES-GCMP  

---

### 3. Authentication Improvements
- Static keys → PSK → SAE (secure handshake)  

---

### 4. Attack Resistance
- WPA3 provides protection against:
  - Password guessing attacks  
  - Key compromise  

---

## Conclusion

The evolution from **WEP to WPA3** reflects continuous improvements in WiFi security. While WEP and WPA are no longer safe, **WPA2 remains widely used**, and **WPA3 offers the highest level of protection**, making it the recommended standard for modern wireless networks.
