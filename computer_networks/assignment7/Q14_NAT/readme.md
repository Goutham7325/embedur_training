# NAT

# Types and Configuration commands
## Static NAT
### Concept
One-to-One mapping between private IP and public IP

Each internal device is assigned a fixed public IP.

Example
192.168.10.1  →  200.0.0.10
### Characteristics
Permanent mapping
Same public IP always used

### Cisco Configuration
```bash
ip nat inside source static 192.168.10.1 200.0.0.10
```

## Dynamic NAT
### Concept
Many private IPs → mapped to a pool of public IPs

Public IPs are assigned dynamically from a pool.

Example
192.168.10.1 → 200.0.0.10
192.168.10.2 → 200.0.0.11
### Characteristics
Temporary mapping
Uses a pool of public IPs
Limited by pool size
### Cisco Configuration
```bash
access-list 1 permit 192.168.10.0 0.0.0.255

ip nat pool PUBLIC 200.0.0.10 200.0.0.20 netmask 255.255.255.0

ip nat inside source list 1 pool PUBLIC
```

## PAT (Port Address Translation)
### Concept
Many private IPs → share ONE public IP using different ports

Also called:

NAT Overload
Example
192.168.10.1 → 200.0.0.10:1025
192.168.10.2 → 200.0.0.10:1026
### Characteristics
Uses single public IP
Differentiates using port numbers
Most commonly used in real networks
### Cisco Configuration
```bash
access-list 1 permit 192.168.10.0 0.0.0.255
ip nat inside source list 1 interface g0/1 overload
```

## Network in Cisco

### Static NAT
<img width="809" height="616" alt="Screenshot 2026-03-24 170210" src="https://github.com/user-attachments/assets/b3c06974-722d-4ef3-8c5c-9bd5e12db552" />
Ping from  Private network to Public Network:
<img width="955" height="974" alt="Screenshot 2026-03-24 170250" src="https://github.com/user-attachments/assets/8420b389-d843-4d4c-a169-04d1f99f8b81" />
URL Request from Public Network to Private Network using Private IP:
<img width="958" height="860" alt="Screenshot 2026-03-24 170339" src="https://github.com/user-attachments/assets/c28fd799-5a20-4aba-8bb0-6770e1b7d1ee" />
URL Request from Public Network to Private Network using PAT:
<img width="960" height="816" alt="Screenshot 2026-03-24 170353" src="https://github.com/user-attachments/assets/5a0efa52-a715-471b-843b-b21a6c591997" />
NAT Table of Private Network Router:
<img width="961" height="862" alt="Screenshot 2026-03-24 170452" src="https://github.com/user-attachments/assets/acf57f17-4cf2-47d3-afb7-223a6533f094" />


### Dynamic NAT
<img width="591" height="495" alt="Screenshot 2026-03-24 213452" src="https://github.com/user-attachments/assets/542dedc4-7c7e-4cdd-821d-9f7fa47ccb90" />
Ping from Private Network to Public IP:
<img width="959" height="957" alt="Screenshot 2026-03-24 215538" src="https://github.com/user-attachments/assets/1eca580c-ba83-4ffb-b8b0-0b39a2a293c4" />
Access List of Router:
<img width="956" height="960" alt="Screenshot 2026-03-24 215719" src="https://github.com/user-attachments/assets/6bddd076-d966-4fb3-bc59-59c6c6362612" />
NAT Translation Table:
<img width="958" height="961" alt="Screenshot 2026-03-24 215838" src="https://github.com/user-attachments/assets/072a4680-bb75-47c2-9e2e-ac9511f4a286" />


### PAT
NAT Translations
<img width="1540" height="820" alt="Screenshot 2026-03-24 223735" src="https://github.com/user-attachments/assets/b283980f-9147-4206-987a-d6787e582ab3" />
<img width="1536" height="820" alt="Screenshot 2026-03-24 223749" src="https://github.com/user-attachments/assets/90f5aea1-9aa1-4ffa-8551-2f8856ce847b" />
Ping from Private to Public Network
<img width="1441" height="885" alt="Screenshot 2026-03-24 223911" src="https://github.com/user-attachments/assets/1eb887a9-3024-4e9b-ad7f-967b87c1e9e9" />
Ping from Public to Private Network
<img width="1528" height="829" alt="Screenshot 2026-03-24 223929" src="https://github.com/user-attachments/assets/581f6fb4-6727-4513-bcd6-ab54dc56b323" />

## Comparison Table

## NAT Comparison Table

| Feature        | Static NAT              | Dynamic NAT                    | PAT (NAT Overload)            |
|----------------|------------------------|--------------------------------|-------------------------------|
| Mapping        | One-to-One             | Many-to-Many (using pool)      | Many-to-One                   |
| Public IP Use  | High (one per device)  | Medium (pool required)         | Very Low (single IP shared)   |
| Port Usage     | No                     | No                             | Yes (uses port numbers)       |
| Mapping Type   | Permanent              | Temporary                      | Temporary                     |
| Configuration  | Simple                 | Moderate                       | Simple                        |
| Scalability    | Low                    | Medium                         | High                          |
| Common Use     | Servers (web, mail)    | Enterprise networks            | Home/office internet access   |
| Efficiency     | Low                    | Medium                         | High                          |
| Example        | 1 IP ↔ 1 IP            | Pool of IPs assigned dynamically | Many IPs share 1 public IP |

