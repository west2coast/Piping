#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <fstream>
#include <string.h>
#define MAX_SIZE 2147234

int main(){
    while(true){
    int fileOpen ,result;
    const char *path = "/tmp/piper";
    char buffer[MAX_SIZE];
    memset(buffer,0,MAX_SIZE);
 
    
    while (open(path, O_RDONLY) == -1){
     //fdC = open(path, O_RDONLY);
    }
    fileOpen = open(path, O_RDONLY);
    result = read(fileOpen, buffer, MAX_SIZE);
    printf("Message: %s\n", buffer);
    close(fileOpen);
    }
    return 0;
}

