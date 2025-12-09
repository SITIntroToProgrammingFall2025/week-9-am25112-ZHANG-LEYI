#include <stdio.h>

int main() 
{
 int r, g, b, x=0, y=0, z=0;
 scanf("%d", &r);
 scanf("%d", &g);
 scanf("%d", &b);

    int d_black = r*r + g*g + b*b;
    int d_red = (255-r)*(255-r) + g*g + b*b;
    int d_green = r*r + (255-g)*(255-g) + b*b;
    int d_blue = r*r + g*g + (255-b)*(255-b);
    int d_white = (255-r)*(255-r) + (255-g)*(255-g) + (255-b)*(255-b);

    int min = d_black;
    char* color = "Black";
    
    if (d_red < min) { min = d_red; color = "Red"; }
    if (d_green < min) { min = d_green; color = "Green"; }
    if (d_blue < min) { min = d_blue; color = "Blue"; }
    if (d_white < min) { min = d_white; color = "White"; }
    
    printf("The nearest color is %s\n", color);
    
    return 0;
}


