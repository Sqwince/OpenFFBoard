- FFBWheel and FFBJoystick classes split for 1 and 2 axis FFB (Allows to use different HID descriptors)
- Added a single axis HID descriptor (currently not used for compatibility reasons. enable by defining FFBWHEEL_USE_1AXIS_DESC)
- Default SPI button speed increased to 1.3MHz
- Added CAN button source
- Added CAN analog source
- Moved CAN and i2c speed settings to port class
- Fixed CAN bridge RTR frames
- HID interface sends ACKs
- Improved help command formatting and added flags
- Added I2C fast mode 400kHz
- Added BISS-C encoder
- Fixed MT Encoder
- Reworked TMC external encoder system