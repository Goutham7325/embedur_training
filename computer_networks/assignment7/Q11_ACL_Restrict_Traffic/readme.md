# ACL Restrict Traffic based on Port
## Topology
In this topology:

- VLAN 10 → 192.168.10.0/24 (PC0, PC1)
- VLAN 20 → 192.168.20.0/24 (PC2, PC3, Server)

Router performs inter-VLAN routing.
<img width="793" height="488" alt="Screenshot 2026-03-26 231823" src="https://github.com/user-attachments/assets/f2fc579a-45bb-41db-bfef-40d58cc128ef" />


- VLAN 10 → 192.168.10.0/24 (PC0, PC1)
- VLAN 20 → 192.168.20.0/24 (PC2, PC3, Server)

Router performs inter-VLAN routing.

## Router Configuration
### Step 1: Create Extended ACL
```bash
enable
configure terminal

access-list 100 deny tcp 192.168.10.0 0.0.0.255 host 192.168.20.100 eq 80
access-list 100 permit ip any any
```
### Step 2: Apply ACL

Apply near source (VLAN 10 side)
```bash
interface g0/0
ip access-group 100 in
```
## Testing
### 1. Test HTTP (Blocked)

From PC0:

Open Web Browser
```text
http://192.168.20.100
```
<img width="958" height="843" alt="Screenshot 2026-03-24 143414" src="https://github.com/user-attachments/assets/7f7edb84-f06f-4d84-90a3-bd0c46ec9251" />

Expected After ACL Rule:
```text
Request timeout
```
<img width="955" height="813" alt="Screenshot 2026-03-24 143915" src="https://github.com/user-attachments/assets/6a1fe5cb-aa21-4b3c-a04e-021d48d4ca8f" />

### 2. Test Ping (Allowed)
```bash
ping 192.168.20.100
```
<img width="960" height="805" alt="Screenshot 2026-03-24 143944" src="https://github.com/user-attachments/assets/d5775ee6-e164-4651-984c-23fe9dde878f" />

## Verification Commands
```bash
show access-lists
show running-config
```

<img width="960" height="804" alt="Screenshot 2026-03-24 144029" src="https://github.com/user-attachments/assets/bf499356-8ce6-4b82-8bc6-6b3a18ee9096" />
