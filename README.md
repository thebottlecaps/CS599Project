# CS599Project

Project Objective: This project’s objective is to develop an executable application that uses holograms in AR space in order to design flight paths for FLS’s and then directly send the flight path to a physical FLS. This is a proof of concept for a scalable application that provides a GUi for users to “drag and drop” drones for flight planning.

1. The user places an FM in physical space (could be a QR code, plate, or cylinder on which they want the drone to be)
2. A hologram of the drone is generated and placed on the FM
3. If the user moves the FM, the hologram will continue tracking and following the FM
4. The application sends the desired world coordinates to an Arduino
5. The Arduino performs flight planning and sends the flight path via WiFi to a physical drone
6. The physical drone flies to the hologram and lands on the FM in the hologram’s orientation
