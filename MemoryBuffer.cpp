#include <iostream>
#include <cassert>

using namespace std;

//사용하지 않는 빈 블록은 연결리스트로 만듦
struct FreeNode
{
    FreeNode* next;
};

class MemoryPool
{
private:
    size_t blockSize; // 블록 1개의 크기
    size_t totalBlocks; // 전체 블록 개수
    char* memoryBlock;
    FreeNode* freeListHead;
    
public:
    MemoryPool(size_t bSize, size_t tBlocks)
    {
        blockSize = max(bSize, sizeof(FreeNode*));
        totalBlocks = tBlocks;

        memoryBlock = new char[blockSize * totalBlocks];
        
        freeListHead = reinterpret_cast<FreeNode*>(memoryBlock);
        FreeNode* current = freeListHead;

        for(size_t i = 1; i<totalBlocks; i++)
        {
            FreeNode* nextNode = reinterpret_cast<FreeNode*>(memoryBlock + (i*blockSize));
        }

    }

    ~MemoryPool()
    {
        delete[] memoryBlock;
    }
};

void FindMemory(size_t a)
{
    void *bp;

    /*for (bp = explicit_listp; GET_ALLOC(HDRP(bp)) != 1; bp = GET_SUCC_FREEP(bp))
    {

    }*/
}

int main(void) 
{
    cout << "hello";
}