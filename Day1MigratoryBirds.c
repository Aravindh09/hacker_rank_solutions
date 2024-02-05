// Problem : https://www.hackerrank.com/challenges/migratory-birds/problem

#define BIRD_TYPE 6
int migratoryBirds(int arr_count, int* arr) {
    long int birdCountArr[BIRD_TYPE] = {0};
    int i;
    int birdType, birdCount;
    for(i=0; i<arr_count; i++){
        birdCountArr[arr[i]] += 1;
    }
    birdType = 1;
    birdCount = birdCountArr[1];
    for(i=1; i<BIRD_TYPE; i++){
        if (birdCountArr[i] > birdCount){
            birdCount = birdCountArr[i];
            birdType = i;
        } else if(birdCountArr[i] == birdCount){
            if(i < birdType){
                birdType = i;
            }
        }
    }
    return birdType;
}


// Time complexity : 5 + BigO(n) = BigO(n)
//     - where n is length of input array.
//     - 5 is for iterating the count array.