/********************************************
 * R2 add new grade item to list
 *
 * Author: Thanh Hung Tran
 * Version: 05/08/2022
 *********************************************/
#include "gradeItem.h"

void R2(vector<GradeItem>& container)
{
    //Prompting user for all of the necessary info
    bool validation = true;
    char *ptr, *ptr1;
    string date, description, type, maxGrade, grade;
    cout << "Please enter the date: " << endl;
    cin >> date;
    cout << "Please enter your description: " << endl;
    cin.ignore();
    getline(cin, description);
    cout << "Please enter the type: " << endl;
    cin >> type;
    //Validate user's input to ensure that it is a number for maxGrade
    while(validation)
    {
        cout << "Please enter the max grade: " << endl;
        cin >> maxGrade;
        strtol(maxGrade.c_str(), &ptr, 10);
        if(*ptr)
        {
            cout << "Invalid input, please try again" << endl;
        }
        else
        {
            validation = false;
        }
    }
    validation = true;
    //Validate user's input to ensure it is a number for grade
    while(validation)
    {
        cout << "Please enter the grade: " << endl;
        cin >> grade;
        strtol(grade.c_str(), &ptr1, 10);
        if(*ptr1)
        {
            cout << "Invalid input, please try again" << endl;
        }
        else
        {
            validation = false;
        }
    }
    //Pushing the new object to the list/vector
    container.push_back(GradeItem(date, description, type, stoi(maxGrade), stoi(grade)));
}