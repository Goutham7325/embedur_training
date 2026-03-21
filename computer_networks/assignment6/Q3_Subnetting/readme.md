# Subnetting Report: 10.0.0.0/24 using 3 Borrowed Bits

---

# Concept

Subnetting is the process of dividing a larger network into smaller logical networks to improve performance and manageability. 

In this task, the network **10.0.0.0/24** is subnetted by borrowing **3 bits** from the host portion. This creates more subnets than required, allowing flexibility such as excluding the first and last subnet if needed.

---

# Calculation

## Step 1: Number of bits borrowed

Number of bits borrowed = 3

\[
2^3 = 8 \text{ subnets}
\]

---

## Step 2: New Subnet Mask

\[
/24 + 3 = /27
\]

Subnet mask:
255.255.255.224

## Step 3: Subnet Size

\[
2^{5} = 32 \text{ addresses per subnet}
\]

Usable hosts per subnet:

\[
32 - 2 = 30
\]

---

# Subnet Table

| Subnet | Network Address | Valid Host Range | Broadcast Address |
|--------|----------------|------------------|-------------------|
| 1 | 10.0.0.0/27 | 10.0.0.1 – 10.0.0.30 | 10.0.0.31 |
| 2 | 10.0.0.32/27 | 10.0.0.33 – 10.0.0.62 | 10.0.0.63 |
| 3 | 10.0.0.64/27 | 10.0.0.65 – 10.0.0.94 | 10.0.0.95 |
| 4 | 10.0.0.96/27 | 10.0.0.97 – 10.0.0.126 | 10.0.0.127 |
| 5 | 10.0.0.128/27 | 10.0.0.129 – 10.0.0.158 | 10.0.0.159 |
| 6 | 10.0.0.160/27 | 10.0.0.161 – 10.0.0.190 | 10.0.0.191 |
| 7 | 10.0.0.192/27 | 10.0.0.193 – 10.0.0.222 | 10.0.0.223 |
| 8 | 10.0.0.224/27 | 10.0.0.225 – 10.0.0.254 | 10.0.0.255 |

---

# Selected Subnets (Excluding First and Last)

| Subnet | Network Address | Host Range | Broadcast |
|--------|----------------|-----------|----------|
| 1 | 10.0.0.32/27 | 10.0.0.33 – 10.0.0.62 | 10.0.0.63 |
| 2 | 10.0.0.64/27 | 10.0.0.65 – 10.0.0.94 | 10.0.0.95 |
| 3 | 10.0.0.96/27 | 10.0.0.97 – 10.0.0.126 | 10.0.0.127 |
| 4 | 10.0.0.128/27 | 10.0.0.129 – 10.0.0.158 | 10.0.0.159 |

---

# Packet Tracer Implementation

## Topology
<img width="900" height="773" alt="Screenshot 2026-03-21 115312" src="https://github.com/user-attachments/assets/9edd6b85-71aa-44c5-acfa-cc149e7840b7" />

# Commands Executed

## Router Configuration

```bash
enable
configure terminal

interface g0/0
no shutdown
```

---

## Subinterface Configuration

```bash
interface g0/0.10
encapsulation dot1Q 10
ip address 10.0.0.33 255.255.255.224

interface g0/0.20
encapsulation dot1Q 20
ip address 10.0.0.65 255.255.255.224

interface g0/0.30
encapsulation dot1Q 30
ip address 10.0.0.97 255.255.255.224

interface g0/0.40
encapsulation dot1Q 40
ip address 10.0.0.129 255.255.255.224
```

---

## Switch Configuration

```bash
enable
configure terminal

vlan 10
vlan 20
vlan 30
vlan 40
```

---

## Assign Ports

```bash
interface fa0/1
switchport mode access
switchport access vlan 10

interface fa0/2
switchport access vlan 20

interface fa0/3
switchport access vlan 30

interface fa0/4
switchport access vlan 40
```

---

## Trunk Configuration

```bash
interface gig0/1
switchport mode trunk
```

---

# PC Configuration

| PC | IP Address | Subnet Mask | Default Gateway |
|----|-----------|-------------|-----------------|
| PC0 | 10.0.0.34 | 255.255.255.224 | 10.0.0.33 |
| PC1 | 10.0.0.66 | 255.255.255.224 | 10.0.0.65 |
| PC2 | 10.0.0.98 | 255.255.255.224 | 10.0.0.97 |
| PC3 | 10.0.0.130 | 255.255.255.224 | 10.0.0.129 |

---

# Verification

## Ping Test

```bash
ping 10.0.0.66
ping 10.0.0.98
ping 10.0.0.130
```

---

## Router Verification

```bash
show ip interface brief
show ip route
```

---

# Result

The network 10.0.0.0/24 was subnetted using 3 borrowed bits to create 8 subnets. Four subnets were selected by excluding the first and last. Devices were assigned IP addresses from these subnets and connected through a router. Successful ping results confirmed proper inter-subnet communication.

---
