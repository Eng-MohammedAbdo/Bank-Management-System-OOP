<h1 align="center">
  🏦 Bank Management System (OOP)
</h1>

<p align="center">
  <img src="https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white" alt="C++ Badge"/>
  <img src="https://img.shields.io/badge/Visual_Studio-5C2D91?style=for-the-badge&logo=visual%20studio&logoColor=white" alt="Visual Studio"/>
  <img src="https://img.shields.io/badge/Platform-Windows-0078D6?style=for-the-badge&logo=windows&logoColor=white" alt="Windows Platform"/>
  <img src="https://img.shields.io/badge/License-MIT-success?style=for-the-badge" alt="License MIT"/>
</p>

<p align="center">
  <b>A comprehensive, console-based Bank Management System built with advanced Object-Oriented Programming principles in C++.</b>
</p>

---

## 📝 Project Overview

**Bank Management System** is a  console application that simulates a real-world banking environment. Designed with a separation of concerns, the project features a fully functional text-based graphical user interface. It provides extensive capabilities for client and user management, secure transactions, and an integrated currency exchange module. Data persistence is handled efficiently via a custom text file database.

---

## ✨ Key Features

- **👥 Client Management**: Perform Complete CRUD operations (Add, Delete, Update, Find, List) for bank clients.
- **💰 Transactions System**: Handle deposits, withdrawals, fund transfers, and view total system balances. Includes a comprehensive transfer log.
- **🔐 User Management & Security**: Multi-tier user access (Admin vs. Standard User), secure login system with attempt tracking, and complete CRUD operations for managing system users.
- **💱 Currency Exchange Module**: List global currencies, find specific currencies, update exchange rates dynamically, and utilize a built-in currency calculator.
- **🧱 Object-Oriented Design**: Built using advanced Object-Oriented Programming (OOP) principles, including encapsulation, inheritance, polymorphism, and a clear separation of concerns for a scalable and maintainable codebase.

---

## 📂 Folder Structure

The project follows a professional and modular directory structure:

```text
Bank_Management_System/
├── 📄 Bank_Management_System.sln   # Visual Studio Solution File
├── 📄 Bank_Management_System.cpp   # Main Application Entry Point
├── 📄 Global.h                     # Global State (Logged-in User)
├── 📁 Core/                        # Core Entity Models
│   ├── clsBankClient.h
│   ├── clsCurrency.h
│   ├── clsPerson.h
│   └── clsUser.h
├── 📁 Lib/                           # Reusable Utilities & Libraries
│   ├── clsDate.h                     # Date Manipulation
│   ├── clsInputValidate.h            # Strict Input Validation
│   ├── clsString.h                   # String Parsing & Formatting
│   └── clsUtil.h                     # General Utilities (Encryption, Random)
├── 📁 Screens/                      # Presentation / UI Layer
│   ├── clsScreen.h                   # Base Screen Interface
│   ├── 📁 Client/                    # Client-related Screens (Deposit, Withdraw, etc.)
│   ├── 📁 Currency/                  # Currency Exchange Screens
│   └── 📁 User/                      # User Management & Login Screens
└── 📁 Data/                          # Text-based Database Files
    ├── Clients.txt
    ├── Currencies.txt
    ├── LoginRegister.txt
    ├── TransferLog.txt
    └── Users.txt
```

---
