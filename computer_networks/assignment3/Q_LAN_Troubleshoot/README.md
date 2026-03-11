# Troubleshooting Ethernet Communication using Ping and Traceroute
## Cisco Packet Tracer Simulation

## Objective
The objective of this experiment is to create a simple LAN using Cisco Packet Tracer and troubleshoot Ethernet communication using `ping`, `ipconfig`, and `tracert` commands.

---

## Network Topology

A Layer-2 switch connects three PCs in the same LAN.


<img width="1920" height="1200" alt="Screenshot 2026-03-11 203259" src="https://github.com/user-attachments/assets/50fdca28-670d-4e84-bc22-6ea41406af71" />
<img width="1920" height="1200" alt="Screenshot 2026-03-11 203438" src="https://github.com/user-attachments/assets/39416f68-a79c-446b-8494-1053b5c5dc31" />

        Switch (2960-24TT)
       /        |        \
    PC0        PC1       PC2


All devices are connected using **Copper Straight-Through Ethernet cables**.

---

## IP Address Configuration

| Device | IP Address | Subnet Mask |
|------|------|------|
| PC0 | 192.168.10.1 | 255.255.255.0 |
| PC1 | 192.168.10.2 | 255.255.255.0 |
| PC2 | 192.168.10.3 | 255.255.255.0 |

All hosts belong to the **192.168.10.0/24** network.

---

## Steps to Perform the Simulation

### 1. Create the Network
1. Open **Cisco Packet Tracer**.
2. Add one **2960 switch**.
3. Add three **PC devices**.
4. Connect the PCs to the switch using **Copper Straight-Through cables**.

---

### 2. Configure IP Addresses
For each PC:

1. Click on the PC.
2. Navigate to **Desktop → IP Configuration**.
3. Assign the IP address and subnet mask according to the table above.

---

### 3. Verify IP Configuration

Open the **Command Prompt** on each PC and run:
ipconfig

Example output:


IP Address : 192.168.10.1
Subnet Mask: 255.255.255.0

This confirms that the IP configuration is correct.

---

### 4. Test Network Connectivity

From **PC0**, test communication with PC2:


ping 192.168.10.3


Example output:


Reply from 192.168.10.3: bytes=32 time<1ms TTL=128


This indicates successful communication between hosts.

---

### 5. Use Traceroute

Traceroute helps identify the path packets take to reach the destination.

Command:


tracert 192.168.10.3


Output:


Tracing route to 192.168.10.3

1 192.168.10.3

Trace complete.


Since all hosts are within the same LAN, there is only **one hop**.

---

## Fault Simulation

To simulate a fault, the IP address of **PC2** was changed incorrectly.

Incorrect configuration:


PC2 IP Address: 192.168.10.4
Subnet Mask: 255.255.255.0


Testing connectivity:


ping 192.168.10.4


Result:


Request timed out
Packets: Sent = 4, Received = 0


Communication failed due to incorrect configuration.

---

## Troubleshooting

The `ipconfig` command was used to inspect the network configuration.


ipconfig


Output showed that the IP address was incorrectly assigned.

Correct configuration:


IP Address: 192.168.10.3
Subnet Mask: 255.255.255.0


After correcting the configuration, the network connectivity was restored.

---

## Results

| Test | Result |
|------|------|
| Ping between PCs | Successful |
| Traceroute | One hop detected |
| Fault simulation | Ping failed |
| Troubleshooting | Fault identified using ipconfig |
| Final connectivity | Restored |

---

## Conclusion

A simple LAN network was successfully simulated using Cisco Packet Tracer. Connectivity between hosts was verified using the `ping` command. A network fault was intentionally introduced and diagnosed using the `ipconfig` command. The `tracert` command helped observe the packet path. This experiment demonstrates basic Ethernet troubleshooting techniques in a LAN environment.

---

## Commands Used
ipconfig
ping <destination_IP>
tracert <destination_IP>
