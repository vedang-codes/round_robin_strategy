#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int main(int argc, char *argv[])
{
    int priority, pid;
    pid = atoi(argv[1]);
    priority = atoi(argv[2]);
    if (priority < 0 || priority > 20) {
        printf(2, "Invalid priority, range is (0-20)\n");
        exit();
    }
    
    set(pid, priority);
    exit();
}