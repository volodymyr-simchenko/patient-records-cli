# patient-records-cli

Console application for managing patient records, written in C++.

## What it does
- Add, view, edit, delete patient entries
- Sort and query records
- Data is saved to and loaded from a text file

## Concepts demonstrated
- OOP: `Patient` class with constructor initialization list
- Static input validation methods (date format, name format)
- File I/O with `std::fstream`
- Console menu with error handling

## How to build
```bash
g++ main.cpp Patient.cpp -o patient-records
./patient-records
```

## Notes
University coursework project (2022–2023).  
Interface language: Russian (as per original assignment requirements).
