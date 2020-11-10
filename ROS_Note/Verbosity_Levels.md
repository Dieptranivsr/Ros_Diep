# Verbosity Levels
These are the verbosity levels used by rosconsole and ros/Overview/Logging

### DEBUG
```
Information that you never need to see if the system is working properly. Examples:
 * "Received a message on topic X from caller Y"
 * "Sent 20 bytes on socket 9".
```
### INFO
```
Small amounts of information that may be useful to user. Examples:
 * "Node initialized"
 * "Advertised on topic X with message type Y"
 * "New subscriber to topic X: Y"
```
### WARN
```
Information that the user may find alarming, and may affect the output of the application, but is part of the expected working of the system. Examples:
 * "Could not load configuration file from <path>. Using defaults."
```
### ERROR

### FATAL
