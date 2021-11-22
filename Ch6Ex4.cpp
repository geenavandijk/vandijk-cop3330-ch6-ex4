/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Geena-Maria van Dijk
 */

#include "std_lib_facilities.h"

class Name_value
{
    public:
        string name;
        int value;
};

int main ()
{
    vector <Name_value> input;
    string tempName;
    int tempValue;
    int i = 0;
    int flag = 0;

    while (1)
    {
        cout << "Enter a name and value: "<< endl;

        cin>> tempName >> tempValue;


        if (tempName == "NoName" && tempValue == 0)
        {
            cout <<"Program terminated." <<endl;
            break;
        }

        for (int j = 0; j < i; j++)
        {
            if (input [j].name == tempName)
            {
                cout<<"Invalid input.\nProgram terminated." <<endl;
                flag = 1;
            }
        }

        if (flag)
            break;

        Name_value temp;
        temp.name = tempName;
        temp.value = tempValue;
        input.push_back(temp);
        i++;
    }

    for (int j = 0; j < i; j++)
        cout << input[j].name<<" " << input[j].value<< endl; 

    return 0;
}