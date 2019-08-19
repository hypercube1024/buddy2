#ifndef __BUDDY2_H__
#define __BUDDY2_H__

#include <stdlib.h>

struct buddy2;

struct buddy2* buddy2_new(unsigned int size);

void buddy2_destroy(struct buddy2 *self);

unsigned int buddy2_alloc(struct buddy2 *self, unsigned int size);

void buddy2_free(struct buddy2 *self, unsigned int offset);

unsigned int buddy2_size(struct buddy2 *self, unsigned int offset);

void buddy2_dump(struct buddy2 *self);

#endif//__BUDDY2_H__
