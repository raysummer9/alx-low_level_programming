#include "shell.h"

void exec_command(const char *cmd)
{
	pid_t pid = fork();

	if (pid == -1)
	{
		myprintf("Error\n");
		exit(EXIT_FAILURE);
	}
	else if (pid == 0)
	{
		char *args[128];
		int arg_count = 0;

		char *token = strtok((char *)cmd, " ");
		while (token != NULL)
		{
			args[arg_count++] = token;
			token = strtok(NULL, " ");
		}
		args[arg_count] = NULL;
		execvp(args[0], args);

		myprintf("Error\n");
		exit(EXIT_FAILURE);
	}
	else
	{
		wait(NULL);
	}
}
