#include "shell.h"

int main(void)
{
	char cmd[120];

	while (true)
	{
		show_prompt();
		get_command(cmd, sizeof(cmd));
		exec_command(cmd);
	}
}
