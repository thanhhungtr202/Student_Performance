/********************************************
 * GradeItem class contains all of the info on gradeItem as well as many other operations
 *
 * Author: Thanh Hung Tran
 * Version: 05/08/2022
 *********************************************/
#ifndef gradeItem_H
#define gradeItem_H

#include <iostream>
#include <vector>
#include <fstream>
#include <string>
using namespace std;

//declarations for class GradeItem
class GradeItem
{
    private:
        string Date;
        string Description;
        string Type;
        int MaxGrade;
        int Grade;
    public:
        GradeItem();
        GradeItem(string DateVar, string DescriptionVar, string TypeVar, int MaxGradeVar, int GradeVar);
        string get_Date();
        string get_Description();
        string get_Type();
        int get_MaxGrade();
        int get_Grade();
        void set_Date(string DateVar);
        void set_Description(string DescriptionVar);
        void set_Type(string TypeVar);
        void set_MaxGrade(int MaxGradeVar);
        void set_Grade(int GradeVar);
};

#endif