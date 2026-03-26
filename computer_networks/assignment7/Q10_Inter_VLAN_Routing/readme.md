# Inter VLAN Routing

## Topology
Each VLAN is a separate Layer 2 network.
Router acts as a Layer 3 device to route traffic between VLANs.
PC0, PC1 → Switch0 → Router (G0/0)
PC2, PC3 → Switch1 → Router (G0/1)
Network	VLAN	Router Interface
192.168.10.0/24	VLAN 10	G0/0
192.168.20.0/24	VLAN 20	G0/1
<img width="735" height="474" alt="Screenshot 2026-03-24 122519" src="https://github.com/user-attachments/assets/ecd58b60-eb02-46d7-865a-285bf4ccc2ad" />

## Switch Configuration
Switch0 (VLAN 10)
```bash
enable
configure terminal

vlan 10
name VLAN10

interface fa0/1
switchport mode access
switchport access vlan 10

interface fa0/2
switchport mode access
switchport access vlan 10

interface fa0/24
switchport mode access
switchport access vlan 10
```
Switch1 (VLAN 20)
```bash
enable
configure terminal

vlan 20
name VLAN20

interface fa0/1
switchport mode access
switchport access vlan 20

interface fa0/2
switchport mode access
switchport access vlan 20

interface fa0/24
switchport mode access
```


## Router Configuration
```bash
enable
configure terminal

interface g0/0
ip address 192.168.10.254 255.255.255.0
no shutdown

interface g0/1
ip address 192.168.20.254 255.255.255.0
no shutdown
```
## Verification Steps
1. Check router interfaces
```bash
show ip interface brief
```

Expected:

G0/0 → 192.168.10.254 → up/up
G0/1 → 192.168.20.254 → up/up


<img width="752" height="97" alt="image" src="https://github.com/user-attachments/assets/0d95111e-bb8f-42f4-9e99-949f00982f32" />

2. Check switch VLANs
```bash
show vlan brief
```

<img width="868" height="759" alt="image" src="https://github.com/user-attachments/assets/637039ac-4009-439c-a00e-99a7d55b52d1" />
<img width="867" height="789" alt="image" src="https://github.com/user-attachments/assets/58e5ed4e-597d-4bd9-a0d6-3cddf06d98d6" />


3. Test same VLAN connectivity

From PC0:
```bash
ping 192.168.10.2
```

4. Test inter-VLAN connectivity

From PC0:
```bash
ping 192.168.20.1
```
<img width="875" height="1016" alt="Screenshot 2026-03-24 122512" src="https://github.com/user-attachments/assets/0aec5f46-c62c-49f4-808e-8b72f7dd61d4" />
<img width="601" height="159" alt="Screenshot 2026-03-24 122703" src="https://github.com/user-attachments/assets/ca07da50-d68f-4894-aede-716550072994" />

