# round_robin_strategy
Priority based scheduler

-> We have done this program in xv6 (a UNIX like OS for teaching OS by MIT).

-> We have to modify xv6 to allow for priority scheduling. 

  1) You need to define a range of the priority values. Processes with higher priority (lower 
     priority value) should be scheduled earlier. 
  
  2) New processes should receive a default priority.
  
  3) Round robin strategy should be applied to those processes with the same priority.
  
  4) If process 1 is being executed while process 2 with higher priority becomes available, 
     process 2 will be considered for execution the next time when the scheduler gains 
     control. This could be the time, for example, when process 1 has used up its current 
     quantum or when process 1 has completed its current burst. 

  5) You need to provide two system calls to perform testing: 
    a) A system call ps to display the process state. You need to include the display of the priority values.
    b) A system call set to modify the priority of a process dynamically, with prototype
       "int set(int pid, int priority);"

  6) For the purpose of testing, you will need to write at least one user program that takes some time for computation.
