/********************************************
 * gradeItem.cpp define all of the functions
 *
 * Author: Thanh Hung Tran
 * Version: 05/08/2022
 *********************************************/
#include "gradeItem.h"

//definitions for class GradeItem
GradeItem::GradeItem(){}

GradeItem::GradeItem(string DateVar, string DescriptionVar, string TypeVar, int MaxGradeVar, int GradeVar)
{
    Date = DateVar;
    Description = DescriptionVar;
    Type = TypeVar;
    MaxGrade = MaxGradeVar;
    Grade = GradeVar;
}

string GradeItem::get_Date()
{
    return Date;
}

string GradeItem::get_Description()
{
    return Description;
}

string GradeItem::get_Type()
{
    return Type;
}

int GradeItem::get_MaxGrade()
{
    return MaxGrade;
}

int GradeItem::get_Grade()
{
    return Grade;
}

void GradeItem::set_Date(string DateVar)
{
    Date = DateVar;
}

void GradeItem::set_Description(string DescriptionVar)
{
    Description = DescriptionVar;
}

void GradeItem::set_Type(string TypeVar)
{
    Type = TypeVar;
}

void GradeItem::set_MaxGrade(int MaxGradeVar)
{
    MaxGrade = MaxGradeVar;
}

void GradeItem::set_Grade(int GradeVar)
{
    Grade = GradeVar;
}