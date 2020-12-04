//
//  main.cpp
//  GetDoubles
//
//  Created by Frank Murray on 04/ 12/20.
//

#include <iostream>
using namespace std;

double *getDoubles (int numDoubles);

int main(int argc, const char * argv[])
{
    // insert code here...
    
    int count = 0, number = 0;
    double *doublesArray = {0};
    
    cout << "\nInput the size (positive integer) of the array: ";
    cin >> number;
    
    doublesArray = getDoubles (number);
    
    for (count = 0; count < number; count++)
    {
        cout << doublesArray[count] << " ";
    }
    
    delete doublesArray;
    
    cout << "\n\nHello, Solar System!\n";
    
    return 0;
}

double *getDoubles (int numDoubles)
{
    int count = 1, index = 0;
    double *myDoubles;
    double three = 3;
    
    myDoubles = new double[numDoubles];
    
    for (index = 0; index < numDoubles; index++)
    {
        myDoubles[index] = (double) (count / three);
        count++;
    }
    
    return myDoubles;
    
    // delete myDoubles;   <--- code never gets executed, just fyi;
}
