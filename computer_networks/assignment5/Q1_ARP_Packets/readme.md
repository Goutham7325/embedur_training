# 📡 ARP Packet Analysis using Wireshark

##  Concept Overview

Address Resolution Protocol (ARP) is used to map an IP address (Layer 3) to a MAC address (Layer 2) within a local network. When a device wants to communicate with another device on the same network, it must know the destination’s MAC address. If the MAC address is unknown, ARP is used to discover it.

In Wireshark, ARP packets can be captured and analyzed to observe how devices resolve IP-to-MAC mappings dynamically. The ARP process consists of two main messages: **ARP Request** and **ARP Reply**.

---

##  ARP Process

1. A sender checks its ARP cache for the destination IP.
2. If not found, it broadcasts an ARP Request.
3. The device with the matching IP responds with an ARP Reply.
4. The sender stores the MAC address in its ARP table.

---

##  ARP Request vs ARP Reply

| Field | ARP Request | ARP Reply |
|------|------------|-----------|
| Destination MAC | FF:FF:FF:FF:FF:FF (Broadcast) | Sender’s MAC (Unicast) |
| Source MAC | Sender’s MAC | Receiver’s MAC |
| Sender IP | IP of requesting device | IP of replying device |
| Target IP | IP being searched | IP of requester |
| Target MAC | Unknown (00:00:00:00:00:00) | Known (Requester’s MAC) |
| Transmission Type | Broadcast | Unicast |

---

##  Role of Sender’s IP and MAC Address

| Parameter | Role in ARP |
|----------|------------|
| Sender IP Address | Identifies the device initiating or responding to ARP |
| Sender MAC Address | Used by the receiver to update ARP table for future communication |

- In an **ARP Request**, the sender includes its own IP and MAC so that the receiver knows where to send the reply.
- In an **ARP Reply**, the sender provides its MAC address corresponding to its IP, enabling direct communication.

---

##  Wireshark Observations

When capturing ARP packets in Wireshark:

- ARP Requests appear as:

Who has 192.168.x.x? Tell 192.168.x.x

- ARP Replies appear as:

192.168.x.x is at XX:XX:XX:XX:XX:XX


These packets include fields such as sender IP, sender MAC, target IP, and target MAC, which can be examined in detail under the ARP protocol section.

<img width="1920" height="1200" alt="Screenshot 2026-03-17 223259" src="https://github.com/user-attachments/assets/c179c460-8d39-4ca5-9aca-b9549e3e8187" />
<img width="1920" height="1200" alt="Screenshot 2026-03-17 223335" src="https://github.com/user-attachments/assets/59262483-0fdf-499b-955d-1459dd083f63" />

---

##  Importance of ARP in Packet Forwarding

ARP is essential for successful packet delivery within a local network. Without ARP, devices would not be able to determine the MAC address required for Ethernet frame transmission. It ensures that IP packets are correctly encapsulated into frames with appropriate destination MAC addresses.

---

##  Conclusion

ARP plays a critical role in local network communication by resolving IP addresses to MAC addresses. Through Wireshark analysis, ARP request and reply frames can be observed, providing insight into how sender IP and MAC addresses are used to establish communication between devices efficiently.
