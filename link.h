#ifndef LINK_STRUCT
#define LINK_STRUCT
/**
 * struct link - "link"ed list struct
 * @value: int value
 * @next: pointer to the next node
 */

typedef struct link
{
	int value;
	struct link *next;
} link;
#endif
