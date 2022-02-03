

bool carPooling(int** trips, int tripsSize, int* tripsColSize, int capacity){
    
    int dis[1001]={0};
    
    for(int i=0;i<tripsSize;i++){
        
        if (trips[i][0]>capacity){
            return false;
        }
        
        dis[trips[i][1]]+=trips[i][0];
        dis[trips[i][2]]-=trips[i][0];
        
    }
    
    int passenger_number=0;
    
    for (int i=0;i<1000;i++){
        
        passenger_number+=dis[i];
        
        if (passenger_number>capacity){
            return false;
        }
        
    }
    
    return true;

}