# 802.11 MAC Frame Header Format

The IEEE 802.11 MAC frame is used in WiFi networks to enable communication between wireless devices. Each frame consists of three main parts:

- MAC Header
- Frame Body (Payload)
- Frame Check Sequence (FCS)
<img width="768" height="154" alt="image" src="https://github.com/user-attachments/assets/860f9dc8-b4ba-448d-854b-21499a37c938" />


## MAC Header Structure

The MAC header is typically 24–30 bytes long (can be extended depending on optional fields).

| Field                  | Size    |
| ---------------------- | ------- |
| Frame Control          | 2 bytes |
| Duration/ID            | 2 bytes |
| Address 1              | 6 bytes |
| Address 2              | 6 bytes |
| Address 3              | 6 bytes |
| Sequence Control       | 2 bytes |
| Address 4 (optional)   | 6 bytes |
| QoS Control (optional) | 2 bytes |
| HT Control (optional)  | 4 bytes |
<img width="698" height="442" alt="image" src="https://github.com/user-attachments/assets/129ac404-6c30-41be-8f3e-33fae9b1897a" />

## 1. Frame Control (2 bytes)

Defines the type and behavior of the frame.
<img width="698" height="413" alt="image" src="https://github.com/user-attachments/assets/ea0dad12-1b1e-48f3-8ef1-007a5bf0f4a1" />

Subfields:

- Protocol Version
- Type (Management, Control, Data)
- Subtype (e.g., RTS, CTS, ACK, Beacon)
- To DS / From DS (direction of frame)
- More Fragments
- Retry
- Power Management
- More Data
- Protected Frame (encryption indicator)
- Order
<img width="695" height="482" alt="image" src="https://github.com/user-attachments/assets/02e998dd-d494-481e-8b9c-8cb944e6d98c" />

## 2. Duration/ID (2 bytes)
- Indicates the time duration (in microseconds) the medium is reserved
- Used for Network Allocation Vector (NAV)
- May carry Association ID in certain control frames
## 3. Address Fields
- Address 1 (Receiver Address)
- MAC address of the immediate receiving device
- Address 2 (Transmitter Address)
- MAC address of the transmitting device
- Address 3
Can represent:
- Destination Address
- Source Address
- BSSID
Depends on network topology
- Address 4 (Optional)
Used in Wireless Distribution System (WDS)
Present only when both To DS and From DS bits are set
## 4. Sequence Control (2 bytes)
Ensures proper ordering and reassembly

Subfields:

- Sequence Number
- Fragment Number
## 5. QoS Control (Optional – 2 bytes)
Present in QoS-enabled frames (802.11e)
Provides:
- Traffic prioritization
- Queue management
## 6. HT Control (Optional – 4 bytes)
Used in High Throughput (802.11n and later)
Supports advanced features like:
- MIMO signaling
- Link adaptation
Key Points
- Not all fields appear in every frame
Optional fields depend on:
- Frame type
- WiFi standard version
MAC header enables:
- Addressing
- Medium access coordination
- Error handling
- Efficient wireless communication
## Summary

The 802.11 MAC header is a flexible structure designed to handle the complexities of wireless communication. Each field contributes to frame identification, addressing, sequencing, and medium control, ensuring reliable and efficient operation in WiFi networks.
