#include "nmp_memory.h"
#include "nmp_share_debug.h"

#define MAX_MEM_SIZE		(2 << 20)

typedef struct __alloc_head alloc_head;
struct __alloc_head
{
	guint size;
};


gpointer
nmp_mem_kalloc(guint size)
{
	if (size > MAX_MEM_SIZE)
		BUG();
	return g_malloc(size);
}


gpointer
nmp_mem_kalloc0(guint size)
{
	gpointer p;

	p = nmp_mem_kalloc(size);
	if (p)
	{
		memset(p, 0, size);
	}
	return p;
}


void
nmp_mem_kfree(gpointer p, guint size)
{
	g_free(p);
}


gpointer
nmp_mem_alloc(guint size)
{
	alloc_head *p_mem;
	guint real_size = size + sizeof(alloc_head);

	p_mem = (alloc_head*)nmp_mem_kalloc(real_size);
	if (p_mem)
	{
		p_mem->size = real_size;
		return p_mem + 1;
	}
	return NULL;
}


gpointer
nmp_mem_alloc0(guint size)
{
	gpointer p;

	p = nmp_mem_alloc(size);
	if (p)
	{
		memset(p, 0, size);
	}
	return p;
}


void
nmp_mem_free(gpointer p)
{
	alloc_head *p_mem = (alloc_head*)p;
	if (p_mem)
	{
		--p_mem;
		nmp_mem_kfree(p_mem, p_mem->size);
	}
}


//:~ End
