/********************************************
 * R6 write to files
 *
 * Author: Thanh Hung Tran
 * Version: 05/08/2022
 *********************************************/
#include "gradeItem.h"

void R6(vector<GradeItem>& container)
{
    //check if to make sure that container is not empty
    if(container.empty())
    {
        cout << "There is nothing to ouput, please use R1 first" << endl;
    }
    else
    {
        string fileName;
        cout << "Please provide the name of your output file: " << endl;
        cin >> fileName;
        ofstream outfile;
        outfile.open(fileName);
        string header = "Date,Description,Type,MaxGrade,Grade";
        outfile << header;
        //going through container and output everything into the new file
        for(int i = 0; i < container.size(); i++)
        {
            outfile << endl;
            outfile << container[i].get_Date() << "," << container[i].get_Description() << "," << container[i].get_Type() << "," << container[i].get_MaxGrade() << "," << container[i].get_Grade();
        }
        outfile.close();
    }
}