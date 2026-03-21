# Network Testing in Ubuntu (VM)

## Concept Overview

In Ubuntu, network connectivity and DNS resolution are tested using:

- **ping** → Checks connectivity (ICMP)
- **nslookup / dig** → Resolves domain names to IP addresses

These tools help verify whether:
- The system can reach external servers
- DNS is working correctly

---

## Commands Used

### Ping 

```bash
ping -c 4 www.google.com
ping -c 4 www.facebook.com
ping -c 4 www.amazon.com
ping -c 4 www.github.com
ping -c 4 www.cisco.com
```

```bash
goutham@embedurU1:~/Desktop$ ping -c 4 www.google.com
PING www.google.com (142.250.67.36) 56(84) bytes of data.
64 bytes from maa05s12-in-f4.1e100.net (142.250.67.36): icmp_seq=1 ttl=255 time=8.03 ms
64 bytes from pnmaaa-bb-in-f4.1e100.net (142.250.67.36): icmp_seq=2 ttl=255 time=8.45 ms
64 bytes from maa05s12-in-f4.1e100.net (142.250.67.36): icmp_seq=3 ttl=255 time=8.62 ms
^C
--- www.google.com ping statistics ---
3 packets transmitted, 3 received, 0% packet loss, time 2005ms
rtt min/avg/max/mdev = 8.027/8.366/8.622/0.250 ms
goutham@embedurU1:~/Desktop$ ping -c 4 www.facebook.com
PING star-mini.c10r.facebook.com (163.70.143.35) 56(84) bytes of data.
64 bytes from edge-star-mini-shv-01-bom2.facebook.com (163.70.143.35): icmp_seq=1 ttl=255 time=30.0 ms
64 bytes from edge-star-mini-shv-01-bom2.facebook.com (163.70.143.35): icmp_seq=2 ttl=255 time=30.7 ms
64 bytes from edge-star-mini-shv-01-bom2.facebook.com (163.70.143.35): icmp_seq=3 ttl=255 time=29.9 ms
64 bytes from edge-star-mini-shv-01-bom2.facebook.com (163.70.143.35): icmp_seq=4 ttl=255 time=29.8 ms

--- star-mini.c10r.facebook.com ping statistics ---
4 packets transmitted, 4 received, 0% packet loss, time 3303ms
rtt min/avg/max/mdev = 29.810/30.098/30.687/0.350 ms
goutham@embedurU1:~/Desktop$ ping -c 4 www.amazon.com
PING cf.47cf2c8c9-frontier.amazon.com (18.161.224.200) 56(84) bytes of data.
64 bytes from server-18-161-224-200.maa50.r.cloudfront.net (18.161.224.200): icmp_seq=1 ttl=255 time=6.31 ms
64 bytes from server-18-161-224-200.maa50.r.cloudfront.net (18.161.224.200): icmp_seq=2 ttl=255 time=8.12 ms
64 bytes from server-18-161-224-200.maa50.r.cloudfront.net (18.161.224.200): icmp_seq=3 ttl=255 time=9.87 ms
64 bytes from server-18-161-224-200.maa50.r.cloudfront.net (18.161.224.200): icmp_seq=4 ttl=255 time=8.95 ms

--- cf.47cf2c8c9-frontier.amazon.com ping statistics ---
4 packets transmitted, 4 received, 0% packet loss, time 3020ms
rtt min/avg/max/mdev = 6.310/8.312/9.871/1.311 ms
goutham@embedurU1:~/Desktop$ ping -c 4 www.github.com
PING github.com (20.207.73.82) 56(84) bytes of data.
64 bytes from 20.207.73.82 (20.207.73.82): icmp_seq=1 ttl=255 time=24.1 ms
64 bytes from 20.207.73.82 (20.207.73.82): icmp_seq=2 ttl=255 time=24.7 ms
64 bytes from 20.207.73.82 (20.207.73.82): icmp_seq=3 ttl=255 time=27.0 ms
64 bytes from 20.207.73.82 (20.207.73.82): icmp_seq=4 ttl=255 time=24.6 ms

--- github.com ping statistics ---
4 packets transmitted, 4 received, 0% packet loss, time 3211ms
rtt min/avg/max/mdev = 24.098/25.096/27.033/1.139 ms
goutham@embedurU1:~/Desktop$ ping -c 4 www.cisco.com
PING e2867.dsca.akamaiedge.net (23.41.120.121) 56(84) bytes of data.
64 bytes from a23-41-120-121.deploy.static.akamaitechnologies.com (23.41.120.121): icmp_seq=1 ttl=255 time=8.37 ms
64 bytes from a23-41-120-121.deploy.static.akamaitechnologies.com (23.41.120.121): icmp_seq=2 ttl=255 time=8.10 ms
64 bytes from a23-41-120-121.deploy.static.akamaitechnologies.com (23.41.120.121): icmp_seq=3 ttl=255 time=7.57 ms
64 bytes from a23-41-120-121.deploy.static.akamaitechnologies.com (23.41.120.121): icmp_seq=4 ttl=255 time=8.62 ms

--- e2867.dsca.akamaiedge.net ping statistics ---
4 packets transmitted, 4 received, 0% packet loss, time 3040ms
rtt min/avg/max/mdev = 7.571/8.163/8.623/0.389 ms
goutham@embedurU1:~/Desktop$ 
```
### Nslookup

```bash
nslookup www.google.com
nslookup www.facebook.com
nslookup www.amazon.com
nslookup www.github.com
nslookup www.cisco.com
```
```bash
goutham@embedurU1:~/Desktop$ nslookup www.google.com
Server:		127.0.0.53
Address:	127.0.0.53#53

Non-authoritative answer:
Name:	www.google.com
Address: 142.250.67.36
Name:	www.google.com
Address: 2001:4860:4827:7700::
Name:	www.google.com
Address: 2001:4860:4826:7700::
Name:	www.google.com
Address: 2001:4860:4829:7700::
Name:	www.google.com
Address: 2001:4860:482b:7700::
Name:	www.google.com
Address: 2001:4860:482a:7700::
Name:	www.google.com
Address: 2001:4860:482c:7700::
Name:	www.google.com
Address: 2001:4860:4828:7700::
Name:	www.google.com
Address: 2001:4860:482d:7700::

goutham@embedurU1:~/Desktop$ 
```
