/********************************************
 * R8 generate the summary of all grade Item
 *
 * Author: Thanh Hung Tran
 * Version: 05/08/2022
 *********************************************/
#include "gradeItem.h"


//Search by Type for Summary
void R8(vector<GradeItem>& container)
{
    string description[4] = {"HW", "Quiz", "Class Work", "Exam"};
    //index 0 is totalGrade, index 1 is totalMaxGrade
    int HW[2] = {0, 0};
    int Quiz[2] = {0, 0};
    int ClassWork[2] = {0, 0};
    int Exam[2] = {0, 0};
    vector<GradeItem> tempContainer;
    int grandTotal[2] = {0, 0};
    float grandPercentage = 0.0;
    for(int j = 0; j < 4; j++)
    {
        for(int i = 0; i < container.size(); i++)
        {
            //Check if match
            if(description[j] == container[i].get_Type())
            {
                
                if(description[j] == "HW")
                {
                    HW[0] += container[i].get_Grade();
                    HW[1] += container[i].get_MaxGrade();
                }
                else if(description[j] == "Quiz")
                {
                    Quiz[0] += container[i].get_Grade();
                    Quiz[1] += container[i].get_MaxGrade();
                }
                else if(description[j] == "Class Work")
                {
                    ClassWork[0] += container[i].get_Grade();
                    ClassWork[1] += container[i].get_MaxGrade();
                }
                else if(description[j] == "Exam")
                {
                    Exam[0] += container[i].get_Grade();
                    Exam[1] += container[i].get_MaxGrade();
                }
            }
        }
    }
    //Calculate summary and display them
    grandTotal[0] = HW[0] + ClassWork[0] + Quiz[0] + Exam[0];
    grandTotal[1] = HW[1] + ClassWork[1] + Quiz[1] + Exam[1];
    grandPercentage = grandTotal[0] * 1.0 * 100 / grandTotal[1];
    cout << "-----------------------------------------------------------------------------------" << endl;
    cout << "Summary" << endl;
    printf("%-18s  %-25s  %-12s  %-9d  %-9d\n", "HW", "", "", HW[1], HW[0]);
    printf("%-18s  %-25s  %-12s  %-9d  %-9d\n", "Class Work", "", "", ClassWork[1], ClassWork[0]);
    printf("%-18s  %-25s  %-12s  %-9d  %-9d\n", "Quiz", "", "", Quiz[1], Quiz[0]);
    printf("%-18s  %-25s  %-12s  %-9d  %-9d\n", "Exam", "", "", Exam[1], Exam[0]);
    cout << "-----------------------------------------------------------------------------------" << endl;
    printf("%-18s  %-25s  %-12s  %-9d  %-9d\n", "Grand Total", "", "", grandTotal[1], grandTotal[0]);
    printf("%-18s  %-25s  %-12s  %-9s  %-9.2f\n", "Grade Percentage", "", "", "", grandPercentage);
    if(grandPercentage >= 90 && grandPercentage <= 100)
    {
        printf("%-18s  %-25s  %-12s  %-9s  %-9s\n", "Letter Grade", "", "", "", "A");
    }
    else if(grandPercentage >= 80 && grandPercentage <= 89)
    {
        printf("%-18s  %-25s  %-12s  %-9s  %-9s\n", "Letter Grade", "", "", "", "B");
    }
    else if(grandPercentage >= 70 && grandPercentage <= 79)
    {
        printf("%-18s  %-25s  %-12s  %-9s  %-9s\n", "Letter Grade", "", "", "", "C");
    }
    else if(grandPercentage >= 60 && grandPercentage <= 69)
    {
        printf("%-18s  %-25s  %-12s  %-9s  %-9s\n", "Letter Grade", "", "", "", "D");
    }
    if(grandPercentage >= 0 && grandPercentage <= 59)
    {
        printf("%-18s  %-25s  %-12s  %-9s  %-9s\n", "Letter Grade", "", "", "", "F");
    }
    cout << endl;
}