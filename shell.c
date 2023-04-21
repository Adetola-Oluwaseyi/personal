#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>

int main(void)
{
        char *argo[] = {NULL, NULL};
        char *line = NULL, *arg = NULL, *art = NULL, *str;
        int erro;
        size_t n = 0;
        char *environ[] = {NULL};
        int pid, status, i, no;

        printf("#cisfun$ ");
        no = getline(&line, &n, stdin);
        printf("%d\n", no);
        arg = malloc(sizeof(char) * no);
        if (arg == NULL) {
                free(line);
                return (0);
        }
        no--;
        for (i = 0; i < no; i++)
        {
                arg[i] = line[i];
        }
        arg[no] = '\0';
        for (;; arg = NULL) {
                str = strtok(arg, "/");
                if (str == NULL)
                        break;
                art = str;
        }
        line[no] = '\0';
        argo[0] = art;
        pid = fork();
        if (pid == 0) {
                erro = execve(line, argo, environ);
                if (erro == -1) {
                        printf("Error\n");
                        free(line);
                        free(arg);
                        exit(1);
                }
                exit(0);
        } else {
                wait(&status);
        }
        free(line);
        free(arg);
        return (0);
}
