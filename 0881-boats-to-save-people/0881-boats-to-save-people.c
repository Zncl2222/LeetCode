int cmp(const void* a, const void* b) {
    return *(int*)a - *(int*)b;
}


int numRescueBoats(int* people, int peopleSize, int limit) {
    qsort(people, peopleSize, sizeof(int), cmp);
    
    int boat_required = 0;
    int lightest_idx = 0;
    int heaviest_idx = peopleSize - 1;

    
    while (lightest_idx <= heaviest_idx) {
        if (people[lightest_idx] + people[heaviest_idx] <= limit) {
            --heaviest_idx;
            ++lightest_idx;
        } else {
            --heaviest_idx;
        }
        ++boat_required;
    }
    return boat_required;
}