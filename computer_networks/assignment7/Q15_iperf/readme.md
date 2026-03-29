# iPerf3

## 1. Overview

iPerf3 is a network performance measurement tool used to evaluate:
- Throughput (bandwidth)
- Packet loss (UDP)
- Jitter (UDP)
- Network reliability under load

It follows a **client–server model**:
- One system runs as **server**
- Another system runs as **client**

---

## 2. Basic Working Principle

1. Server listens for incoming connections
2. Client initiates connection and sends/receives data
3. Statistics are calculated and displayed

---

## 3. Transport Protocols

### TCP (default)
- Reliable transmission
- Measures maximum achievable throughput

### UDP
- Unreliable transmission
- Measures:
  - Jitter
  - Packet loss
  - Controlled bandwidth

---

## 4. Basic Commands

### Start Server
```bash
iperf3 -s
```
<img width="891" height="377" alt="image" src="https://github.com/user-attachments/assets/5296a29b-c2b7-49dc-8d71-5827d2e70e35" />

### Run Client (TCP Test)
```text
iperf3 -c <server_ip>
```
Example:
```bash
iperf3 -c 192.168.56.101
```
<img width="1098" height="740" alt="image" src="https://github.com/user-attachments/assets/306cd653-4a59-49a8-8703-c8368a784b2e" />

## 5. TCP Modes
### Reverse Mode

Server sends data to client:
```bash
iperf3 -c 192.168.56.101 -R
```
<img width="959" height="559" alt="image" src="https://github.com/user-attachments/assets/a45d3b0a-fb73-4f10-b70e-7e7396da2a19" />
<img width="954" height="565" alt="image" src="https://github.com/user-attachments/assets/33ba964f-4643-422e-afe6-305ccbb92407" />

### Parallel Streams

Multiple connections to increase throughput:
```bash
iperf3 -c 192.168.56.101 -P 4
```
<img width="962" height="572" alt="image" src="https://github.com/user-attachments/assets/3be064c8-d955-4546-b42b-915a8cf2fcd2" />
<img width="1122" height="919" alt="image" src="https://github.com/user-attachments/assets/a6e5ae04-7189-4033-a9c3-761f3ae2be8a" />

### Bidirectional Test

Simultaneous send and receive:
```bash
iperf3 -c 192.168.56.101 --bidir
```
<img width="960" height="568" alt="image" src="https://github.com/user-attachments/assets/54681909-5751-4885-a33d-b932261a702e" />
<img width="954" height="564" alt="image" src="https://github.com/user-attachments/assets/2e3229b4-a165-45c3-80e3-77632bf09f48" />

## 6. UDP Mode
### Basic UDP Test
```bash
iperf3 -c 192.168.56.101 -u -b 100M
```
<img width="962" height="564" alt="image" src="https://github.com/user-attachments/assets/0b80cab9-df0e-4dad-b553-944f28494cdf" />
<img width="952" height="567" alt="image" src="https://github.com/user-attachments/assets/5ff76a66-c34f-4b64-bba1-a4793f862fcd" />

### UDP Reverse
```bash
iperf3 -c 192.168.56.101 -u -b 10M -R
```
<img width="960" height="567" alt="image" src="https://github.com/user-attachments/assets/ff63d6a1-a1cf-4548-8a57-670d80be1b71" />
<img width="958" height="565" alt="image" src="https://github.com/user-attachments/assets/82d8836f-06c6-4df0-b7b0-e0e34fa65423" />

## 7. Important Parameters
# iPerf3 Commands and Options Table

| Command / Option | Description | Example |
|-----------------|------------|---------|
| `-s` | Run in server mode | `iperf3 -s` |
| `-c <IP>` | Run in client mode | `iperf3 -c 192.168.56.101` |
| `-u` | Use UDP instead of TCP | `iperf3 -c 192.168.56.101 -u` |
| `-b <rate>` | Set bandwidth (UDP only) | `iperf3 -c 192.168.56.101 -u -b 10M` |
| `-t <sec>` | Set test duration | `iperf3 -c 192.168.56.101 -t 20` |
| `-i <sec>` | Interval between reports | `iperf3 -c 192.168.56.101 -i 1` |
| `-R` | Reverse mode (server sends data) | `iperf3 -c 192.168.56.101 -R` |
| `-P <num>` | Number of parallel streams | `iperf3 -c 192.168.56.101 -P 4` |
| `--bidir` | Bidirectional test (both send/receive) | `iperf3 -c 192.168.56.101 --bidir` |
| `-p <port>` | Specify port number | `iperf3 -s -p 5002` |
| `-B <IP>` | Bind to specific IP address | `iperf3 -s -B 192.168.56.101` |
| `-w <size>` | Set TCP window size | `iperf3 -c 192.168.56.101 -w 1M` |
| `-l <size>` | Buffer length (read/write size) | `iperf3 -c 192.168.56.101 -l 128K` |

