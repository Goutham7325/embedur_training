# Best AP Mode When WLC is Deployed in WAN

## 1. Problem Scenario

When the **Wireless LAN Controller (WLC)** is located in a **WAN (remote location)** and Access Points (APs) are deployed in a **local network (branch/site)**, sending all traffic to the WLC can cause:

- High latency  
- Increased WAN bandwidth usage  
- Possible bottlenecks  
- Dependency on WAN availability  

---

## 2. Best AP Mode: FlexConnect Mode (Local Switching)

### Definition
**FlexConnect Mode** (earlier called H-REAP) allows APs to:
- Maintain control communication with WLC over WAN  
- Handle client data **locally** within the branch network  

---

## 3. How FlexConnect Works

### Control Plane
- AP establishes a **CAPWAP control tunnel** with WLC over WAN  
- Used for:
  - Configuration
  - Authentication
  - Policy updates  

### Data Plane (Local Switching)
- Client traffic is **not tunneled to WLC**
- Traffic is:
  - Bridged directly to local LAN  
  - Sent to local gateway/internet  

---

## 4. Traffic Flow in FlexConnect

1. AP connects to WLC via WAN (CAPWAP control tunnel)
2. WLC sends configuration (SSID, security, VLAN mapping)
3. Client connects to AP
4. AP:
   - Authenticates client (locally or via WLC depending on config)
5. Client data traffic:
   - **Locally switched** to LAN
   - Does NOT traverse WAN

---

## 5. Why FlexConnect is Best in WAN Deployment

### 5.1 Reduced WAN Usage
- Only control traffic goes to WLC  
- Data traffic stays local  

### 5.2 Lower Latency
- No need to send packets to remote controller  
- Faster response for applications  

### 5.3 Better Reliability
- If WAN link fails:
  - AP can still serve clients (standalone mode)
  - Known as **FlexConnect standalone mode**

### 5.4 Improved Performance
- Avoids congestion on WAN links  
- Efficient use of local resources  

---

## 6. Additional Features of FlexConnect

- Local authentication (for some configurations)
- VLAN mapping at AP level
- Support for branch deployments
- Backup behavior during WLC disconnection

---

## 7. Comparison with Local Mode

| Feature | Local Mode | FlexConnect Mode |
|--------|------------|------------------|
| Data Traffic | Goes to WLC (WAN) | Local switching |
| WAN Usage | High | Low |
| Latency | Higher | Lower |
| Operation if WAN fails | Stops working | Continues (limited) |
| Suitability | Campus LAN | Remote/branch WAN |

---

## 8. Conclusion

When the WLC is deployed in a WAN:

- The best AP mode is **FlexConnect Mode**
- It ensures:
  - Efficient bandwidth usage  
  - Low latency  
  - Continued operation during WAN failure  

### Key Idea:
- **Control traffic → WLC (WAN)**  
- **Data traffic → Local network (LAN)**  
