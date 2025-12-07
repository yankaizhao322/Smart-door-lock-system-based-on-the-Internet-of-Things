# Intelligent Electronic Door Lock Design: Dual Control via RFID Card and Mobile App

## Overview and Context
Security prevention work is a critical aspect of managing office buildings, family homes, and company compounds. In this regard, access control management is particularly important. Modern access control has evolved beyond the traditional mechanical lock; an intelligent access control system has become the standard for high-end office buildings, residential areas, factories, and other locations.

Currently, some access control systems still utilize traditional locks or password locks. These methods pose security risks, such as the loss or forgetting of keys and the possibility of stolen passwords.

## Design Objectives and Core Technology
To enhance the intelligence and security of access control, this paper presents the design of an intelligent electronic door lock featuring dual control using an RFID card and a mobile phone APP.

- Core Control Device: The system utilizes the STM32 single-chip microcomputer (SCM).

- Functional Modules: The design incorporates an RFID radio frequency module, a WiFi module, and a relay module to implement the unlocking function.

## Key Functionality
1. On-site Card Swiping: Users can swipe the RFID card locally to unlock the door.

2. Remote APP Control:

- The WiFi module connects to the Ali Cloud Platform.

- The corresponding Cloud Intelligent APP displays the lock name.

- Supports remote switching (locking/unlocking) of the door.
