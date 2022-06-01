#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// structure
struct line{
    struct point{
    float x;
    float y;
    }point1, point2;
    float midpoint;
    float slope;
    float distance;
    float intercept;
}line1;

// structure as functioin parameters

float solveSlope(struct line line1){
    printf ("Slope: %f\n", line1.slope); // printing result
}
float solveMidpoint (struct line line1, struct line line2){
    printf ("Midpoint: %f, %f\n", line1.midpoint, line2.midpoint); // printing result
}
float solveDistance (struct line line1){
    printf ("Distance between 2 points: %f\n", line1.distance); // printing result
}
void getSlopeInterceptForm (struct line line1){
    printf ("y = %fx + %f\n", line1.slope, line1.intercept); // printing result
}
int main()
{
    float a, b, c, d; // declaring variables
    struct line lines;
    struct line x; // had to make another structure for the y midpoint

    printf ("Enter x and y for point 1: "); // printing of instruction
    scanf ("%f %f", &line1.point1.x, &line1.point1.y); // storing of values

    printf ("Enter x and y for point 2: "); // printing of instruction
    scanf ("%f %f", &line1.point2.x, &line1.point2.y); // storing the values

    a = (line1.point2.x - line1.point1.x); // for the distance and slope for easy computing
    b = (line1.point2.y - line1.point1.y);

    //  DISTANCE...
    lines.distance = (sqrt (a * a + b * b)); // formula in solving for the distance
    solveDistance(lines); // calling the function

    // MIDPOINT...
    c = (line1.point1.x + line1.point2.x) / 2; // formula in computing the midpoint (x)
    d = (line1.point1.y + line1.point2.y) / 2; // formula in computing the midpoint (y)

    lines.midpoint = c; // storing the value of c
    x.midpoint = d; // storing the value of d (where the added structure is used)
    solveMidpoint(lines, x); // calling the function

    // SLOPE...
    lines.slope = (b / a); // formula in solving for slope
    solveSlope(lines); // calling the function

    // SLOPE INTERCEPT FORM...
    lines.intercept = (line1.point1.y - (lines.slope * line1.point1.x)); // formula in computing the slope intercept forn
    getSlopeInterceptForm (lines); // calling the function

    return 0;
}
