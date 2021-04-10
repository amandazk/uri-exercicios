# include <stdio.h>
int main(){
 
    int number,hours;
    float amount,SALARY;
    
    scanf("%d %d %f", &number, &hours, &amount);
    SALARY = hours * amount;
    
    printf("NUMBER = %d\n",number);
    printf("SALARY = U$ %0.2f\n", SALARY); 
    
    return 0;
}