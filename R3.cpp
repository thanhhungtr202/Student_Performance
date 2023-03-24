/********************************************
 * R3 search for items
 *
 * Author: Thanh Hung Tran
 * Version: 05/08/2022
 *********************************************/
#include "gradeItem.h"

//Search by Date
vector<GradeItem> R3Date(vector<GradeItem>& container)
{
    string date;
    vector<GradeItem> tempContainer;
    cout << "Please enter the date: " << endl;
    cin.ignore();
    getline(cin, date);
    for(int i = 0; i < container.size(); i++)
    {
        //Check if match
        if(date == container[i].get_Date())
        {
            //push to a temporary vector to display later
            tempContainer.push_back(GradeItem(container[i].get_Date(), container[i].get_Description(), container[i].get_Type(), container[i].get_MaxGrade(), container[i].get_Grade()));
        }
    }
    return tempContainer;
}

//Search by Description
vector<GradeItem> R3Description(vector<GradeItem>& container)
{
    string description;
    vector<GradeItem> tempContainer;
    cout << "Please enter the description(Case sensitive): " << endl;
    cin.ignore();
    getline(cin, description);
    for(int i = 0; i < container.size(); i++)
    {
        //Check if match
        if(description == container[i].get_Description())
        {
            //push to a temporary vector to display later
            tempContainer.push_back(GradeItem(container[i].get_Date(), container[i].get_Description(), container[i].get_Type(), container[i].get_MaxGrade(), container[i].get_Grade()));
        }
    }
    return tempContainer;
}