#include<stdio.h>
int main(){
    int age,salary;
    char gender;
    
    printf("Enter your age : ");
    scanf("%d",&age);
    printf("Enter your salary : ");
    scanf("%d",&salary);
    printf("Enter your gender : ");
    scanf(" %c",&gender);

    if(age>=45){
        if(salary>=45000){
            if(gender=="Male"||gender=="Female"){
                printf("Tax = %d",(salary*10)/100);
            }
        }
    }
    return 0;
}