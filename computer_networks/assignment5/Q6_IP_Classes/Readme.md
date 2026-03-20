#  IP Address Classification

IP classes are determined by the **first octet** of the IP address.

| Class | Range (1st Octet) | Default Subnet Mask |
|------|------------------|---------------------|
| A | 1 – 126 | 255.0.0.0 (/8) |
| B | 128 – 191 | 255.255.0.0 (/16) |
| C | 192 – 223 | 255.255.255.0 (/24) |

---

#  Classifying IP's

##  1. 10.1.1.1

- First octet = **10**
- Falls in range **1–126**

 **Class A**  
 Default subnet mask: **255.0.0.0 (/8)**  

**Class A Range:**

1.0.0.0 → 126.255.255.255


---

##  2. 172.16.5.10

- First octet = **172**
- Falls in range **128–191**

 **Class B**  
 Default subnet mask: **255.255.0.0 (/16)**  

**Class B Range:**

128.0.0.0 → 191.255.255.255


---

##  3. 192.168.1.5

- First octet = **192**
- Falls in range **192–223**

 **Class C**  
 Default subnet mask: **255.255.255.0 (/24)**  

**Class C Range:**

192.0.0.0 → 223.255.255.255


---

#  Tabular Answer

| IP Address | Class | Default Mask | Class Range |
|-----------|------|-------------|-------------|
| 10.1.1.1 | A | 255.0.0.0 | 1.0.0.0 – 126.255.255.255 |
| 172.16.5.10 | B | 255.255.0.0 | 128.0.0.0 – 191.255.255.255 |
| 192.168.1.5 | C | 255.255.255.0 | 192.0.0.0 – 223.255.255.255 |

---

 

