#include <stdio.h>
#include <stdlib.h>

int main()
{
    int math;
    int chem;
    int phy;
    printf("Enter the math mark: \n");
    scanf("%d",&math);
    printf("Enter the physics mark: \n");
    scanf("%d",&phy);
    printf("Enter the chemistry mark: \n");
    scanf("%d",&chem);
    int total = math+chem+phy;
    int total2 = math+phy;
    if((math>=65 && phy >= 55 && chem >= 50 && total >=190) || total2 >= 140){
        printf("Student passed");
    }
    else{
        printf("Student failed");
    }

}

