# Ethernet Frame Analysis and MAC Address Learning using Wireshark

## Objective
The objective of this experiment is to simulate a small LAN network with multiple devices, generate traffic using the `ping` command, observe MAC address communication, and capture Ethernet frames using Wireshark for analysis.

---

## Network Setup

Two Linux virtual machines were used to simulate hosts in a LAN environment.

- VM1: Ubuntu (embedurU1)
- VM2: Ubuntu (Ubuntu2)

Both virtual machines were connected using the VirtualBox **Host-Only Network Adapter** so they belong to the same subnet.

### Network Topology

<img width="1920" height="1140" alt="Screenshot 2026-03-11 173456" src="https://github.com/user-attachments/assets/13a2f414-c3e5-4ef1-8514-3da5ab2e0957" />

## Network Setup

Two Linux virtual machines were used to simulate hosts in a LAN environment.

- **VM1:** Ubuntu (embedurU1)  
- **VM2:** Ubuntu (Ubuntu2)

Both virtual machines were connected using the VirtualBox **Host-Only Network Adapter**, ensuring they belong to the same subnet.

### Network Topology

```
VM1 (192.168.10.1)
        │
        │ Host-Only Network (Virtual Switch)
        │
VM2 (192.168.10.2)
```

---

## IP Configuration

Static IP addresses were assigned to both machines.

| Device | IP Address | Subnet Mask |
|------|------|------|
| VM1 | 192.168.10.1 | 255.255.255.0 |
| VM2 | 192.168.10.2 | 255.255.255.0 |

### Commands Used

Configure IP address:

```bash
sudo ip addr add 192.168.10.1/24 dev enp0s3
sudo ip link set enp0s3 up
```

Verify configuration:

```bash
ip a
```

---

## Generating Network Traffic

Network traffic was generated using the `ping` command.

Example:

```bash
ping 192.168.10.2
```

Example output:

```
64 bytes from 192.168.10.2: icmp_seq=1 ttl=64 time=3.85 ms
64 bytes from 192.168.10.2: icmp_seq=2 ttl=64 time=1.01 ms
```

This confirms successful communication between the two hosts.

---

## Capturing Packets using Wireshark

Wireshark was used to capture packets on the network interface.

### Steps

1. Open **Wireshark**.
2. Select the network interface `enp0s3`.
3. Start packet capture.
4. Run the `ping` command between the two machines.
5. Observe captured packets.

---

## Observed Packets

The following protocols were observed in the capture:

- **ARP**
- **ICMP**
- **DHCP**
- **IPv6 ICMP**
- **Ethernet II frames**

| Protocol | Description |
|------|------|
| ARP | Resolves IP address to MAC address |
| ICMP | Used by ping for connectivity testing |
| DHCP | Dynamic IP address assignment |
| IPv6 ICMP | Neighbor discovery |

---

## Ethernet Frame Structure Analysis

A captured Ethernet frame contains the following fields:

| Field | Description |
|------|------|
| Destination MAC | Address of receiving device |
| Source MAC | Address of sending device |
| EtherType | Protocol encapsulated in payload |
| Payload | Actual transmitted data |
| Frame Check Sequence (FCS) | Error detection field |

Example from Wireshark:

```
Ethernet II
Source: 0a:00:27:00:00:13
Destination: 33:33:ff:00:00:01
Type: IPv6 (0x86dd)
```

---

## MAC Address Learning

When a device sends a packet:

1. The system first performs an **ARP request**.
2. The receiving host replies with its **MAC address**.
3. The sender stores the mapping in its **ARP table**.

Check ARP table using:

```bash
ip neigh
```

Example output:

```
192.168.10.2 dev enp0s3 lladdr 08:00:27:xx:xx:xx REACHABLE
```

This shows the mapping between **IP address and MAC address**.

---

## Results

- Successful communication between two hosts was established.
- ICMP packets were generated using the `ping` command.
- Ethernet frames were captured and analyzed using Wireshark.
- MAC address mapping was observed using ARP.

---

## Conclusion

A small LAN environment was simulated using virtual machines. Network traffic was generated using the `ping` command and captured using Wireshark. Ethernet frames were analyzed to understand MAC addressing and packet structure. The experiment demonstrates how devices communicate at the **Data Link Layer** and how MAC addresses are used for frame delivery.

---

## Commands Used

```bash
ip a
ping <IP_address>
ip neigh
```
