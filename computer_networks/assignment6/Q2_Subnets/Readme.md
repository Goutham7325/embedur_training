# Static Routing – Concept and Configuration

##  Concept

Static routing is a method where routes are **manually configured** on routers to direct network traffic. Unlike dynamic routing, static routes do not change automatically and must be updated by the administrator.

A router uses the `ip route` command to define the path to reach a destination network. Each static route specifies:
- Destination network
- Subnet mask
- Next-hop IP address (or exit interface)

Static routing is simple, secure, and suitable for small networks.

---

## 🖧 Topology
PC1 → Router1 → Router2 → PC2


---<img width="602" height="336" alt="Screenshot 2026-03-21 111204" src="https://github.com/user-attachments/assets/75872e24-f6b0-4076-afac-5539a667ef26" />


##  IP Addressing

| Device | Interface | IP Address |
|--------|----------|------------|
| PC1 | — | 192.168.1.2/24 |
| Router1 | G0/0 | 192.168.1.1 |
| Router1 | G0/1 | 10.0.0.1 |
| Router2 | G0/0 | 10.0.0.2 |
| Router2 | G0/1 | 192.168.2.1 |
| PC2 | — | 192.168.2.2/24 |

---

##  Commands Executed

---

###  Router1 Configuration

```bash
enable
configure terminal

interface g0/0
ip address 192.168.1.1 255.255.255.0
no shutdown

interface g0/1
ip address 10.0.0.1 255.255.255.0
no shutdown
```
### Router2 Configuration
```bash
enable
configure terminal

interface g0/0
ip address 10.0.0.2 255.255.255.0
no shutdown

interface g0/1
ip address 192.168.2.1 255.255.255.0
no shutdown
```
### Static Route Configuration
On Router1
```bash
ip route 192.168.2.0 255.255.255.0 10.0.0.2
```
- Sends traffic for 192.168.2.0 network to Router2

On Router2
```bash
ip route 192.168.1.0 255.255.255.0 10.0.0.1
```

<img width="868" height="762" alt="Screenshot 2026-03-21 110735" src="https://github.com/user-attachments/assets/7f62818d-0ad1-4fc8-a192-56337b152384" />
<img width="874" height="538" alt="Screenshot 2026-03-21 110809" src="https://github.com/user-attachments/assets/02e51de2-3167-4f87-b4ba-729fea818d1f" />
<img width="870" height="734" alt="Screenshot 2026-03-21 110823" src="https://github.com/user-attachments/assets/0e5af143-e155-4bae-ba56-48c19f4c939a" />

### Verification
Ping Test
```bash
ping 192.168.2.2
```
- Confirms connectivity
<img width="602" height="336" alt="Screenshot 2026-03-21 111204" src="https://github.com/user-attachments/assets/ef4529ef-68f3-4184-814c-ce4e547273ff" />
<img width="697" height="306" alt="Screenshot 2026-03-21 111210" src="https://github.com/user-attachments/assets/6b2e874f-4d39-442a-8e20-cad4ed951da0" />
<img width="678" height="322" alt="Screenshot 2026-03-21 111216" src="https://github.com/user-attachments/assets/777ce944-bc6c-4f0a-9f3e-dbd5014e03ac" />
<img width="630" height="305" alt="Screenshot 2026-03-21 111222" src="https://github.com/user-attachments/assets/ff310f1d-2f1c-4757-a12e-f8338e650c33" />
<img width="617" height="296" alt="Screenshot 2026-03-21 111228" src="https://github.com/user-attachments/assets/b3cbb01c-160b-4313-a595-f68a6e3f03f5" />
<img width="627" height="313" alt="Screenshot 2026-03-21 111235" src="https://github.com/user-attachments/assets/0a686c69-5a1e-4e14-8822-8909c2845ee6" />
<img width="640" height="322" alt="Screenshot 2026-03-21 111250" src="https://github.com/user-attachments/assets/50649645-0a7f-4bcf-8e09-e26d4d98b915" />
<img width="625" height="345" alt="Screenshot 2026-03-21 111256" src="https://github.com/user-attachments/assets/c032ab4f-9315-478e-9cf4-170d8f9a5c23" />
<img width="865" height="844" alt="Screenshot 2026-03-21 111346" src="https://github.com/user-attachments/assets/15e00225-a21a-4525-acbb-0c9949dc6201" />

Traceroute
```bash
tracert 192.168.2.2
```
- Shows path:
PC1 → Router1 → Router2 → PC2

<img width="866" height="836" alt="Screenshot 2026-03-21 111533" src="https://github.com/user-attachments/assets/595892c3-5156-4533-98f6-5cad8c2ab83c" />
<img width="865" height="781" alt="Screenshot 2026-03-21 111854" src="https://github.com/user-attachments/assets/a40b7329-487a-4816-b7fc-c08dbc8220d2" />

### Check Routing Table
```bash
show ip route
```
Output includes:
```bash
192.168.2.0/24 via 10.0.0.2
```
Sends traffic for 192.168.1.0 network to Router1
