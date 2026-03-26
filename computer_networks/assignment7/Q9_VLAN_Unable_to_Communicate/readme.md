#VLAN Communication
## CONFIGURATION
### 1. Create VLANs (Both Switches)
```bash
enable
configure terminal

vlan 10
name VLAN10

vlan 20
name VLAN20
```

<img width="701" height="369" alt="Screenshot 2026-03-24 121438" src="https://github.com/user-attachments/assets/43ee2860-adaa-40f1-a414-51f5e7d5a0d6" />

### 2. Assign Access Ports
Switch0
```bash
interface fa0/1
switchport mode access
switchport access vlan 10

interface fa0/2
switchport mode access
switchport access vlan 10
```
Switch1
```bash
interface fa0/1
switchport mode access
switchport access vlan 20

interface fa0/2
switchport mode access
switchport access vlan 20
```
### 3. Configure Trunk
On BOTH switches
```bash
interface gi0/1
switchport mode trunk
switchport trunk allowed vlan 10,20
no shutdown
```

## TROUBLESHOOTING STEPS
### Check VLANs
```bash
show vlan brief
```
### Check Trunk
```bash
show interfaces trunk
```
 Check MAC Table
 ```bash
show mac address-table
```

<img width="854" height="925" alt="Screenshot 2026-03-24 121351" src="https://github.com/user-attachments/assets/c5faf4d9-5b2d-4378-aa7f-f5898af3170c" />
<img width="609" height="912" alt="Screenshot 2026-03-24 121402" src="https://github.com/user-attachments/assets/1648f2d9-88a3-4c00-b37a-17ae408a1301" />

