# Dynamic Reconfigure
## Description
The dynamic_reconfigure package provides a means to update parameters at runtime without having to restart the node.

At present, the focus of dynamic_reconfigure is on providing a standard way to expose a subset of a node's parameters to external reconfiguration. 
Client programs, e.g., GUIs, can query the node for the set of reconfigurable parameters, including their names, types, and ranges, and present a customized interface to the user. 
This is especially useful for hardware drivers, but has broader applicability.

