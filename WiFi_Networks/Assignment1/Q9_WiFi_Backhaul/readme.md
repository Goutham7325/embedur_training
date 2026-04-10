## Types of Wi-Fi Internet Backhaul

Backhaul refers to the **connection between the access point/router and the internet source (ISP network)**.

### Common Types of Backhaul

1. **Fiber Backhaul (FTTH/FTTP)**
   - Uses optical fiber cables
   - Very high speed (Gbps range)
   - Low latency and high reliability

2. **DSL (Digital Subscriber Line)**
   - Uses telephone lines
   - Moderate speed (up to ~100 Mbps)
   - Higher latency compared to fiber

3. **Cable Broadband**
   - Uses coaxial cable (cable TV infrastructure)
   - High speed (100 Mbps to 1 Gbps)
   - Shared bandwidth

4. **Cellular Backhaul (4G/5G)**
   - Uses mobile networks
   - Portable and flexible
   - Variable speed and latency

5. **Wireless Point-to-Point (Microwave Link)**
   - Uses directional antennas
   - Common in campuses/ISPs
   - Requires line-of-sight

6. **Satellite Backhaul**
   - Used in remote areas
   - Very high latency
   - Wide coverage

---

## Example: Home / College Wi-Fi Backhaul

### Case 1: Home Network 
- **Backhaul Type:** Fiber (FTTH)
- **Provider:** (e.g., Airtel Xstream / JioFiber)
- **Speed:** 100 Mbps – 1 Gbps
- **Latency:** Low (~5–20 ms)
- **Reliability:** High
- **Connection:** Optical fiber → ONT/Modem → Wi-Fi Router

---

### Case 2: College / Campus Network
- **Backhaul Type:** Fiber Backbone (leased line)
- **Speed:** 1 Gbps or higher
- **Latency:** Very low
- **Architecture:**
  - ISP Fiber → Core Router → Switches → Multiple Access Points
- **Features:**
  - Centralized network management
  - VLAN segmentation
  - Redundant links for reliability

---

## Summary

| Backhaul Type      | Speed        | Latency | Reliability | Use Case              |
|-------------------|-------------|--------|------------|-----------------------|
| Fiber             | Very High   | Low    | High       | Homes, campuses       |
| DSL               | Medium      | Medium | Moderate   | Older home networks   |
| Cable             | High        | Medium | Moderate   | Urban homes           |
| Cellular (4G/5G)  | Variable    | Medium | Variable   | Portable setups       |
| Wireless P2P      | High        | Low    | Moderate   | Campus/ISP links      |
| Satellite         | Low–Medium  | High   | Moderate   | Remote areas          |

---

## Conclusion
Backhaul determines the **overall internet performance** of a Wi-Fi network.  
Modern deployments (home and campus) primarily use **fiber backhaul** due to its **high speed, low latency, and reliability**.
