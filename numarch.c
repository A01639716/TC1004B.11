int main(){
    int fd[2];
    int pid;

    pipe(fd);
    pid = fork();

    if(pid == 0){
        close(0);
        dup(fd[0]);
        close(fd[1]);
        execlp("wc","wc","-l",NULL);

    }else{

    }
}