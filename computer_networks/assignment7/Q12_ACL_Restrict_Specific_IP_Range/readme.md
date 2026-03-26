# Standard ACL Configuration (Permit Specific IP Range)

---

## 1. Concept

A **Standard ACL** filters traffic based only on **source IP address**.

```text
Standard ACL → checks ONLY source IP
```
<img width="816" height="552" alt="Screenshot 2026-03-26 233007" src="https://github.com/user-attachments/assets/01984140-afce-41fd-89e8-73eb1329d4d8" />

## 2. Standard ACL Configuration
```bash
enable
configure terminal

access-list 1 permit host 192.168.10.1
access-list 1 permit 192.168.10.0 0.0.0.255
```
Standard ACL should be applied near destination.
```bash
interface g0/1
ip access-group 1 out
```
## Verification
```bash
show access-lists
```
<img width="482" height="146" alt="Screenshot 2026-03-24 153559" src="https://github.com/user-attachments/assets/9450c520-d43b-4f91-aae5-0d1186a3c3d5" />

## Testing
From allowed PC
```bash
ping 192.168.20.100
```
<img width="958" height="918" alt="Screenshot 2026-03-24 153954" src="https://github.com/user-attachments/assets/74e741a1-2d67-4602-aaba-e454ca068096" />

From other network (if exists)
```bash
ping 192.168.20.100
```
Expected:
```text
Request timed out / Unreachable
```
<img width="957" height="921" alt="Screenshot 2026-03-24 153937" src="https://github.com/user-attachments/assets/1db047ae-021a-4ee7-b029-11726cb18824" />

