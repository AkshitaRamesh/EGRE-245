#include <stdio.h> 
#include <math.h> 
#include <stdlib.h>

/* Project 5
   Akshita Ramesh
    EGRE 245 */

int getVoltages (int arr[]) {

    /* int value = 0; 
    int amVoltages = 0;

    for (int i = 0; i <= 71; i++)
    {
        arr[i] = 0; 
        scanf("%d ", &value); 
        arr[i] = value;
        amVoltages++;   
    }

    return amVoltages; */

    int amVoltages = 0;
    int value = 0; 

    for (int i = 0; i < 72; i++)
    {
        arr[i] = 0;
        scanf("%d ", &value); 
        arr[i] = value; 
        amVoltages++; 
    }

    return amVoltages;

}

double getMean (int arr[]) {

    double mean = 0;
    

    for (int i = 0; i < 72; i++)
    {
        mean += arr[i];
    }

    mean /= 72;

    return mean; 

}

double getBrownoutThreshold (int arr[]) {

    double tenPercent = 120 * 0.108;
    
 
    return 120 - tenPercent;
}

int variesFrom10Percent (int arr[], int var[], int val)
{
    double numster = getMean(arr) * 0.10; 
    int i = 0; 

    if (fabs(arr[val] - getMean(arr)) >= numster) 
    {
        var[val] = val; 
        
    } 
    
    else 
    {
        return 0; 
    }

    return val; 
    
}

int variesFrom15Percent (int arr[], int val)
{
    double numster = getMean(arr) * 0.15; 
    /* if (fabs(arr[val] - arr[(val + 1)]) >= numster)
    {
        return val; 

    } else 
    {
        return 0; 
    } */ 

    if (fabs(arr[val] - arr[val - 1]) > numster)
    {
        return val; 
    }
    
    else {
        return 0; 
    }
}

int counter (int val[])
{
    /* int i = 0, count = 0;

    for (i = 0; i < 72; i++) 
    {
        if (val[i] > 0)
        {
            count++;
            // printf("%d ", val[i]); 
        }
    }

    return count; */ 

    int i = 0, count = 0; 

    for (i = 0; i < 72; i++)
    {
        if (val[i] == 0)
        {
            // printf("%d", val[i]);
            count++; 
        }
        
    } 

    return count; 
}

int brownoutOccured (int arr[], int val) 
{
    if (arr[val] < getBrownoutThreshold(arr))
    {
        return val; 
    }
    
    else 
    {
        return -1; 
    }
} 

int main(void) { 

    int voltage[72]; 
    int varies[72];
    int increment = 0, i = 0, length = 0, comma = 0; 

    printf("EGRE 245 Project #5 Spring 2023 - Akshita Ramesh \n \n");
    
    printf("Number of Voltages: %d \n", getVoltages(voltage)); 
    
    printf("Mean Voltage: %3.2f (10%% of mean: %3.2f; 15%% of mean: %3.2f) \n", getMean(voltage), (getMean(voltage) * 0.10), (getMean(voltage) * 0.15));
    
    printf("Brownout threshold: %3.2f \n", getBrownoutThreshold(voltage));

    printf("\nhours that vary >= 10%% of mean: \n  ");

    comma = 1; 
    increment = 0;
    for (i = 0; i < 72; i++)
    {
        if (variesFrom10Percent(voltage, varies, i) > 0) 
        {
            if (varies[i] > 0)
            {
                if (comma == 1)
                {
                    printf("%d", varies[i] + 1);
                    comma = 0; 
                    increment++; 

                } 
                
                else if (comma == 0)
                {
                    printf(",%d", varies[i] + 1);
                    comma == 0;
                    increment++; 
                }
                
            } 

            
        } 

         /* else if (counter(varies) == increment) {
            printf("%d", varies[i] + 1); 
            break; 
        } */ 

    } 

    if (increment == 0)
    {
        printf("[none]");
    }
 
    printf("\nhours of neighbors that vary >= 15%% of mean: \n  ");

    increment = 0;
    comma = 1; 
    for (i = 0; i < 72; i++)
    {
        if (fabs(variesFrom15Percent(voltage, i)) > 0)
        {
            //if (increment == counter(varies) - 1)
            //{
                if (comma == 1)
                {
                    printf("(%d,%d)", variesFrom15Percent(voltage, i), variesFrom15Percent(voltage, i) + 1);
                    comma = 0; 
                    increment++;

                } 
                
                else if (comma == 0)
                {
                    printf(",(%d,%d)", variesFrom15Percent(voltage, i), variesFrom15Percent(voltage, i) + 1);
                    increment++; 
                }
                
                
            //}

        }
        
    } 
     
    if (increment == 0)
    {
        printf("[none]");
    }

    printf(" \nhours brownout occurred: \n  "); 

    increment = 0; 
    comma = 1; 
    for (i = 0; i < 72; i++)
    {
        if (brownoutOccured(voltage, i) > -1)  
        {
            

            if (comma == 1)
            {
                printf("%d", 1 + brownoutOccured(voltage, i));
                comma = 0; 
                increment++;

            } 
                
            else if (comma == 0)
            {
                printf(",%d", 1 + brownoutOccured(voltage, i));
                increment++; 
            }

            
        }
    
    }
 
     
    if (increment == 0)
    {
        printf("[none]");
    }
    return 0;
}