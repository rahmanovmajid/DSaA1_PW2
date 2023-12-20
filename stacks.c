#include<stdio.h>

struct stack{
    
    int N[100];
    int size;

};

struct stack ST_new();
void ST_print(struct stack st);
int ST_size(struct stack st);
struct stack ST_push(struct stack st, int n);
struct stack ST_pop(struct stack st);
int ST_top(struct stack st);


int main(){

    struct stack st = ST_new();
    st = ST_push(st,1); // size of stack : 1, top is 1
    st = ST_push(st,5); // size of stack : 2, top is 5
    st = ST_push(st,2); // size of stack : 3, top is 2
    st = ST_push(st,7); // size of stack : 4, top is 7
    st = ST_pop(st); // size of stack : 3, top is 2
    st = ST_pop(st); // size of stack : 2, top is 5
    st = ST_pop(st); // size of stack : 1, top is 1
    st = ST_push(st,3); // size of stack : 2, top is 3
    st = ST_push(st,10); // size of stack : 3, top is 10
    st = ST_pop(st); // size of stack : 2, top is 3
    st = ST_pop(st); // size of stack : 1, top is 1
    st = ST_pop(st);
    ST_print(st);
    return 0;
}


struct stack ST_new(){
    struct stack new;
    new.size = 0;
    return new;
}

void ST_print(struct stack st){
    for ( int i = 0; i < st.size ; i++ ){
        printf("%d\n",st.N[i]);
    }
}

int ST_size(struct stack st){
    return st.size;
}

struct stack ST_push(struct stack st, int n){
    if ( st.size > 100 ){
        printf("ERROR!");
        return st;
    }
    st.N[st.size] = n;
    st.size++;
    return st;
}

struct stack ST_pop(struct stack st){
    if ( st.size == 0 ){
        printf("ERROR! Stack is empty.");
        return st;
    }
    st.size--;
    return st;
}

int ST_top(struct stack st){
    if (st.size == 0){
        printf("ERROR");
        return 0;
    }
    return st.N[st.size];
}