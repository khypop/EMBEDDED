#include <iostream>
#include <cassert>

using namespace std;

struct FreeNode
{
    FreeNode* next;
};

class MemoryPool
{
private:
    size_t block_size;
    size_t total_blocks;
    char* memoryBlock;
    FreeNode* freeListHead;
    
public:
    MemoryPool(size_t bSize, size_t tBlocks)
    {
        block_size = max(bSize, sizeof(FreeNode*));
    }

    ~MemoryPool()
    {

    }
};

void FindMemory(size_t a)
{
    void *bp;

    /*for (bp = explicit_listp; GET_ALLOC(HDRP(bp)) != 1; bp = GET_SUCC_FREEP(bp))
    {

    }*/
}

int main() 
{
    
}