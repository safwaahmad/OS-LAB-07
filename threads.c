#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
int main() {
pid_t pid = fork();
if (pid < 0) {
// Fork failed
perror("Fork failed");
exit(EXIT_FAILURE);
} else if (pid == 0) {
// Child process
printf("This is the child process with PID %d\n", getpid());
} else {
// Parent process
printf("This is the parent process with PID %d\n", getpid());
}
return 0;
}
