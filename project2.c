/* Project #2 
   EGRE 245
   Akshita Ramesh */
#include <stdio.h>
#include <math.h> 

int main(void) {

    printf("Proj. #2 - Akshita Ramesh\n");

    // collect the values needed 
    float acr, dcr, act, brake, distOne, distTwo, distThree, finVel, avgVel, dist, time, time2; 
    
    printf("Acceleration rate (in m/s/s):");
    scanf("%f", &acr);
    
    printf("Acceleration time (in minutes):");
    scanf("%f", &act);
   
    printf("Time until brakes were applied (in minutes):");
    scanf("%f", &brake);

    printf("Deceleration rate (in m/s/s):");
    scanf("%f", &dcr);
  

    // ra = acr, rd = dcr, vf = finvel t1 = act t2 = brake d1 = distOne t2 = brake 
    finVel = acr * (act * 60); // final velocity is acceleration times time 
    avgVel = finVel / 2.0; //  final velocity divided by 2 is average
    time2 = (brake * 60) - (act * 60);
    distOne = (((acr * ((act * 60) * (act * 60)))) / 2.0); // acceleration times time squared divided by 2
    distTwo = (finVel * ((brake * 60) - (act * 60))) + distOne;
    distThree = (finVel * finVel) / (2.0 * dcr);
    dist = (distTwo + distThree) / 1000; 
    // (((finVel*(time2)) + distOne) + ((finVel * finVel) / (2.0 * dcr)));
    

    // phrasing the data input
    printf(" \n- the train accelerated from rest at a rate of %.2f m/s/s ", acr);
    printf("for %.2f minutes \n", act);

    printf("- it traveled for %.2f mins total until it applied its brakes \n", brake);


    printf("- it then decelerated at a rate of %.2f m/s/s until it was at rest \n \n", dcr);
 
     // solve for the total distance traveled 

    printf("Total distance travelled: %.3f km", dist);
   

    return 0; 
}