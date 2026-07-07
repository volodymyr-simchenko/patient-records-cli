#pragma once

#include <iostream>

using std::string;

class Patient
{
/*
    Helper class without methods,
    for more convenient storage of user input
    data before saving to file.
*/

public:

    std::string pLastname, Pf, Pp;   // Patient's full name
    int day, month, year;       // Date of birth (dd.mm.yyyy)
    std::string department;          // Department where patient is registered
    std::string dName;   // Doctor's full name
    std::string diagnosis;           // Patient's diagnosis
    int day1, month1, year1;    // Date of admission to hospital
    int day2, month2, year2;    // Date of patient discharge from hospital
    Patient ();                 // Constructor declaration without parameters

    void setDoc();       // Select doctor based on department
    void setDiagn();          // Select diagnosis based on doctor and department
    void setDep();

    static bool isDay(int);       // Check if passed number is a valid day
    static bool isMonth(int);     // Check if passed number is a valid month
    static bool isYear(int);      // Check if passed number is a valid year


    // Check if passed string is a valid last name

    static bool isLastname(string);
    static string doLastname(string);    // Converts case to match last name format

    // Attention!: function takes string by pointer, checks initial format
    // and converts letter to uppercase if it is lowercase.
    static bool isInit(string*);

};
