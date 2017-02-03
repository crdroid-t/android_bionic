// Autogenerated file - edit at your peril!!

#include <linux/filter.h>
#include <errno.h>

#include "seccomp_policy.h"
const struct sock_filter arm_filter[] = {
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 1, 0, 133),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 174, 67, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 77, 33, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 45, 17, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 26, 9, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 11, 5, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 6, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 3, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 2, 125, 126), //exit
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5, 124, 125), //read|write
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 7, 123, 124), //close
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 19, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 13, 121, 122), //execve|chdir
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 22, 120, 121), //lseek|getpid|mount
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 41, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 36, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 27, 117, 118), //ptrace
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 38, 116, 117), //sync|kill
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 43, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 42, 114, 115), //dup
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 44, 113, 114), //times
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 60, 7, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 54, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 51, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 46, 109, 110), //brk
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 53, 108, 109), //acct|umount2
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 57, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 55, 106, 107), //ioctl
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 58, 105, 106), //setpgid
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 66, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 64, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 62, 102, 103), //umask|chroot
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 65, 101, 102), //getppid
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 74, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 68, 99, 100), //setsid|sigaction
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 76, 98, 99), //sethostname|setrlimit
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 124, 17, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 103, 9, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 94, 5, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 91, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 87, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 80, 92, 93), //getrusage|gettimeofday|settimeofday
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 89, 91, 92), //swapon|reboot
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 93, 90, 91), //munmap|truncate
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 96, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 95, 88, 89), //fchmod
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 98, 87, 88), //getpriority|setpriority
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 118, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 114, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 106, 84, 85), //syslog|setitimer|getitimer
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 117, 83, 84), //wait4|swapoff|sysinfo
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 121, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 119, 81, 82), //fsync
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 123, 80, 81), //setdomainname|uname
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 138, 7, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 131, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 128, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 126, 76, 77), //adjtimex|mprotect
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 130, 75, 76), //init_module|delete_module
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 136, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 134, 73, 74), //quotactl|getpgid|fchdir
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 137, 72, 73), //personality
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 150, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 143, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 141, 69, 70), //setfsuid|setfsgid|_llseek
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 149, 68, 69), //flock|msync|readv|writev|getsid|fdatasync
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 172, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 164, 66, 67), //mlock|munlock|mlockall|munlockall|sched_setparam|sched_getparam|sched_setscheduler|sched_getscheduler|sched_yield|sched_get_priority_max|sched_get_priority_min|sched_rr_get_interval|nanosleep|mremap
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 173, 65, 66), //prctl
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 290, 33, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 239, 17, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 213, 9, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 197, 5, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 191, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 183, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 182, 58, 59), //rt_sigaction|rt_sigprocmask|rt_sigpending|rt_sigtimedwait|rt_sigqueueinfo|rt_sigsuspend|pread64|pwrite64
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 188, 57, 58), //getcwd|capget|capset|sigaltstack|sendfile
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 195, 56, 57), //ugetrlimit|mmap2|truncate64|ftruncate64
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 199, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 198, 54, 55), //fstat64
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 212, 53, 54), //getuid32|getgid32|geteuid32|getegid32|setreuid32|setregid32|getgroups32|setgroups32|fchown32|setresuid32|getresuid32|setresgid32|getresgid32
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 219, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 217, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 215, 50, 51), //setuid32|setgid32
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 218, 49, 50), //getdents64
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 225, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 222, 47, 48), //mincore|madvise|fcntl64
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 238, 46, 47), //readahead|setxattr|lsetxattr|fsetxattr|getxattr|lgetxattr|fgetxattr|listxattr|llistxattr|flistxattr|removexattr|lremovexattr|fremovexattr
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 256, 7, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 248, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 241, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 240, 42, 43), //sendfile64
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 243, 41, 42), //sched_setaffinity|sched_getaffinity
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 251, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 249, 39, 40), //exit_group
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 252, 38, 39), //epoll_ctl
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 280, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 270, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 269, 35, 36), //set_tid_address|timer_create|timer_settime|timer_gettime|timer_getoverrun|timer_delete|clock_settime|clock_gettime|clock_getres|clock_nanosleep|statfs64|fstatfs64|tgkill
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 271, 34, 35), //arm_fadvise64_64
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 286, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 285, 32, 33), //waitid|socket|bind|connect|listen
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 289, 31, 32), //getsockname|getpeername|socketpair
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 350, 15, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 327, 7, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 317, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 292, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 291, 26, 27), //sendto
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 298, 25, 26), //recvfrom|shutdown|setsockopt|getsockopt|sendmsg|recvmsg
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 322, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 319, 23, 24), //inotify_add_watch|inotify_rm_watch
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 326, 22, 23), //openat|mkdirat|mknodat|fchownat
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 345, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 340, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 338, 19, 20), //fstatat64|unlinkat|renameat|linkat|symlinkat|readlinkat|fchmodat|faccessat|pselect6|ppoll|unshare
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 344, 18, 19), //splice|sync_file_range2|tee|vmsplice
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 348, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 347, 16, 17), //getcpu|epoll_pwait
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 349, 15, 16), //utimensat
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 372, 7, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 365, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 352, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 351, 11, 12), //timerfd_create
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 363, 10, 11), //fallocate|timerfd_settime|timerfd_gettime|signalfd4|eventfd2|epoll_create1|dup3|pipe2|inotify_init1|preadv|pwritev
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 369, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 367, 8, 9), //recvmmsg|accept4
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 370, 7, 8), //prlimit64
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 983042, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 374, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 373, 4, 5), //clock_adjtime
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 378, 3, 4), //sendmmsg|setns|process_vm_readv|process_vm_writev
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 983045, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 983043, 1, 2), //__ARM_NR_cacheflush
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 983046, 0, 1), //__ARM_NR_set_tls
BPF_STMT(BPF_RET|BPF_K, SECCOMP_RET_TRAP),
BPF_STMT(BPF_RET|BPF_K, SECCOMP_RET_ALLOW),
};

const size_t arm_filter_size = sizeof(arm_filter) / sizeof(struct sock_filter);