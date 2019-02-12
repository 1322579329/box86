#ifndef __PATHCOLL_H_
#define __PATHCOLL_H_

// utility to handle path collection (like BOX86_PATH or BOX86_LD_LIBRARY_PATH)

// paths can be resized with realloc, so don't take address as invariant
typedef struct path_collection_t
{
    int    size;
    int    cap;
    char** paths;
} path_collection_t;

void ParseList(const char* List, path_collection_t* collection);
void FreeCollection(path_collection_t* collection);
void CopyCollection(path_collection_t* to, path_collection_t* from);
void AddPath(const char* path, path_collection_t* collection);

#endif //__PATHCOLL_H_