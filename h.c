#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>
#include<time.h>
int main() {
    char inputs[11];
    char end_call;
    time_t previous_time,seconds=0,minutes;
    int input_length;
    float balance=100.0;

    printf(": ");
    scanf("%s", inputs);
    input_length = strlen(inputs);

   /* checking for ussd codes */
    if(inputs[0]=='*'&& inputs[input_length-1]=='#')
    {
        if(strcmp(inputs,"*400#")==0)
        {
            printf("your balance is Rs :%f\n",balance);
            printf("Expires on apr 2026 24\n");
            printf("9867055880,yogesh contact\n");
        }
        else if(strcmp(inputs,"*1415#")==0)
        {
            printf("1)Autumn offer\n2)Prepaid packs\n3)Voice\n4)Data\n5)ULIMITED\n");
        }
        else
        {
            printf("invalid code");
        }
    }

    /* number checking */
    else if(inputs[0]=='9' && inputs[1]=='8')
    {
        if(strlen(inputs)==10)
        {
            system("afplay /Users/yogesh/in_c/ringing.wav &");
            printf("calling.......\n");
            sleep(9);
            previous_time = time(NULL);
            printf("connected\n");
            while(1)
             {
                  seconds = time(NULL) - previous_time;
                  minutes = seconds/60;
                  seconds = seconds%60;
                  printf(" %02ld:%02ld\r", minutes, seconds);
                  fflush(stdout);
             }
        }
        else
        {

            printf("invalid number");
        }
    }



    else
    {   system("afplay /Users/yogesh/in_c/call_failed.wav &");
        printf("calling........\n");

    }


    return 0;
}