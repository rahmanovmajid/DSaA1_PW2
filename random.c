#include<stdio.h>
#include<stdlib.h>
#include<time.h>

float random01();
float random0n();
int tossofOnedice();
int tossofTwodice();


int main(){

    srand(time(0));

    printf("%d\n",RAND_MAX);
    printf("2:\n~\n~\n~\n");
    //2147483647

    for ( int N = 20; N > 0 ; N-- ){
        printf("%ld\n",random());
    }

    for ( int i = 0 ; i < 15 ; i++ ){
        printf("%.2f\n",random01());
    }


    printf("%d\n",tossofTwodice());

    return 0;
}


float random01(){
    float numb = (float)(rand()%10) / (float) 10;
    return numb;
}

float random0n(int n){
    float numb = (float)(rand()%n);
    return numb;
}


int tossofOnedice(){
    int toss = ((int)random0n(6)+1);
    do{
        toss = ((int)random0n(6)+1);
    }while(toss == 0 );
    return toss;
}


int tossofTwodice(){
    int toss1 = ((int)random0n(6)+1);
    do{
        toss1 = ((int)random0n(6)+1);
    }while(toss1 == 0 );
    
    int toss2 = ((int)random0n(6)+1);
    do{
        toss2 = ((int)random0n(6)+1);
    }while(toss2 == 0 );
    return toss1 + toss2;
}


