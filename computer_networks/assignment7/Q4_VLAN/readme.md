#  VLAN, Trunking, Native VLAN & Management VLAN – Cisco Flow

---

## 1. Topology Setup


PC0 ---- Switch0 ---- Switch1 ---- PC2
| |
PC1 PC3


- VLAN 10 → PC0, PC2  
- VLAN 20 → PC1, PC3  
- Trunk → between switches (Gi0/1)

<img width="640" height="384" alt="Screenshot 2026-03-24 113513" src="https://github.com/user-attachments/assets/d7767a5d-b1be-4b06-98e7-ffbc8050f472" />

---
##  2. Create VLANs (Both Switches)

```bash
enable
configure terminal

vlan 10
name VLAN10

vlan 20
name VLAN20
```
## 3. Assign Access Ports
Switch0
```bash
interface fa0/1
switchport mode access
switchport access vlan 10

interface fa0/2
switchport mode access
switchport access vlan 20
```
Switch1
```bash
interface fa0/1
switchport mode access
switchport access vlan 10

interface fa0/2
switchport mode access
switchport access vlan 20

<img width="696" height="415" alt="Screenshot 2026-03-24 114006" src="https://github.com/user-attachments/assets/f237c1c5-e237-4d53-8b24-f8522c70c045" />
<img width="776" height="382" alt="Screenshot 2026-03-24 114022" src="https://github.com/user-attachments/assets/186f649e-dee7-4ec3-ba97-a8b13a175bca" />

```
## 4. Configure Trunk Port (Gi0/1)
```bash
interface gi0/1
switchport mode trunk
switchport trunk allowed vlan 10,20
```
(Apply on both switches)
<img width="560" height="215" alt="Screenshot 2026-03-24 114323" src="https://github.com/user-attachments/assets/80036b5f-0064-43ab-8e32-d044114965a6" />

## 5. Test VLAN Connectivity
 PC0 → PC2 (same VLAN) → SUCCESS
 PC0 → PC1 (different VLAN) → FAIL
## 6. Change Native VLAN
On Switch0
```bash
interface gi0/1
switchport trunk native vlan 99
```
On Switch1 (leave unchanged → mismatch)
 Native VLAN mismatch occurs
## 7. Troubleshoot VLAN Mismatch
```bash
show interfaces trunk
```
Fix:
```bash
interface gi0/1
switchport trunk native vlan 99
```
(Apply on both switches)

## 8. Configure Management VLAN
Step 1: Create VLAN
```bash
vlan 99
name MANAGEMENT
```
Step 2: Assign SVI
```bash
interface vlan 99
ip address 192.168.99.1 255.255.255.0
no shutdown
```
Step 3: Set Default Gateway
```bash
ip default-gateway 192.168.99.254
```
## 9. Configure SSH / Telnet
Hostname & Domain
```bash
hostname SW1
ip domain-name lab.local
```
Create User
```bash
username admin password cisco123
```
Generate RSA Keys
```bash
crypto key generate rsa
```
Use 1024 bits
Enable VTY Access
```bash
line vty 0 4
login local
transport input ssh telnet
```
## 10. Test Remote Access
```bash
ssh -l admin 192.168.99.1
```

switchport mode trunk
```
