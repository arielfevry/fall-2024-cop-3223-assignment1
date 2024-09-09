// import header files standard i/o and math library functions
#include <stdio.h>
#include <math.h>

#define PI 3.14159 // define PI as a constant value

double askUserForInput(){
    // variable to hold the user input
    double userInputedDimension = 0;

    // prompt user and save the inputed value to variable
    printf("\tEnter in dimension: ");
    scanf("%lf", &userInputedDimension);

    // return dimension
    return userInputedDimension;
}

// helper function to print user inputs back to terminal and for DRY
void printUserPoints(double x1, double y1, double x2, double y2){

    // prints the user inputs in sentence form
    printf("Point #1 entered: x1 = %lf; y1 = %lf; \nPoint #2 entered: x2 = %lf; y2 = %lf;", x1, y1, x2, y2);
}

// helper function to calculate the distance between two points without any print statments (its janky i know im sorry)
double distanceFormula(){
    // initialize and declare the user inputed points using askuser function
    double x1 = askUserForInput();
    double y1 = askUserForInput();
    double x2 = askUserForInput();
    double y2 = askUserForInput();

    // intitialize distance variable and calculate using the distance formula
    double distance = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));

    // display user inputs
    printUserPoints(x1, y1, x2, y2);

    return distance;
}

double calculateDistance(){

    // calculate distance between points using formula function
    double distance = distanceFormula();
    
    // display distance between the points to terminal   
    printf("\nThe distance between the two points is %lf \n", distance);
    
    return distance;
}

double calculatePerimeter(){

    // declaring / initializing radius from the diameter (distance)
    double radiusOfCircle = distanceFormula()/2;

    printf("\nThe perimeter of the city encompassed by your request is %lf\n", (2*PI*radiusOfCircle)); // calculate perimeter 2piR and print

    return 1;
}

double calculateArea(){

    // calculate area of circle PI * radius squared using math library and distance func for diameter
    double area = PI * pow(distanceFormula()/2, 2);

    // output to terminal 
    printf("\nThe area of the city encompassed by your request is %lf\n", area);

    return 1;
}

double calculateWidth(){
    // declare and initilize the points 
    double x1 = askUserForInput();
    double x2 = askUserForInput();

    return x2 - x1; // subtract to to get width
}

double calculateHeight(){
    // delcare and initilize points 
    double y1 = askUserForInput();
    double y2 = askUserForInput();

    return y2 - y1; // subtract to get height
}

int main(int argc, char **argv){
    //prompt user and call functions

    printf("Calculate the distance between two points on a circle by entering the x and y of the points respectively\n");
    calculateDistance();

    printf("\nCalculate perimeter of the city by entering the x and y of two points respectively.\n");
    calculatePerimeter();
    
    printf("\nCalculate the area of a city by entering the x and y of two points respectively.\n");
    calculateArea();

    printf("\nCaculate the width of a city by entering the x and y of two points respectively\n");
    calculateWidth();

    printf("\nCalculate the height of a city by entering the x and y of two points respectively\n")
    calculateHeight();

    return 0;
}