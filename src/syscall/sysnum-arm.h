/* -*- c-set-style: "K&R"; c-basic-offset: 8 -*-
 *
 * This file was generated thanks to the following command:
 *
 *     cpp -dM -D__ARM_EABI__=1 linux/arch/arm/include/asm/unistd.h | grep '#define __NR_' | sed s/__NR_/PR_/g | sort -u
 */

#include "syscall/sysnum-undefined.h"

#include <linux/audit.h>
#define PR_SECCOMP_ARCH AUDIT_ARCH_ARM

#define PR__llseek 140
#define PR__newselect 142
#define PR__sysctl 149
#define PR_accept 285
#define PR_accept4 366
#define PR_access  33
#define PR_acct  51
#define PR_add_key 309
#define PR_adjtimex 124
#define PR_arm_fadvise64_64 270
#define PR_arm_sync_file_range 341
#define PR_bdflush 134
#define PR_bind 282
#define PR_brk  45
#define PR_capget 184
#define PR_capset 185
#define PR_chdir  12
#define PR_chmod  15
#define PR_chown 182
#define PR_chown32 212
#define PR_chroot  61
#define PR_clock_adjtime 372
#define PR_clock_getres 264
#define PR_clock_gettime 263
#define PR_clock_nanosleep 265
#define PR_clock_settime 262
#define PR_clone 120
#define PR_close  6
#define PR_connect 283
#define PR_creat  8
#define PR_delete_module 129
#define PR_dup  41
#define PR_dup2  63
#define PR_dup3 358
#define PR_epoll_create 250
#define PR_epoll_create1 357
#define PR_epoll_ctl 251
#define PR_epoll_pwait 346
#define PR_epoll_wait 252
#define PR_eventfd 351
#define PR_eventfd2 356
#define PR_execve  11
#define PR_exit  1
#define PR_exit_group 248
#define PR_faccessat 334
#define PR_fallocate 352
#define PR_fanotify_init 367
#define PR_fanotify_mark 368
#define PR_fchdir 133
#define PR_fchmod  94
#define PR_fchmodat 333
#define PR_fchown  95
#define PR_fchown32 207
#define PR_fchownat 325
#define PR_fcntl  55
#define PR_fcntl64 221
#define PR_fdatasync 148
#define PR_fgetxattr 231
#define PR_flistxattr 234
#define PR_flock 143
#define PR_fork  2
#define PR_fremovexattr 237
#define PR_fsetxattr 228
#define PR_fstat 108
#define PR_fstat64 197
#define PR_fstatat64 327
#define PR_fstatfs 100
#define PR_fstatfs64 267
#define PR_fsync 118
#define PR_ftruncate  93
#define PR_ftruncate64 194
#define PR_futex 240
#define PR_futimesat 326
#define PR_get_mempolicy 320
#define PR_get_robust_list 339
#define PR_getcpu 345
#define PR_getcwd 183
#define PR_getdents 141
#define PR_getdents64 217
#define PR_getegid  50
#define PR_getegid32 202
#define PR_geteuid  49
#define PR_geteuid32 201
#define PR_getgid  47
#define PR_getgid32 200
#define PR_getgroups  80
#define PR_getgroups32 205
#define PR_getitimer 105
#define PR_getpeername 287
#define PR_getpgid 132
#define PR_getpgrp  65
#define PR_getpid  20
#define PR_getppid  64
#define PR_getpriority  96
#define PR_getresgid 171
#define PR_getresgid32 211
#define PR_getresuid 165
#define PR_getresuid32 209
#define PR_getrusage  77
#define PR_getsid 147
#define PR_getsockname 286
#define PR_getsockopt 295
#define PR_gettid 224
#define PR_gettimeofday  78
#define PR_getuid  24
#define PR_getuid32 199
#define PR_getxattr 229
#define PR_init_module 128
#define PR_inotify_add_watch 317
#define PR_inotify_init 316
#define PR_inotify_init1 360
#define PR_inotify_rm_watch 318
#define PR_io_cancel 247
#define PR_io_destroy 244
#define PR_io_getevents 245
#define PR_io_setup 243
#define PR_io_submit 246
#define PR_ioctl  54
#define PR_ioprio_get 315
#define PR_ioprio_set 314
#define PR_kexec_load 347
#define PR_keyctl 311
#define PR_kill  37
#define PR_lchown  16
#define PR_lchown32 198
#define PR_lgetxattr 230
#define PR_link  9
#define PR_linkat 330
#define PR_listen 284
#define PR_listxattr 232
#define PR_llistxattr 233
#define PR_lookup_dcookie 249
#define PR_lremovexattr 236
#define PR_lseek  19
#define PR_lsetxattr 227
#define PR_lstat 107
#define PR_lstat64 196
#define PR_madvise 220
#define PR_mbind 319
#define PR_mincore 219
#define PR_mkdir  39
#define PR_mkdirat 323
#define PR_mknod  14
#define PR_mknodat 324
#define PR_mlock 150
#define PR_mlockall 152
#define PR_mmap2 192
#define PR_mount  21
#define PR_move_pages 344
#define PR_mprotect 125
#define PR_mq_getsetattr 279
#define PR_mq_notify 278
#define PR_mq_open 274
#define PR_mq_timedreceive 277
#define PR_mq_timedsend 276
#define PR_mq_unlink 275
#define PR_mremap 163
#define PR_msgctl 304
#define PR_msgget 303
#define PR_msgrcv 302
#define PR_msgsnd 301
#define PR_msync 144
#define PR_munlock 151
#define PR_munlockall 153
#define PR_munmap  91
#define PR_name_to_handle_at 370
#define PR_nanosleep 162
#define PR_nfsservctl 169
#define PR_nice  34
#define PR_open  5
#define PR_open_by_handle_at 371
#define PR_openat 322
#define PR_pause  29
#define PR_pciconfig_iobase 271
#define PR_pciconfig_read 272
#define PR_pciconfig_write 273
#define PR_perf_event_open 364
#define PR_personality 136
#define PR_pipe  42
#define PR_pipe2 359
#define PR_pivot_root 218
#define PR_poll 168
#define PR_ppoll 336
#define PR_prctl 172
#define PR_pread64 180
#define PR_preadv 361
#define PR_prlimit64 369
#define PR_process_vm_readv 376
#define PR_process_vm_writev 377
#define PR_pselect6 335
#define PR_ptrace  26
#define PR_pwrite64 181
#define PR_pwritev 362
#define PR_quotactl 131
#define PR_read  3
#define PR_readahead 225
#define PR_readlink  85
#define PR_readlinkat 332
#define PR_readv 145
#define PR_reboot  88
#define PR_recv 291
#define PR_recvfrom 292
#define PR_recvmmsg 365
#define PR_recvmsg 297
#define PR_remap_file_pages 253
#define PR_removexattr 235
#define PR_rename  38
#define PR_renameat 329
#define PR_request_key 310
#define PR_restart_syscall  0
#define PR_rmdir  40
#define PR_rt_sigaction 174
#define PR_rt_sigpending 176
#define PR_rt_sigprocmask 175
#define PR_rt_sigqueueinfo 178
#define PR_rt_sigreturn 173
#define PR_rt_sigsuspend 179
#define PR_rt_sigtimedwait 177
#define PR_rt_tgsigqueueinfo 363
#define PR_sched_get_priority_max 159
#define PR_sched_get_priority_min 160
#define PR_sched_getaffinity 242
#define PR_sched_getparam 155
#define PR_sched_getscheduler 157
#define PR_sched_rr_get_interval 161
#define PR_sched_setaffinity 241
#define PR_sched_setparam 154
#define PR_sched_setscheduler 156
#define PR_sched_yield 158
#define PR_semctl 300
#define PR_semget 299
#define PR_semop 298
#define PR_semtimedop 312
#define PR_send 289
#define PR_sendfile 187
#define PR_sendfile64 239
#define PR_sendmmsg 374
#define PR_sendmsg 296
#define PR_sendto 290
#define PR_set_mempolicy 321
#define PR_set_robust_list 338
#define PR_set_tid_address 256
#define PR_setdomainname 121
#define PR_setfsgid 139
#define PR_setfsgid32 216
#define PR_setfsuid 138
#define PR_setfsuid32 215
#define PR_setgid  46
#define PR_setgid32 214
#define PR_setgroups  81
#define PR_setgroups32 206
#define PR_sethostname  74
#define PR_setitimer 104
#define PR_setns 375
#define PR_setpgid  57
#define PR_setpriority  97
#define PR_setregid  71
#define PR_setregid32 204
#define PR_setresgid 170
#define PR_setresgid32 210
#define PR_setresuid 164
#define PR_setresuid32 208
#define PR_setreuid  70
#define PR_setreuid32 203
#define PR_setrlimit  75
#define PR_setsid  66
#define PR_setsockopt 294
#define PR_settimeofday  79
#define PR_setuid  23
#define PR_setuid32 213
#define PR_setxattr 226
#define PR_shmat 305
#define PR_shmctl 308
#define PR_shmdt 306
#define PR_shmget 307
#define PR_shutdown 293
#define PR_sigaction  67
#define PR_sigaltstack 186
#define PR_signalfd 349
#define PR_signalfd4 355
#define PR_sigpending  73
#define PR_sigprocmask 126
#define PR_sigreturn 119
#define PR_sigsuspend  72
#define PR_socket 281
#define PR_socketpair 288
#define PR_splice 340
#define PR_stat 106
#define PR_stat64 195
#define PR_statfs  99
#define PR_statfs64 266
#define PR_swapoff 115
#define PR_swapon  87
#define PR_symlink  83
#define PR_symlinkat 331
#define PR_sync  36
#define PR_syncfs 373
#define PR_sysfs 135
#define PR_sysinfo 116
#define PR_syslog 103
#define PR_tee 342
#define PR_tgkill 268
#define PR_timer_create 257
#define PR_timer_delete 261
#define PR_timer_getoverrun 260
#define PR_timer_gettime 259
#define PR_timer_settime 258
#define PR_timerfd_create 350
#define PR_timerfd_gettime 354
#define PR_timerfd_settime 353
#define PR_times  43
#define PR_tkill 238
#define PR_truncate  92
#define PR_truncate64 193
#define PR_ugetrlimit 191
#define PR_umask  60
#define PR_umount2  52
#define PR_uname 122
#define PR_unlink  10
#define PR_unlinkat 328
#define PR_unshare 337
#define PR_uselib  86
#define PR_ustat  62
#define PR_utimensat 348
#define PR_utimes 269
#define PR_vfork 190
#define PR_vhangup 111
#define PR_vmsplice 343
#define PR_vserver 313
#define PR_wait4 114
#define PR_waitid 280
#define PR_write  4
#define PR_writev 146

/*
 * These following syscalls are arm specific, this list was generated
 * thanks to the following command:
 *
 *     cpp -dM -D__ARM_EABI__=1 arch/arm/include/asm/unistd.h | grep '#define __ARM_NR_' | sed s/__ARM_NR_/PR_ARM_/g | sort -u
 */
#define PR_ARM_BASE 0x0f0000
#define PR_ARM_breakpoint (PR_ARM_BASE+1)
#define PR_ARM_cacheflush (PR_ARM_BASE+2)
#define PR_ARM_set_tls (PR_ARM_BASE+5)
#define PR_ARM_usr26 (PR_ARM_BASE+3)
#define PR_ARM_usr32 (PR_ARM_BASE+4)

/*
 * These following syscalls do not exist on ARM.  Note that syscall
 * numbers from -1 to -10 are reserved for PRoot internal usage.
 */

#define PR_afs_syscall ((word_t) -11)
#define PR_alarm ((word_t) -12)
#define PR_arch_prctl ((word_t) -13)
#define PR_break ((word_t) -14)
#define PR_cacheflush ((word_t) -15)
#define PR_create_module ((word_t) -16)
#define PR_epoll_ctl_old ((word_t) -17)
#define PR_epoll_wait_old ((word_t) -18)
#define PR_fadvise64 ((word_t) -19)
#define PR_fadvise64_64 ((word_t) -20)
#define PR_ftime ((word_t) -21)
#define PR_get_kernel_syms ((word_t) -22)
#define PR_get_thread_area ((word_t) -23)
#define PR_getpmsg ((word_t) -24)
#define PR_getrlimit ((word_t) -25)
#define PR_gtty ((word_t) -26)
#define PR_idle ((word_t) -27)
#define PR_ioperm ((word_t) -28)
#define PR_iopl ((word_t) -29)
#define PR_ipc ((word_t) -30)
#define PR_lock ((word_t) -31)
#define PR_migrate_pages ((word_t) -32)
#define PR_mmap ((word_t) -33)
#define PR_modify_ldt ((word_t) -34)
#define PR_mpx ((word_t) -35)
#define PR_newfstatat ((word_t) -36)
#define PR_oldfstat ((word_t) -37)
#define PR_oldlstat ((word_t) -38)
#define PR_oldolduname ((word_t) -39)
#define PR_oldstat ((word_t) -40)
#define PR_olduname ((word_t) -41)
#define PR_prof ((word_t) -42)
#define PR_profil ((word_t) -43)
#define PR_putpmsg ((word_t) -44)
#define PR_query_module ((word_t) -45)
#define PR_readdir ((word_t) -46)
#define PR_security ((word_t) -47)
#define PR_select ((word_t) -48)
#define PR_set_thread_area ((word_t) -49)
#define PR_sgetmask ((word_t) -50)
#define PR_signal ((word_t) -51)
#define PR_socketcall ((word_t) -52)
#define PR_ssetmask ((word_t) -53)
#define PR_stime ((word_t) -54)
#define PR_stty ((word_t) -55)
#define PR_sync_file_range ((word_t) -56)
#define PR_time ((word_t) -57)
#define PR_tuxcall ((word_t) -58)
#define PR_ulimit ((word_t) -59)
#define PR_umount ((word_t) -60)
#define PR_utime ((word_t) -61)
#define PR_vm86 ((word_t) -62)
#define PR_vm86old ((word_t) -63)
#define PR_waitpid ((word_t) -64)
#define PR_sync_file_range2 ((word_t) -65)
