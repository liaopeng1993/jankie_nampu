AUTOMAKE_OPTIONS=foreign
lib_LIBRARIES=libnmplib.a
libnmplib_a_SOURCES=nmp_mem.c \
 		   nmp_list.c \
		   nmp_queue.c \
		   nmp_asyncqueue.c \
		   nmp_thread.c \
		   nmp_thread_posix.c \
		   nmp_thread_windows.c \
		   nmp_threadpool.c \
		   nmp_event.c \
		   nmp_sched.c \
		   nmp_base64.c
libnmplib_a_CFLAGS=-Wall -fno-inline -fstack-protector -fPIC -pthread

libnmplibincludedir=$(prefix)/include/nampu/nmplib
libnmplibinclude_HEADERS=$(top_srcdir)/include/*.h
