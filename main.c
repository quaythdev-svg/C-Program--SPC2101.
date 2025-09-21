//Simple C Program(Volume and Surface area of a Cylinder)
/*
Name:Kimani Keth Gachunu.
Registration Number:CT101/G/24892/25.
Date:21/09/2025.
Description:Simple code to find volume and Surface area of a cylinder.
Formula:Volume PI*radius*radius*height
        Surface area of closed (2*PI*radius*radius)+(2*PI*radius*height).
        surface area of open(2*PI*radius*height)+(PI*radius*radius).
        1m = 100cm.
        1cm - 10mm.
        1cm = 1cm.
*/

#include <stdio.h>  //Pre-processor directive printf(),scanf().
#define PI 3.14159f  //PI will be replaced by 3.14159f when compling everywhere, hence use of #define.
#include <string.h>  // for strcmp() (compares two strings character by character) ,will help with unit conversion and handling.

int main () {
    //Data types and identifiers.
    //folliwing rules of naming identifiers.  // use of float to as inputed values can in decimal.
    float radius;
    float height;
    float volume;
    float surface_area_of_closed;
    float surface_area_of_open;
    char unit[10];  //gives basis of units(m,cm and mm) for convertion to cm. // [10] allocates for a maximum 10 characters.

    //Input radius values.
    printf("Enter the radius of the cylinder(m, cm or mm):");
    scanf("%f%s", &radius,unit); //%s allows the user to add the units given for exaple cm.// 'unit' is dependent on what the user inputs(m,cm and mm).

    //unit convesion to cm for radius.
    if(strcmp(unit,"mm")==0){
        radius=radius/10.0;  //10mm=1cm(converting mm to cm).
    }else if (strcmp(unit,"m")==0){
        radius=radius*100.0; //1m=100cm  (converting m to cm).
    }else if(strcmp(unit,"cm")!=0){
        printf("if there is an unknown unit for radius!defaulting to cm\n");  //no need to convert cm as it is already in cm.
    }

    //inputing height values.
    printf("Enter the height of the cylinder(m, cm or mm):");
    scanf("%f%s", &height,unit); //%s allows the user to add the units given for example cm.

    //unit convesion to cm for Height.
    if(strcmp(unit,"mm")==0){
        height=height/10.0;  //10mm=1cm(converting mm to cm).
    }else if (strcmp(unit,"m")==0){
        height=height *100.0; //im=100cm  (converting m to cm).
    }else if(strcmp(unit,"cm")!=0){
        printf("if there is an unknown unit for radius!defaulting to cm\n");
    }

    //Calculations
    volume=PI*radius*radius*height;  //volume.
    surface_area_of_closed=(2*PI*radius*radius)+(2*PI*radius*height); //Surface area of closed.
    surface_area_of_open=(2*PI*radius*height)+(PI*radius*radius);  //Surface area of open.

    //Displaying Calculated values.
    printf("\n    CYLINDER PROPERTIES.    \n");
    printf("volume: %.4f cubic.cm\n", volume); // to four decimal places.
    printf("surface Area (closed cylinder):%.4fsquared.cm\n",surface_area_of_closed);   //to four decimal places.
    printf("surface Area (Open cylinder):%.4fsquared.cm\n",surface_area_of_open);  // to four decimal places.

    return 0;
}
