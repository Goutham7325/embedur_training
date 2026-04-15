# Challenges of Deploying Autonomous APs in Large Networks (e.g., University)

## 1. Introduction

**Autonomous Access Points (APs)** operate independently, with each AP handling its own:
- Configuration  
- Security  
- RF management  
- Client handling  

While suitable for small setups, deploying **more than 50 autonomous APs** in a large environment like a university introduces significant challenges.

---

## 2. Major Challenges

## 2.1 Lack of Centralized Management

- Each AP must be configured **individually**
- Changes (SSID, password, VLAN, security policy) must be applied **manually on all APs**
- High administrative overhead

### Impact
- Time-consuming management  
- Increased chances of configuration mismatch  

---

## 2.2 Scalability Issues

- Managing a large number of APs becomes difficult as the network grows
- No unified dashboard or controller to monitor all APs

### Impact
- Difficult to scale beyond a certain size  
- Poor visibility of network-wide performance  

---

## 2.3 Inconsistent Configuration

- Manual configuration leads to:
  - Different SSIDs across APs  
  - Security inconsistencies  
  - VLAN mismatches  

### Impact
- User confusion  
- Connectivity issues  
- Security vulnerabilities  

---

## 2.4 Poor Roaming Experience

- Autonomous APs do not coordinate with each other
- No centralized control for:
  - Client handoff  
  - Roaming decisions  

### Impact
- Frequent disconnections while moving  
- Higher latency during handoff  
- Poor user experience for mobile users  

---

## 2.5 RF Management Challenges

- Each AP independently selects:
  - Channel  
  - Transmit power  

### Issues
- Channel overlap  
- Co-channel interference  
- Coverage holes  

### Impact
- Reduced network performance  
- Increased interference  

---

## 2.6 Security Management Complexity

- Security policies must be configured per AP
- No centralized authentication enforcement

### Impact
- Higher risk of misconfiguration  
- Difficult to implement enterprise security (802.1X, WPA2-Enterprise)  
- Hard to detect rogue devices  

---

## 2.7 Troubleshooting Difficulty

- No centralized logs or monitoring
- Issues must be diagnosed **AP by AP**

### Impact
- Slow fault detection  
- Increased downtime  
- Higher operational effort  

---

## 2.8 Firmware and Updates Management

- Firmware updates must be done **manually on each AP**

### Impact
- Time-consuming  
- Risk of version mismatch  
- Inconsistent performance  

---

## 2.9 Limited Load Balancing

- No centralized mechanism to distribute clients across APs

### Impact
- Some APs become overloaded  
- Others remain underutilized  
- Uneven performance  

---

## 2.10 Higher Operational Cost

- Requires more manual effort and skilled personnel
- Increased maintenance workload

### Impact
- Higher long-term operational cost  
- Inefficient network management  

---

## 3. Summary Table

| Challenge | Description | Impact |
|----------|-------------|--------|
| No Central Control | Manual configuration | High admin effort |
| Scalability | Difficult to manage many APs | Poor growth support |
| Inconsistency | Different configs across APs | Errors & confusion |
| Roaming | No coordination | Poor mobility experience |
| RF Issues | Independent channel selection | Interference |
| Security | No centralized enforcement | Vulnerabilities |
| Troubleshooting | No unified monitoring | Slow resolution |
| Updates | Manual firmware upgrades | Inconsistency |
| Load Balancing | No client distribution | Uneven performance |

---

## 4. Conclusion

Deploying more than 50 autonomous APs in a large network like a university is **inefficient and difficult to manage** due to lack of centralization.

### Key Problem:
- Everything is **manual and isolated**

### Preferred Solution:
- Use **controller-based (Lightweight APs)** or **cloud-managed APs** for:
  - Centralized management  
  - Better scalability  
  - Improved performance and security  
