# Brief: Client Association Process in IEEE 802.11 (WiFi)

## Overview

The **client association process** is the sequence of steps through which a wireless device (STA) connects to an Access Point (AP) and becomes part of a **Basic Service Set (BSS)**. This process occurs after scanning and is required before any data transmission.

---

## Steps in Client Association

<img width="451" height="425" alt="image" src="https://github.com/user-attachments/assets/94a86449-e77e-4264-8312-e7a9d81b1acd" />

### 1. Scanning
- The STA discovers available networks using:
  - **Passive scanning** (listening to beacons)
  - **Active scanning** (sending probe requests)
- STA collects AP information (SSID, channel, security, signal strength)

---

### 2. Authentication

- STA initiates authentication with the AP
- Two main types:
  - **Open System Authentication** (default, minimal security)
  - **Shared Key Authentication** (legacy, rarely used)
- In modern networks, real security happens later (WPA2/WPA3)

---

### 3. Association

- STA sends an **Association Request** frame to the AP
- Includes:
  - Supported data rates
  - Capability information
  - SSID

- AP responds with an **Association Response**:
  - Accept (with Association ID - AID)
  - Reject (with reason)

- Once accepted, STA is officially part of the network

---

### 4. Security Setup (Post-Association)

- For secured networks (WPA2/WPA3):
  - **4-Way Handshake** is performed
  - Encryption keys are generated and exchanged

---

### 5. Data Transmission

- After successful association and security setup:
  - STA can send and receive data frames
  - Normal communication begins

---

## Reassociation (Roaming)

- When STA moves between APs:
  - Sends a **Reassociation Request**
  - Transfers connection to a new AP
- Helps maintain seamless connectivity

---

## Disassociation and Deauthentication

- **Disassociation**: STA leaves AP but may rejoin later  
- **Deauthentication**: Ends authentication state completely  

---

## Summary Flow
