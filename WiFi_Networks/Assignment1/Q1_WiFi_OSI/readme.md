## Wi-Fi in the OSI Model

Wi-Fi (IEEE 802.11) operates in the **lower two layers** of the OSI model:

### Layer 1 — Physical Layer (PHY)
The physical layer is responsible for the actual transmission of raw bits over the medium (air, in the case of Wi-Fi).

In Wi-Fi, this includes:
- Radio frequency bands (2.4 GHz, 5 GHz, 6 GHz)
- Signal modulation techniques (e.g., OFDM, DSSS)
- Data rates and encoding schemes

This layer defines **how data is physically transmitted and received as electromagnetic waves**.

---

### Layer 2 — Data Link Layer (MAC sublayer)
The data link layer ensures reliable communication between devices on the same network.

In Wi-Fi, the MAC (Media Access Control) sublayer handles:
- Frame formatting and addressing (MAC addresses)
- Medium access control using **CSMA/CA (Collision Avoidance)**
- Acknowledgments and retransmissions
- Device association and authentication with access points

This layer defines **how devices share the wireless medium and ensure correct delivery of frames**.

---

## Summary
Wi-Fi spans:
- **Layer 1 (Physical Layer)** — transmission over air  
- **Layer 2 (Data Link Layer, specifically MAC)** — access control and reliability  

It does not directly implement higher-layer protocols like IP (Layer 3) or TCP (Layer 4), but supports them.
