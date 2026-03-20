#  Concept: NAT using ISP Router (No Cloud)

In this setup, **two routers** are used:
- **Router1** → NAT Router (connects internal network)
- **Router2** → ISP Router (simulates the internet)

###  NAT (Network Address Translation)
- Converts **private IP (192.168.x.x)** → **public IP (200.1.1.x)**
- Allows internal devices to communicate with external networks

###  PAT (Port Address Translation)
- Multiple PCs share a **single public IP**
- Enabled using the `overload` keyword

---

#  Topology

PCs → Switch → Router1 (NAT) → Router2 (ISP)

<img width="500" height="511" alt="Screenshot 2026-03-20 232432" src="https://github.com/user-attachments/assets/948265ae-4b86-4596-9000-4541dbd80a89" />
<img width="526" height="506" alt="Screenshot 2026-03-20 232438" src="https://github.com/user-attachments/assets/d9dde42a-1165-4b36-82ba-664f0a04140e" />
<img width="516" height="517" alt="Screenshot 2026-03-20 232445" src="https://github.com/user-attachments/assets/ed50465a-36be-4a79-864e-12aa0726ec97" />
<img width="503" height="498" alt="Screenshot 2026-03-20 232452" src="https://github.com/user-attachments/assets/e6aef97b-d2a4-49f2-adf4-5137571faffe" />
<img width="523" height="515" alt="Screenshot 2026-03-20 232458" src="https://github.com/user-attachments/assets/d6328663-fe8d-4dff-99e8-c10863018e49" />
<img width="474" height="484" alt="Screenshot 2026-03-20 232505" src="https://github.com/user-attachments/assets/1b2086f3-26cd-4aaf-8216-6fcb3a93328b" />
<img width="1337" height="612" alt="Screenshot 2026-03-20 232527" src="https://github.com/user-attachments/assets/68261123-0c50-41ea-b25d-1b6b203df497" />

---

#  IP Addressing

| Device | Interface | IP Address |
|--------|----------|------------|
| PC1 | — | 192.168.1.2 |
| PC2 | — | 192.168.1.3 |
| Router1 | G0/0 (inside) | 192.168.1.1 |
| Router1 | G0/1 (outside) | 200.1.1.1 |
| Router2 (ISP) | G0/0 | 200.1.1.2 |

---

#  Commands Executed

---

##  Router1 (NAT Router)

### Configure interfaces

```bash
enable
configure terminal

interface g0/0
ip address 192.168.1.1 255.255.255.0
ip nat inside
no shutdown

interface g0/1
ip address 200.1.1.1 255.255.255.0
ip nat outside
no shutdown
```
Create ACL (define internal network)
```bash
access-list 1 permit 192.168.1.0 0.0.0.255
```
Enable NAT (PAT)
```bash
ip nat inside source list 1 interface g0/1 overload
```
Add default route
```bash
ip route 0.0.0.0 0.0.0.0 200.1.1.2
```

## Router2 (ISP Router)

```bash
enable
configure terminal
```

# Verification Commands
## On Router1
```bash
show ip interface brief
show ip nat translations
show ip route
```
## Testing from PC
```bash
ping 200.1.1.2
```
---

# IP Addressing Table
---

| Device | Interface | IP Address |
|--------|----------|------------|
| PC1 | — | 192.168.1.2 |
| PC2 | — | 192.168.1.3 |
| Router1 (NAT) | G0/0 (inside) | 192.168.1.1 |
| Router1 (NAT) | G0/1 (outside) | 200.1.1.1 |
| Router2 (ISP) | G0/0 | 200.1.1.2 |

---

# PC Configuration Table

| Device | IP Address | Subnet Mask | Default Gateway |
|--------|------------|-------------|-----------------|
| PC1 | 192.168.1.2 | 255.255.255.0 | 192.168.1.1 |
| PC2 | 192.168.1.3 | 255.255.255.0 | 192.168.1.1 |

---

# 📡 NAT Translation Table (Conceptual)

| Stage | Source IP |
|------|-----------|
| Before NAT | 192.168.1.x |
| After NAT | 200.1.1.1 |

---
