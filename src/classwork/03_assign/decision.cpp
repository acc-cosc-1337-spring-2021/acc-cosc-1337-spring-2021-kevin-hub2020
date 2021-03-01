//cpp
#include "decision.h"
#include <string>

// IF STATEMENTS
std::string get_letter_grade_using_if (int grade)
{
    if (grade >= 90 && grade <= 100)
    {
        return "A";
    }
    else if (grade >= 80 && grade <= 89)
    {
        return "B";
    }
    else if (grade >= 70 && grade <= 79)
    {
        return "C";
    }
    else if (grade >= 60 && grade <= 69)
    {
        return "D";
    }
    else if (grade >= 00 && grade <=59)
    {
        return "F";
    }
    else
    {
        return "ERROR! GRADE NOT VALID";
    }
}

//SWITH CASES
std::string get_letter_grade_using_switch (int grade)
{
    std::string string_lettergrade;

    switch (grade)
    {
    case 90 ... 100 :
        string_lettergrade = "A";
        break;
    case 80 ... 89 :
        string_lettergrade = "B";
        break;
    case 70 ... 79 :
        string_lettergrade = "C";
        break;
    case 60 ... 69 :
        string_lettergrade = "D";
        break;
    case 00 ... 59 :
        string_lettergrade = "F";
        break;
    default:
        string_lettergrade = "ERROR! INVALID GRADE";
        break;
    }
    return string_lettergrade;
}