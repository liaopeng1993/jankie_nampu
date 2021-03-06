#include "nmp_msg_table.h"
#include "nmp_debug.h"

NmpMsgTable *
nmp_msg_table_new( void )
{
	NmpMsgTable *table;

	table = g_new0(NmpMsgTable, 1);
	return table;
}


gint
nmp_msg_table_register(NmpMsgTable *table, gint msg_Id,
	NmpMsgFunc fun)
{
	G_ASSERT(table != NULL);

	if (table->entries >= MAX_ENTRIES)
		return -1;

	table->msg_entries[table->entries].msg_Id = msg_Id;
	table->msg_entries[table->entries].fun = fun;
	++table->entries;

	return 0;
}



void
nmp_msg_table_call(NmpMsgTable *table, NmpMdsMsg *msg,
	gpointer data)
{
	gint index;
	G_ASSERT(table != NULL);

	for (index = 0; index < table->entries; ++index)
	{
		if (table->msg_entries[index].msg_Id == MSG_ID(msg))
			(*table->msg_entries[index].fun)(msg, data);
	}
}


void
nmp_msg_table_release(NmpMsgTable *table)
{
	G_ASSERT(table != NULL);

	g_free(table);
}


//:~ End
