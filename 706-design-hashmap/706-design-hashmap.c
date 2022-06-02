
typedef struct {
    
    int* val;
    
} MyHashMap;


MyHashMap* myHashMapCreate() {
    
    MyHashMap* map = malloc(sizeof(MyHashMap)) ;
    map->val = (int*)malloc(1000001*sizeof(int));
    memset(map->val, -1, 1000001*sizeof(int));
    
    return map;
}

void myHashMapPut(MyHashMap* obj, int key, int value) {
    
    obj->val[key] = value;
}

int myHashMapGet(MyHashMap* obj, int key) {
  
    return obj->val[key];
}

void myHashMapRemove(MyHashMap* obj, int key) {
    
    obj->val[key] = -1;
  
}

void myHashMapFree(MyHashMap* obj) {
    
    free(obj);
}

/**
 * Your MyHashMap struct will be instantiated and called as such:
 * MyHashMap* obj = myHashMapCreate();
 * myHashMapPut(obj, key, value);
 
 * int param_2 = myHashMapGet(obj, key);
 
 * myHashMapRemove(obj, key);
 
 * myHashMapFree(obj);
*/