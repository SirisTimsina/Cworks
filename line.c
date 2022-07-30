
// Define a user defined data type for complex type line
# include <stdio.h> 
#include<math.h>

struct line {
// Structure line has 4 Components of type int
int x1, y1; // Coordinates of one endpoint of a line
int x2, y2; // Coordinates of other endpoint of a line 
};

double calculateLength(struct line l){
  double len =  sqrt(pow((l.x2 - l.x1),2) + pow((l.y2 - l.y1),2)); 
return len;
}

int main() {
struct line line1 = {.x2=2,.x1=3,.y2=5,.y1=7};
// line1.x1 = 2;
// line1.y1 = 3;

// line1.x2 = 5;
// line1.y2 = 7;
double length = calculateLength(line1);

printf("Length of the line is %lf\n\n", length);    
// display the distance between two points ie. length of a LINE
return 0;
}
