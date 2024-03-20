// Q1. Write a menu driven program for Date in a C. Declare a structure Date having data members
// day, month, year. Implement the following functions.
// void initDate(struct Date* ptrDate);
// void printDateOnConsole(struct Date* ptrDate);
// void acceptDateFromConsole(struct Date* ptrDate);

#include<stdio.h>
struct date{
    int  day;
    int  month;
    int  year;
};

void initDate (struct date *ptrdate){
    ptrdate->day=01;
    ptrdate->month=01;
    ptrdate->year=1000;
    printf("+++++++\n%d/%d/%d\n+++++++",ptrdate->day,ptrdate->month,ptrdate->year); 
}
void printDateOnConsole(struct date* ptrdate){
    
    printf("\n%d/%d/%d\n============\n",ptrdate->day,ptrdate->month,ptrdate->year);

}

void acceptDateFromConsole(struct date* ptrdate){
    printf("\nEnter Day ::\n");
    scanf("%d",&ptrdate->day);

    printf("Enter Month ::\n");
    scanf("%d",&ptrdate->month);

    printf("Enter Year::\n");
    scanf("%d",&ptrdate->year);
}

int main(){
    struct date d1;
    int choice;
    initDate(&d1);
    do{
    printf("\nEnter 0 for exit");
    printf("\nEnter 1 for acceptdate");
    printf("\nEnter 2 to go for displaydate");
    printf("\nEnter choice::\n");
    scanf("%d",&choice);
    printf("============");
    switch(choice)
    {
        case 0: 
           printf("\nThank you for using the app.....");break;
        case 1:
           acceptDateFromConsole(&d1);
            break;
        case 2:
           printDateOnConsole(&d1);break;
        default:
           printf("\nwrong choice\n============\n");
           break;
    }
    }while(choice!=0);
    
    return 0;
}