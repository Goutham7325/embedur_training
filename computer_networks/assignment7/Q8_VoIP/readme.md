# Voice VLAN + Data VLAN Configuration (Cisco)
## CONCEPT

In this setup:

-  **IP Phone → Voice VLAN (VLAN 20)**
-  **PC → Data VLAN (VLAN 10)**

Both devices share **same physical switch port**, but:

```text
IP Phone tags traffic → VLAN 20 (voice)
PC traffic remains untagged → VLAN 10 (data)
```
## TOPOLOGY
PC ---- IP Phone ---- Switch
          |
     (Voice + Data)


<img width="642" height="283" alt="Screenshot 2026-03-26 221458" src="https://github.com/user-attachments/assets/6b8bdfbd-6312-4858-95dd-f5a9fba32b1b" />

## CONFIGURATION STEPS
 1. Create VLANs
```bash
enable
configure terminal

vlan 10
name DATA

vlan 20
name VOICE
```
 2. Configure Switch Port (Connected to IP Phone)
```bash
interface fa0/1
switchport mode access
switchport access vlan 10
switchport voice vlan 20
spanning-tree portfast
```
<img width="844" height="282" alt="Screenshot 2026-03-26 221446" src="https://github.com/user-attachments/assets/01e422eb-53cd-4514-bd8a-3c9bedcd4f01" />
<img width="365" height="269" alt="Screenshot 2026-03-26 221436" src="https://github.com/user-attachments/assets/b6893f8b-3df4-47be-a42c-724f5820da4e" />


## EXPLANATION
Command	Purpose
```text
switchport access vlan 10	PC data traffic
switchport voice vlan 20	IP phone traffic
portfast	Faster device connection
```

## IP ADDRESSING
 PC (Data VLAN 10)
IP: 192.168.10.x
Gateway: 192.168.10.254
 IP Phone (Voice VLAN 20)
IP: 192.168.20.x
Gateway: 192.168.20.254
### VERIFICATION
Check VLAN assignment
```bash
show vlan brief
```
<img width="828" height="274" alt="image" src="https://github.com/user-attachments/assets/56a48e39-43b0-4538-8f3c-30b16e08db5c" />

Check interface config
```bash
show running-config interface fa0/1
```
<img width="826" height="380" alt="image" src="https://github.com/user-attachments/assets/18309b0d-188d-4c54-a6d0-4a8da7b1bb7d" />

Check phone learned VLAN
```bash
show mac address-table
```
<img width="423" height="171" alt="image" src="https://github.com/user-attachments/assets/f48fa049-d53f-4fc5-af48-bf403fdfad40" />


## EXPECTED RESULT
PC → VLAN 10 
IP Phone → VLAN 20 
Both work on same port
