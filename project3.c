/* Project 3 
   Akshita Ramesh 
   EGRE 245 */

#include <stdio.h>
#define _USE_MATH_DEFINES 
#include <math.h> 

int main(void) { 

 int pipInc = 0, getRaddi = 0; 

 float flow = 0, min = 0, smalRad = 0, desFlowVolume = 0, closestPipeRadius = 0, finRad = 0, finVol = 0, inputNum = 0, inputVol = 0, diff = 0; 

 float volume[10] = {0,0,0,0,0,0,0,0,0,0}, radius[10] = {0,0,0,0,0,0,0,0,0,0};

 printf("Project #3 - Akshita Ramesh \n \n");
 

 printf("flow (in m/s): "); 
 scanf("%f", &flow);

 printf("smallest radius (in cm): ");
 scanf("%f", &smalRad);

 printf("pipe increment (in cm): "); 
 scanf("%d", &pipInc);

 printf("desired flow volume (in cu m/s): "); 
 scanf("%f", &desFlowVolume); 

 printf("\n");

 printf("Speed of liquid: %.3f m/s \n", flow);

 printf("Smallest pipe radius: %.3f cm \n", smalRad);

 printf("Desired flow: %.4f cu m/s \n", desFlowVolume);



 printf(" \nRadius (cm)\tVolume (cu m/s) \n" ); 
 printf("-----------\t--------------- \n" ); 


 int i = 0; 
 inputNum = smalRad; 
 finRad = inputNum;
 finVol = 0;

 while (i < 10) {
   inputVol = (pow((inputNum / 100), 2) * M_PI * flow);
   volume[i] = fabs(desFlowVolume - inputVol); 
   radius[i] = inputNum;
   printf("   %.2f\t    %.4f  \n", inputNum, inputVol);
   inputNum = inputNum + 5; 
   i++; 
   
 }
 
 
 int j = 0;  
 finVol = volume[0]; 
 getRaddi = j; 

 while (j < 10)
 {
   if (finVol > volume[j]) {
      finVol = volume[j]; 
      getRaddi = j;
   } 
   j++; 
 }

 printf("\nclosest pipe radius for desired flow of %.4f cu m/s: %.2f cm", desFlowVolume, radius[getRaddi]);

return 0; 


}