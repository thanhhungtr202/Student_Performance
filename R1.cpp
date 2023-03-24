/********************************************
 * R1 read from files
 *
 * Author: Thanh Hung Tran
 * Version: 05/08/2022
 *********************************************/
#include "gradeItem.h"

//Read from files
int R1(vector<GradeItem>& container)
{
    cout << "Please provide the name of your input file: " << endl;
    string fileName;
    cin >> fileName;
    //check if file given file exist
    ifstream infile(fileName);
    if (!infile) 
    {
        return 1;
    }
    string Header, Date, Description, Type, MaxGrade, Grade;
    //check if file is empty
    if(!getline(infile, Header))
    {
        return 2;
    }
    //going through the file and store all GradeItem into container
    while (infile.good())
    {
        getline(infile,Date, ',');
        getline(infile,Description, ',');
        getline(infile,Type, ',');
        getline(infile,MaxGrade, ',');
        getline(infile,Grade);
        container.push_back(GradeItem(Date, Description, Type, stoi(MaxGrade), stoi(Grade)));
    }
    infile.close();
    return 3;
}