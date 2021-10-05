#include<stdio.h>
#include <unistd.h>

int main(){
    int a = 5;
    int pid = fork();
    if(pid == 0){
        printf("SOY EL PROCESO HIJO; pid = %d \n",pid);
    }
    else{
        printf("Soy el proceso padre; pid = %d \n",pid);
    }
    return 0;
}