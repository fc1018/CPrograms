//Program to illustate static and automatic variables

#include <stdio.h>

void auto_static (void){
    int autoVar = 1;
    static int staticVar = 1;

    printf("automatic = %i, static = %i\n", autoVar, staticVar);

    autoVar++;
    staticVar++;
}

int main (){
    void auto_static (void);

    for ( int i = 0; i < 5; i++ ){
        auto_static ();
    }

    return 0;
}