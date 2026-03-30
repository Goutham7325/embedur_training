# Man-in-the-Middle (MITM) Attack 

## 1. Definition

A Man-in-the-Middle (MITM) attack is a network attack in which an attacker positions themselves between two communicating devices and intercepts, modifies, or blocks the communication without the knowledge of either party.

---

## 2. Normal Network Behavior

In a typical network:

- The victim (PC1) communicates with external networks through a default gateway (router).
- The victim uses ARP to resolve the gateway IP (e.g., 192.168.1.254) to a MAC address.
- The switch forwards frames based on MAC address tables.

Flow:
1. Victim sends ARP request for gateway IP
2. Router replies with its MAC address
3. Victim stores this mapping in ARP table
4. All external traffic is sent to the router

---

## 3. Attack Technique Used (MAC Cloning)

Instead of traditional ARP spoofing, the attack is simulated by:

- Assigning the attacker the same MAC address as the gateway
- This creates ambiguity in the switch's MAC address table

Result:
- Two devices (router and attacker) now share the same MAC address

---

## 4. Behavior of the Switch

Switch operation:

- Switch learns MAC addresses based on incoming frames (source MAC)
- If the same MAC appears on multiple ports:
  - The switch updates its MAC table dynamically
  - The last seen port is associated with that MAC

Effect:
- Traffic destined for the gateway MAC may be forwarded to:
  - The router (correct path), or
  - The attacker (malicious path)

---

## 5. Attack Execution Flow

1. Victim resolves gateway IP → gets correct MAC
2. Attacker changes its MAC to match gateway MAC
3. Switch sees same MAC on attacker port
4. Switch updates MAC table (MAC → attacker port)
5. Victim sends traffic to gateway MAC
6. Switch forwards traffic to attacker instead of router

---

## 6. Result Observed (Browser Timeout)

- Victim attempts to access web server (e.g., 192.168.2.100)
- Packets are sent to attacker instead of router
- Attacker does not forward packets
- Communication with server fails

Outcome:
- Browser request times out
- Network appears unreachable

---

## 7. Why Timeout Occurs

- Gateway is effectively unreachable
- Packets are misdirected to attacker
- No proper routing occurs beyond attacker
- No response is received from destination

---

## 8. Limitation of This Technique

- This is not a full MITM attack
- It only causes:
  - Traffic disruption (Denial of Service)
- A true MITM requires:
  - Packet forwarding by attacker
  - Continuous ARP poisoning

---

## 9. Comparison with Real ARP Spoofing

| Feature | MAC Cloning | ARP Spoofing |
|--------|-------------|-------------|
| Method | Duplicate MAC | Fake ARP replies |
| Control | Partial | Full |
| Outcome | Traffic disruption | Interception + modification |
| Tools needed | None | Specialized tools |

---

## 10. Screenshots

###  Network Topology
<img width="679" height="583" alt="image" src="https://github.com/user-attachments/assets/5704b01b-a3cb-4294-83aa-13875e0edde9" />
###  PC0 able to ping to Gateway and Web Browser Normally
<img width="872" height="787" alt="image" src="https://github.com/user-attachments/assets/58e1ccb0-f2ef-42e2-b808-daac3016a217" />
###  arp Table of PC0 before attack
<img width="871" height="225" alt="image" src="https://github.com/user-attachments/assets/4ea9d938-a3dc-4d23-b2a6-bb0671c005de" />
###  PC0 able to browse Server 
<img width="867" height="646" alt="image" src="https://github.com/user-attachments/assets/a86fbb81-96ca-4c18-be48-9e58017214f3" />
###  Config of Attacker (PC1)
<img width="877" height="455" alt="image" src="https://github.com/user-attachments/assets/f5cdf15c-8128-43c3-bd81-b13833609e88" />
###  MAC Address of Attacker (PC1) modified to that of Gateway's
<img width="892" height="679" alt="image" src="https://github.com/user-attachments/assets/d9263bb5-cf52-43cc-a4bb-a99215dd5a2a" />
###  Doing a Constant ping from Attacker (PC1) to PC0
<img width="869" height="357" alt="image" src="https://github.com/user-attachments/assets/0bba0ca1-217f-4a34-bce6-cba7b2970134" />
###  Checking the arp table of PC0
<img width="872" height="258" alt="image" src="https://github.com/user-attachments/assets/a9d20c24-7ab9-475d-b5a3-ea4faf3de283" />
###  MAC address table of Switch0 modified
<img width="871" height="367" alt="image" src="https://github.com/user-attachments/assets/e2431baf-7729-43e1-8a59-86939aba475c" />
###  PC0 Trying to browse the server
<img width="873" height="638" alt="image" src="https://github.com/user-attachments/assets/41946584-03bc-4052-88aa-829dcdb4102b" />
