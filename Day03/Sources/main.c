//Import Lib
#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdbool.h>

#define AreaA 2.0
#define AreaB 1.0
#define AreaC 0.5

#define ObjectA 2.5
#define ObjectB 1.5
#define ObjectC 1.0

void PassExamChecking (float StandardPoint, float FirstPoint, float SecondPoint, float ThirdPoint, float Object, float Area) {
    float TempTotalPoint = FirstPoint + SecondPoint + ThirdPoint;
    float TotalPoint;
    
    if (StandardPoint > 0 && Area >= 0 && Object >= 0) {
        if (FirstPoint == 0 || SecondPoint == 0 || ThirdPoint == 0) {
            printf("Examinee doesn't request minimum condition to pass the exam.\n");
        }

        else if (FirstPoint > 0 && SecondPoint > 0 && ThirdPoint > 0) {
            if (Area == 1) {
                if (Object == 1) {
                    TotalPoint = AreaA + ObjectA + TempTotalPoint;

                    if (TotalPoint >= StandardPoint) {
                        printf("Congratulations to Examinee passed the exam\n");
                        printf("Total Point of the exam: %f\n", TotalPoint);
                    }

                    else {
                        printf("Examinee didn't pass the exam.\n");
                        printf("Total Point of the exam: %f\n", TotalPoint);
                    }
                }

                else if (Object == 2) {
                    TotalPoint = AreaA + ObjectB + TempTotalPoint;

                    if (TotalPoint >= StandardPoint) {
                        printf("Congratulations to Examinee passed the exam\n");
                        printf("Total Point of the exam: %f\n", TotalPoint);
                    }

                    else {
                        printf("Examinee didn't pass the exam.\n");
                        printf("Total Point of the exam: %f\n", TotalPoint);
                    }
                }

                else if (Object == 3) {
                    TotalPoint = AreaA + ObjectC + TempTotalPoint;

                    if (TotalPoint >= StandardPoint) {
                        printf("Congratulations to Examinee passed the exam\n");
                        printf("Total Point of the exam: %f\n", TotalPoint);
                    }

                    else {
                        printf("Examinee didn't pass the exam.\n");
                        printf("Total Point of the exam: %f\n", TotalPoint);
                    }
                }

                else if (Object != 1 || Object != 2 || Object != 3) {
                    TotalPoint = AreaA + TempTotalPoint;

                    if (TotalPoint >= StandardPoint) {
                        printf("Congratulations to Examinee passed the exam\n");
                        printf("Total Point of the exam: %f\n", TotalPoint);
                    }

                    else {
                        printf("Examinee didn't pass the exam.\n");
                        printf("Total Point of the exam: %f\n", TotalPoint);
                    }
                }

                else {
                    printf("Error!");
                }
                
            }

            else if (Area == 2) {
                if (Object == 1) {
                    TotalPoint = AreaB + ObjectA + TempTotalPoint;

                    if (TotalPoint >= StandardPoint) {
                        printf("Congratulations to Examinee passed the exam\n");
                        printf("Total Point of the exam: %f\n", TotalPoint);
                    }

                    else {
                        printf("Examinee didn't pass the exam.\n");
                        printf("Total Point of the exam: %f\n", TotalPoint);
                    }
                }

                else if (Object == 2) {
                    TotalPoint = AreaB + ObjectB + TempTotalPoint;

                    if (TotalPoint >= StandardPoint) {
                        printf("Congratulations to Examinee passed the exam\n");
                        printf("Total Point of the exam: %f\n", TotalPoint);
                    }

                    else {
                        printf("Examinee didn't pass the exam.\n");
                        printf("Total Point of the exam: %f\n", TotalPoint);
                    }
                }

                else if (Object == 3) {
                    TotalPoint = AreaB + ObjectC + TempTotalPoint;

                    if (TotalPoint >= StandardPoint) {
                        printf("Congratulations to Examinee passed the exam\n");
                        printf("Total Point of the exam: %f\n", TotalPoint);
                    }

                    else {
                        printf("Examinee didn't pass the exam.\n");
                        printf("Total Point of the exam: %f\n", TotalPoint);
                    }
                }

                else if (Object != 1 || Object != 2 || Object != 3) { 
                    TotalPoint = AreaB + TempTotalPoint;

                    if (TotalPoint >= StandardPoint) {
                        printf("Congratulations to Examinee passed the exam");
                        printf("Total Point of the exam: %f", TotalPoint);
                    }

                    else {
                        printf("Examinee didn't pass the exam.\n");
                        printf("Total Point of the exam: %f\n", TotalPoint);
                    }
                }

                else {
                    printf("Error!");
                }

            }

            else if (Area == 3) {
                if (Object == 1) {
                    TotalPoint = AreaC + ObjectA + TempTotalPoint;

                    if (TotalPoint >= StandardPoint) {
                        printf("Congratulations to Examinee passed the exam\n");
                        printf("Total Point of the exam: %f\n", TotalPoint);
                    }

                    else {
                        printf("Examinee didn't pass the exam.\n");
                        printf("Total Point of the exam: %f\n", TotalPoint);
                    }
                }

                else if (Object == 2) {
                    TotalPoint = AreaC + ObjectB + TempTotalPoint;

                    if (TotalPoint >= StandardPoint) {
                        printf("Congratulations to Examinee passed the exam\n");
                        printf("Total Point of the exam: %f\n", TotalPoint);
                    }

                    else {
                        printf("Examinee didn't pass the exam.\n");
                        printf("Total Point of the exam: %f\n", TotalPoint);
                    }
                }

                else if (Object == 3) {
                    TotalPoint = AreaC + ObjectC + TempTotalPoint;

                    if (TotalPoint >= StandardPoint) {
                        printf("Congratulations to Examinee passed the exam\n");
                        printf("Total Point of the exam: %f\n", TotalPoint);
                    }

                    else {
                        printf("Examinee didn't pass the exam.\n");
                        printf("Total Point of the exam: %f\n", TotalPoint);
                    }
                }

                else if (Object != 1 || Object != 2 || Object != 3) {
                    TotalPoint = AreaC + TempTotalPoint;

                    if (TotalPoint >= StandardPoint) {
                        printf("Congratulations to Examinee passed the exam\n");
                        printf("Total Point of the exam: %f\n", TotalPoint);
                    }

                    else {
                        printf("Examinee didn't pass the exam.\n");
                        printf("Total Point of the exam: %f\n", TotalPoint);
                    }
                }

            }

            else {
                if (Object == 1) {
                    TotalPoint = ObjectA + TempTotalPoint;

                    if (TotalPoint >= StandardPoint) {
                        printf("Congratulations to Examinee passed the exam\n");
                        printf("Total Point of the exam: %f\n", TotalPoint);
                    }

                    else {
                        printf("Examinee didn't pass the exam.\n");
                        printf("Total Point of the exam: %f\n", TotalPoint);
                    }
                }

                if (Object == 1) {
                    TotalPoint = ObjectB + TempTotalPoint;

                    if (TotalPoint >= StandardPoint) {
                        printf("Congratulations to Examinee passed the exam\n");
                        printf("Total Point of the exam: %f\n", TotalPoint);
                    }

                    else {
                        printf("Examinee didn't pass the exam.\n");
                        printf("Total Point of the exam: %f\n", TotalPoint);
                    }
                }

                if (Object == 1) {
                    TotalPoint = ObjectC + TempTotalPoint;

                    if (TotalPoint >= StandardPoint) {
                        printf("Congratulations to Examinee passed the exam\n");
                        printf("Total Point of the exam: %f\n", TotalPoint);
                    }

                    else {
                        printf("Examinee didn't pass the exam.\n");
                        printf("Total Point of the exam: %f\n", TotalPoint);
                    }
                }

                else if (Object != 1 || Object != 2 || Object != 3) {  
                    TotalPoint = TempTotalPoint;

                    if (TotalPoint >= StandardPoint) {
                        printf("Congratulations to Examinee passed the exam\n");
                        printf("Total Point of the exam: %f\n", TotalPoint);
                    }

                    else {
                        printf("Examinee didn't pass the exam.\n");
                        printf("Total Point of the exam: %f\n", TotalPoint);
                    }
                }

                else {
                    printf("Error!");
                }
            }
        }

        else {
            printf("Point of the exam: %f\n", TempTotalPoint);
        }
    }

    else {
        printf("Standard point is invalid\n");
    }
}

int main() {
    float StandardPoint, FirstPoint, SecondPoint, ThirdPoint, Object, Area;

    printf("Enter Standard Point of the exam: ");
    scanf("%f", &StandardPoint);
    printf("Enter First Point of the exam: ");
    scanf("%f", &FirstPoint);
    printf("Enter Second Point of the exam: ");
    scanf("%f", &SecondPoint);
    printf("Enter Third Point of the exam: ");
    scanf("%f", &ThirdPoint);
    printf("Enter Object: ");
    scanf("%f", &Object);
    printf("Enter Area: ");
    scanf("%f", &Area);

    PassExamChecking(StandardPoint, FirstPoint, SecondPoint, ThirdPoint, Area, Object);

    return 0;
}