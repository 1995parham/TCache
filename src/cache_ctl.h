/*
 * In The Name Of God
 * ========================================
 * [] File Name : cache_ctl.h
 *
 * [] Creation Date : 28-02-2015
 *
 * [] Last Modified : Sat 28 Feb 2015 12:57:19 AM IRST
 *
 * [] Created By : Parham Alvani (parham.alvani@gmail.com)
 * =======================================
*/
#ifndef CACHE_CTL_H
#define CACHE_CTL_H
#include <stdint.h>

#include "set.h"

void set_replace_function(void (*new_replace)(
			struct set *set, uint64_t tag, uint64_t index));
void use_replace_function(struct set *set, uint64_t tag, uint64_t index);
void set_block_size(uint64_t block_size);
void use_block_size(uint64_t *address);

#endif