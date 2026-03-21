# Traceroute Command 

## Concept Overview

`traceroute` is a network diagnostic tool used to track the path that packets take from a source to a destination. It helps identify delays, routing issues, and the number of hops between devices.

Unlike `ping`, which only checks connectivity, `traceroute` shows each intermediate router (hop) along the path.

---

## Commands Used

```bash
traceroute www.google.com
traceroute www.facebook.com
```
## Sample output
1  192.168.1.1   1.123 ms   1.045 ms   1.067 ms
2  10.10.0.1     5.234 ms   5.112 ms   5.189 ms
3  172.16.0.1   10.456 ms  10.321 ms  10.398 ms
...
n  destination   XX ms      XX ms      XX ms

## Parameters in Output
| Field               | Description                    |
| ------------------- | ------------------------------ |
| Hop Number          | Sequence of routers in path    |
| IP Address / Domain | Address of intermediate router |
| Time (ms)           | Round-trip time for each probe |
| `*` (asterisk)      | No response from that hop      |

## Explanation of Output
- Each line represents a hop (router) between source and destination.
- Three time values are shown because three probes are sent per hop.
- Increasing time indicates longer distance or delay.
- If * * * appears, the router is not responding (may block ICMP).

## Options

Limit number of hops
```bash
traceroute -m 10 www.google.com
```
Use ICMP instead of UDP
```bash
traceroute -I www.google.com
```
Specify packet size
```bash
traceroute -q 5 www.google.com
```
Set wait time
```bash
traceroute -w 2 www.google.com
```
Use TCP (useful when ICMP blocked)
```bash
traceroute -T www.google.com
```

## Screenshot

<img width="955" height="560" alt="image" src="https://github.com/user-attachments/assets/2718a6cc-6b42-47ed-97b0-d9324e833e84" />
<img width="960" height="570" alt="image" src="https://github.com/user-attachments/assets/901b8696-cffa-4b6a-bab3-25dfa98039ec" />


