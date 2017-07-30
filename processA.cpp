#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string>
#include <iostream>
#include <string.h>
#include <stdlib.h>
#define MAX_SIZE 2147234
using namespace std;

int main(){
    while(true){
    int fileOpen, result;
    string message = "", prompt = "message: ";
    char string[MAX_SIZE];
    memset(string,0,MAX_SIZE);
    const char *path = "/tmp/piper";
    mkfifo(path, 0777);
    
    if (access(path, F_OK) == -1){
	exit(0);
    }
    cout << prompt;
    getline(cin,message);
    fdC = open(path, O_WRONLY);
   
    for (int i = 0; i < message.length(); i++){
        string[i] = message[i];
    }
    result = write(fileOpen, string, MAX_SIZE);
    close(fileOpen);
    }
    return 0;
}

