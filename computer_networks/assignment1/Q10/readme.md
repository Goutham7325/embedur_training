# DHCP IP Address Assignment (DORA Process)

## Overview
A DHCP (Dynamic Host Configuration Protocol) server automatically assigns IP addresses and network configuration parameters to devices in a network. This eliminates the need for manual IP configuration.

---

## DHCP Operation (DORA Cycle)
<img width="1200" height="663" alt="image" src="https://github.com/user-attachments/assets/2cc8544a-8db4-4973-bdec-7c55fcd40917" />

### 1. Discover (DHCPDISCOVER)
- When a device connects to the network, it does not have an IP address.
- It sends a broadcast message to all devices:
  - Destination: 255.255.255.255
- Purpose: To locate available DHCP servers.

---

### 2. Offer (DHCPOFFER)
- The DHCP server responds with an offer message.
- The message contains:
  - Available IP address (e.g., 192.168.1.10)
  - Subnet mask
  - Default gateway
  - DNS server
  - Lease duration

---

### 3. Request (DHCPREQUEST)
- The client selects one offer and sends a request message.
- This message is broadcast to inform all DHCP servers of its selection.
- Confirms acceptance of the offered IP address.

---

### 4. Acknowledge (DHCPACK)
- The selected DHCP server sends an acknowledgment.
- The IP address is officially assigned to the client.
- The client can now communicate on the network.

<img width="978" height="223" alt="image" src="https://github.com/user-attachments/assets/5952d724-0ccb-481b-a65a-ea4c2b1d98d6" />

---

## Additional Parameters Provided by DHCP

- Default Gateway: Router IP address (e.g., 192.168.1.1)
- DNS Server: Used for domain name resolution
- Lease Time: Duration for which the IP address is valid

---

## Lease Renewal Process

- The assigned IP address is temporary (leased).
- The client attempts renewal:
  - At 50% of lease time (T1)
  - At 87.5% of lease time (T2)
- If renewal fails, the IP address is released and the process restarts.

---

## Example (Home Network)

1. A device connects to a WiFi network.
2. The router (acting as DHCP server) assigns:
   - IP address: 192.168.1.5
   - Gateway: 192.168.1.1
3. The device can now access the internet.

---

## Important Notes

- DHCP prevents IP address conflicts by ensuring unique assignments.
- If DHCP is unavailable, manual (static) IP configuration is required.
- DHCP uses:
  - UDP Port 67 (Server)
  - UDP Port 68 (Client)
