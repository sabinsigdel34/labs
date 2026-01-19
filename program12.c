#include <stdbool.h>
#include <stdio.h>



int main() {
    int yrs, days, months,b_yrs,b_mon,b_day;
    // int p_sec,b_sec;
    printf("Enter present date (year, month and day):  ");
    scanf("%d %d %d",&yrs, &months, &days);


    printf("Enter birth date (year, month and day):  ");
    scanf("%d %d %d",&b_yrs, &b_mon, &b_day);

    while (true) {

        if (days-b_day < 0) {
            if (months == 0) {
                yrs = yrs -1;
                months = months + 12;
            }
            months = months - 1;
            days = days + 30;

        }
        else if (months-b_mon < 0) {
            yrs = yrs - 1;
            months = months + 12;
        }
        else if (yrs - b_yrs < 0) {
            printf("invalid date");
            break;
        }
        else if (yrs-b_yrs >=0 && months-b_mon >=0 && days-b_day >= 0) {
            break;
        }
        else {
            printf("ok");
        }
    }
    printf("the age of yours is  (year, month and day): %d %d %d ",(yrs-b_yrs),(months-b_mon),(days-b_day) );


    return 0;
}
