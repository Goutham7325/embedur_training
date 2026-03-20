##  Subnetting
The network **192.168.1.0/24** is divided into smaller subnets.

- Required: 4 usable subnets (excluding first & last)
- Borrowed bits: 3
- New subnet mask: **/27 → 255.255.255.224**
- Total subnets: 8
- Usable subnets: 6 (middle subnets used)

---

##  VLAN (Virtual LAN)
VLANs logically divide a switch into multiple networks.

- VLAN 10 → Subnet 1  
- VLAN 20 → Subnet 2  
- VLAN 30 → Subnet 3  
- VLAN 40 → Subnet 4  

---

##  Router-on-a-Stick
A single router interface is divided into **subinterfaces**, each assigned to a VLAN.

- Enables communication between different subnets (inter-VLAN routing)

---

##  Trunking
A trunk link carries traffic from multiple VLANs using **802.1Q tagging**.

---

## Images from Cisco Packet Tracer
<img width="1534" height="517" alt="Screenshot 2026-03-20 222104" src="https://github.com/user-attachments/assets/cb2bc184-42d5-4e20-8ea4-64003b4c767a" />
<img width="1495" height="526" alt="Screenshot 2026-03-20 222054" src="https://github.com/user-attachments/assets/69473382-e168-4d10-9ea1-1f9ca9027a4c" />
<img width="647" height="483" alt="Screenshot 2026-03-20 222042" src="https://github.com/user-attachments/assets/8489e24b-2ef5-491d-892a-f64ed5dd1727" />
<img width="694" height="487" alt="Screenshot 2026-03-20 222024" src="https://github.com/user-attachments/assets/13bddc2d-1945-4f90-ba0a-b01cda309424" />
<img width="691" height="513" alt="Screenshot 2026-03-20 222018" src="https://github.com/user-attachments/assets/6eb666fe-a5ce-42d0-9f3a-cc0e542a37e0" />
<img width="743" height="532" alt="Screenshot 2026-03-20 222012" src="https://github.com/user-attachments/assets/e901b496-4043-4a17-8fa5-cb026075b765" />
<img width="678" height="466" alt="Screenshot 2026-03-20 222006" src="https://github.com/user-attachments/assets/1f43d05b-8e55-4ec6-96a0-e102bbbaea0e" />
<img width="659" height="485" alt="Screenshot 2026-03-20 222000" src="https://github.com/user-attachments/assets/cfd97b83-bd1d-4016-bd9d-2add09853ed9" />
<img width="655" height="525" alt="Screenshot 2026-03-20 221953" src="https://github.com/user-attachments/assets/c2642186-802f-4d85-8345-1d989715249a" />
<img width="680" height="497" alt="Screenshot 2026-03-20 221947" src="https://github.com/user-attachments/assets/951e6b7c-7c21-4424-b4c6-40d21588e99d" />

---

##  Router Configuration

```bash
enable
configure terminal

interface g0/0
no shutdown
```
Subinterfaces

```bash
interface g0/0.10
encapsulation dot1Q 10
ip address 192.168.1.33 255.255.255.224

interface g0/0.20
encapsulation dot1Q 20
ip address 192.168.1.65 255.255.255.224

interface g0/0.30
encapsulation dot1Q 30
ip address 192.168.1.97 255.255.255.224

interface g0/0.40
encapsulation dot1Q 40
ip address 192.168.1.129 255.255.255.224
```

## Switch Interface

Create VLAN

```bash
enable
configure terminal

vlan 10
vlan 20
vlan 30
vlan 40
```
Assign Port to VLAN

```bash
interface fa0/1
switchport mode access
switchport access vlan 10

interface fa0/2
switchport mode access
switchport access vlan 20

interface fa0/3
switchport mode access
switchport access vlan 30

interface fa0/4
switchport mode access
switchport access vlan 40
```
Configure Trunk
```bash
interface fa0/24   # or correct port connected to router
switchport mode trunk
```

## PC Configuration

Each PC is assigned:

IP address from its subnet

Subnet mask: 255.255.255.224

Default gateway: corresponding router IP

## Verification Commands
Router
```bash
show ip interface brief
```
## Switch
```bash
show vlan brief
show interfaces trunk
```
## PC
```bash
ping <destination IP>
```


<img width="578" height="471" alt="Screenshot 2026-03-20 221939" src="https://github.com/user-attachments/assets/89559861-4865-4490-8c88-7b85cf241ae1" />
<img width="636" height="501" alt="Screenshot 2026-03-20 221932" src="https://github.com/user-attachments/assets/5c813b03-9b68-45ea-8dc6-0c70cc673d34" />
