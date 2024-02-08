# Alcohol-Detector-with-Engine-Locking-System-Using-MQ-2

**Project Overview: Alcohol Detector with Engine Locking System Using MQ-2 Alcohol Sensor and GSM Module**

**Objective:**
The project aims to enhance road safety by implementing an alcohol detection system coupled with an engine locking mechanism. By detecting alcohol levels in a vehicle driver's breath and taking preventive action, the system helps prevent accidents caused by driving under the influence.

**Components:**
1. **MQ-2 Alcohol Sensor:** Detects alcohol levels in the vicinity.
2. **GSM Module:** Facilitates communication to send alert messages.
3. **Relay Module:** Controls the engine lock mechanism.
4. **Arduino Nano:** Acts as the central processing unit for data acquisition and decision-making.

**System Operation:**
1. **Alcohol Detection:**
   - The MQ-2 alcohol sensor continuously monitors the surrounding air for alcohol vapors.
   - When a driver exhales, the sensor measures the alcohol concentration in their breath.
   - The analog output of the sensor is converted to a digital value for analysis.

2. **Threshold Determination:**
   - The system is calibrated to establish a threshold alcohol concentration level.
   - This threshold level is based on legal regulations or safety standards.

3. **Alert Generation:**
   - If the alcohol concentration exceeds the predefined threshold, the system triggers an alert.
   - The GSM module sends an alert message to a predefined emergency contact number.
   - The message notifies authorities or designated recipients about the detected alcohol presence.

4. **Engine Locking Mechanism:**
   - In addition to the alert, the system activates an engine locking mechanism.
   - A relay module is used to cut off the ignition or fuel supply, immobilizing the vehicle.
   - This prevents the driver from operating the vehicle until the alcohol concentration drops below the threshold.

**Deployment:**
- The system can be installed discreetly within the vehicle, preferably near the driver's seat.
- Proper integration and wiring ensure seamless functionality without obstructing the driver's view or movement.

**Benefits:**
- Enhances road safety by preventing accidents caused by driving under the influence.
- Acts as a deterrent against drunk driving, promoting responsible behavior among drivers.
- Provides real-time monitoring and intervention, reducing the risk of alcohol-related incidents on the road.

**Conclusion:**
The Alcohol Detector with Engine Locking System offers a proactive approach to mitigating the risks associated with drunk driving. By combining alcohol detection technology with an engine locking mechanism, the system contributes to creating safer road environments and fostering responsible driving habits.
