#ifndef STRUCT_THREAD_PRECOMPUTE_AESKEY_H
#define STRUCT_THREAD_PRECOMPUTE_AESKEY_H
#include "MasterKey.h"
#include "DSSE_Param.h"
typedef struct THREAD_PRECOMPUTE_AESKEY
{
    unsigned char* aes_keys;
    TYPE_INDEX idx;
    int dim;
    TYPE_COUNTER* block_counter_arr;
    unsigned char* row_keys;
    MasterKey* masterKey;
    
    
    THREAD_PRECOMPUTE_AESKEY();
    ~THREAD_PRECOMPUTE_AESKEY();
    THREAD_PRECOMPUTE_AESKEY(unsigned char* aes_keys, TYPE_INDEX idx, int dim, TYPE_COUNTER* block_counter_arr,unsigned char* row_keys, MasterKey* masterKey);

};

#endif // STRUCT_THREAD_PRECOMPUTE_AESKEY_H
