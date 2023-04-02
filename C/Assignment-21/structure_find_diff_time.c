#include<stdio.h>
#include<string.h>
struct time
{
    int hour;
    int min;
    int sec;
};
typedef struct time t;

void cal_diff(t,t,t*);
void main(){

    t t1={4,30,20};
    t t2={5,30,20},diff;
    cal_diff(t1,t2,&diff);
    printf("%d:%d:%d",diff.hour,diff.min,diff.sec);
}

void cal_diff(t start,t end,t *diff){
    while(start.sec>end.sec){
        --end.min;
        end.sec+=60;

    }
    diff->sec=end.sec-start.sec;

    while(start.min>end.min){
        --end.hour;
        end.min+=60;
    }

    diff->min=end.min-start.min;
    diff->hour=end.hour-start.hour;
}
