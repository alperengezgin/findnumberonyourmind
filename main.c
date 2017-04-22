#include <stdio.h>
#include <stdlib.h>
void writing(int *array[][4])
{
    int i,j;
    printf("\n\t");
    for (i=0;i<4;i++)
    {
        for (j=0;j<4;j++)
        {
            printf("%5d",array[i][j]);
        }
        printf("\n\t");
    }
    printf("\n\n");
}
int main()
{
    int a1[4][4]={ {21,13,7,11}, {9,25,31,19}, {5,1,17,27}, {29,15,23,3} };
    int a2[4][4]={ {2,6,15,30}, {22,3,10,26}, {11,7,19,23}, {27,14,31,18} };
    int a3[4][4]={ {7,21,30,15}, {12,31,5,23}, {4,29,13,20}, {14,22,28,6} };
    int a4[4][4]={ {8,26,30,10}, {14,11,27,31}, {12,9,25,13}, {29,15,24,28} };
    int a5[4][4]={ {16,22,29,18}, {31,17,25,26}, {20,30,21,28}, {23,19,27,24} };

    int go,number_mind=0,ctrl1,ctrl2,ctrl3,ctrl4,ctrl5;

    point0:
    printf("\t Please Keep a Number in Your Mind!\n\n");

    printf("Press 1 for continue! || Press 0 for exit: ");
    scanf("%d",&go);

    printf("\n\n");
    if (go == 1){
        point1:
        printf("\t 1. Card:\n");
        writing(a1);
        printf("\nIf you have a number card of your choice, press 1 || Press 0 for don't have: ");
        scanf("%d",&ctrl1);

        if (ctrl1 == 1){
            number_mind = number_mind + 1;
        }
        point2:
        printf("\t 2. Card:\n");
        writing(a2);
        printf("\nIf you have a number card of your choice, press 1 || Press 0 for don't have: ");
        scanf("%d",&ctrl2);

        if (ctrl2 == 1){
            number_mind = number_mind + 2;
        }
        point3:
        printf("\t 3. Card:\n");
        writing(a3);
        printf("\nIf you have a number card of your choice, press 1 || Press 0 for don't have: ");
        scanf("%d",&ctrl3);

        if (ctrl3 == 1){
            number_mind = number_mind + 4;
        }
        point4:
        printf("\t 4. Card:\n");
        writing(a4);
        printf("\nIf you have a number card of your choice, press 1 || Press 0 for don't have: ");
        scanf("%d",&ctrl4);

        if (ctrl4 == 1){
            number_mind = number_mind + 8;
        }
        point5:
        printf("\t 5. Card:\n");
        writing(a5);
        printf("\nIf you have a number card of your choice, press 1 || Press 0 for don't have: ");
        scanf("%d",&ctrl5);

        if (ctrl5 == 1){
            number_mind = number_mind + 16;
        }
    }
    else if (go == 0){
        printf("Good Bye!");
        return 0;
    }
    else {
        goto point0;
    }

    printf("\n \n \t \t Your number is %d \n \n",number_mind);
    point6:
    printf("if you want try again press 1 || press 0 for exit");
    int end;
    scanf("%d",&end);
    if (end != 1 || 0)
        goto point6;
    else if (end == 1)
        goto point0;
    else
        printf("Good Bye!");
        return 0;

}
