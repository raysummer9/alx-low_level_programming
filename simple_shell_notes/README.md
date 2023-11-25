How does a shell work?

PID (Process ID)
Your computer can keep track of your executables. Each execution you're doing on your computer has a unique process ID. If you want to retrieve the current process ID run getpid function

e.g pid_t getpid(void) - this returns the pricess id of the executable
e.g pid_t getppid(void) - used to get the parent process id

everytime you run the program the process ID is different.
PPID (Parent Process ID) - each process has a parent: the process that created it 
syntax - pid_t parent_pid; parent_pid get_ppid;

unlike pid, ppid's are constant. 
echo $$ - will print the same value will print the parent id of the same shell
