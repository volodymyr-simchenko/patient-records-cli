#pragma once
#include <iostream>
using std::string;
class Patient
{
/*
    Auxiliary class with no methods,
    for convenient storage of user-entered
    data before writing it to a file.
*/
public:
    std::string pLastname, Pf, Pp;   // Patient full name
    int day, month, year;       // dd.mm.yyyy of patient's date of birth
    std::string department;          // Department the patient is assigned to
    std::string dName;   // Doctor's full name
    std::string diagnosis;           // Patient's diagnosis
    int day1, month1, year1;    // Date of admission to hospital
    int day2, month2, year2;    // Date of discharge from hospital
    Patient ();                 // Default constructor declaration
    void setDoc();       // Select doctor based on department
    void setDiagn();          // Select diagnosis based on doctor and department
    void setDep();
    static bool isDay(int);       // Checks whether the given number is a valid day
    static bool isMonth(int);     // Checks whether the given number is a valid month
    static bool isYear(int);      // Checks whether the given number is a valid year
    // Checks whether the given string is a valid surname.
    static bool isLastname(string);
    static string doLastname(string);    // Converts case to match the expected surname format in the given string.
    // Note: function accepts a string by pointer, checks whether it matches
    // the initials format and capitalizes the letter if it is lowercase.
    static bool isInit(string*);
};
