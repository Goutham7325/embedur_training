# What Happens If a Wrong Passphrase Is Used in the 4-Way Handshake?

## Overview

If a **wrong passphrase** is entered, the **Pairwise Master Key (PMK)** derived by the client (STA) will be **different** from the PMK at the Access Point (AP).  
Since the 4-way handshake depends on both sides having the **same PMK**, the process will **fail**.

---

## Step-by-Step Impact

### 1. PMK Mismatch

- STA derives PMK from:
  - Passphrase + SSID  
- AP already has the correct PMK  

**Result:**
- PMKs do not match  

---

### 2. PTK Derivation Fails

Both sides compute:


PTK = PRF(PMK, ANonce, SNonce, MAC_AP, MAC_STA)


- STA uses **wrong PMK**
- AP uses **correct PMK**

**Result:**
- Different PTKs are generated  

---

### 3. MIC Verification Failure (Message 2)

- STA sends **SNonce + MIC**
- MIC is computed using incorrect PTK  

AP checks MIC:

- MIC does not match expected value  

**Result:**
- AP detects authentication failure  

---

### 4. Handshake Termination

- AP **rejects the client**
- Handshake stops (usually at Message 2 or 3)

---

### 5. No Key Installation

- PTK is not accepted  
- GTK is not delivered  
- No encryption keys are installed  

---

### 6. Connection Failure

- Client cannot associate securely  
- Network access is denied  

---

## Observable Behavior

- Connection attempt fails  
- User may see:
  - “Incorrect password”  
  - “Authentication failed”  
  - Continuous reconnect attempts  

---

## Security Perspective

### Why This Is Important

- Prevents unauthorized access  
- Ensures only devices with correct credentials can connect  

---

### Protection Against Attacks

- Wrong passphrase cannot produce valid MIC  
- Ensures attacker cannot fake authentication without correct PMK  

---

## Summary

| Step | Result with Wrong Passphrase |
|------|-----------------------------|
| PMK generation | Incorrect |
| PTK derivation | Mismatch |
| MIC validation | Fails |
| Handshake | Aborted |
| Connection | Denied |

---

## Conclusion

If a wrong passphrase is used, the 4-way handshake fails because the client and access point derive **different cryptographic keys**, leading to **MIC verification failure**. As a result, the network refuses the connection, ensuring strong protection against unauthorized access.
