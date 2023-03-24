/********************************************
 * R7 display all of the info on screen/terminal
 *
 * Author: Thanh Hung Tran
 * Version: 05/08/2022
 *********************************************/
#include "gradeItem.h"

void R7(vector<GradeItem>& container, int x)
{
    //check to make sure that container is not empty
    if(container.empty() && x == 1)
    {
        cout << endl;
        cout << "There is nothing to display, please use R1 first" << endl;
        cout << endl;
    }
    else if(container.empty() && x == 0)
    {
        cout << endl;
        cout << "No result from search, please try something else" << endl;
        cout << endl;
    }
    else
    {
        cout << endl;
        //printing out the header
        printf("%-18s  %-25s  %-12s  %-9s  %-9s\n", "Date", "Description", "Type", "MaxGrade", "Grade");
        //printing out all of the elements in a table format
        for(int i = 0; i < container.size(); i++)
        {
            printf("%-18s  %-25s  %-12s  %-9d  %-9d\n", container[i].get_Date().c_str(), container[i].get_Description().c_str(), container[i].get_Type().c_str(), container[i].get_MaxGrade(), container[i].get_Grade());
        }
        cout << endl;
    }
}
          