#  DHCP Packet Capture Analysis (Wireshark)

In this experiment, Wireshark was used to capture and analyze the Dynamic Host Configuration Protocol (DHCP) process, which enables automatic IP address assignment. The DHCP communication follows a four-step process known as DORA: Discover, Offer, Request, and Acknowledgement.

Initially, the client broadcasts a **DHCP Discover** message to locate available DHCP servers on the network. This packet uses source IP 0.0.0.0 and destination IP 255.255.255.255, indicating that the client does not yet have an IP address. In response, the DHCP server sends a **DHCP Offer** message containing an available IP address, subnet mask, gateway, and lease time.

Next, the client replies with a **DHCP Request** message, indicating acceptance of the offered IP configuration. This request is also broadcast to ensure all DHCP servers are informed of the selected offer. Finally, the server sends a **DHCP Acknowledgement (ACK)** message, confirming the lease and completing the configuration process.

Wireshark captures clearly display these four messages along with transaction IDs and MAC addresses used for identification. This process demonstrates how DHCP simplifies network configuration by dynamically assigning IP addresses, reducing manual errors, and enabling efficient network management.

# Flowchart

+------------------+
|   DHCP Client    |
| (No IP Address)  |
+--------+---------+
         |
         | DHCP Discover (Broadcast)
         v
+------------------+
|   DHCP Server    |
+--------+---------+
         |
         | DHCP Offer (Available IP)
         v
+------------------+
|   DHCP Client    |
+--------+---------+
         |
         | DHCP Request (Accept Offer)
         v
+------------------+
|   DHCP Server    |
+--------+---------+
         |
         | DHCP ACK (Confirm Lease)
         v
+------------------+
|   DHCP Client    |
| (IP Configured)  |
+------------------+


# ScreenShots
<img width="1920" height="1200" alt="Screenshot 2026-03-17 224326" src="https://github.com/user-attachments/assets/666ab24d-5385-492c-9ab0-096f1c4d25c1" />
<img width="1920" height="1200" alt="Screenshot 2026-03-17 224337" src="https://github.com/user-attachments/assets/cfc1e34a-1675-40d9-a3b4-c6e1e9b9e6ba" />
<img width="1920" height="1200" alt="Screenshot 2026-03-17 224354" src="https://github.com/user-attachments/assets/e258baeb-6d98-4576-b6e3-483cfad49fb1" />

