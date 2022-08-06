


typedef struct {
    int** rectangle; 
    int   rectangleRowSize; 
    int   rectangleColSize;
} SubrectangleQueries;


SubrectangleQueries* subrectangleQueriesCreate(int** rectangle, int rectangleSize, int* rectangleColSize) {
    SubrectangleQueries* res = malloc(sizeof(SubrectangleQueries));
    
    res->rectangle = rectangle; 
    res->rectangleRowSize = rectangleSize; 
    res->rectangleColSize = rectangleColSize[0];
    
    return res;
}

void subrectangleQueriesUpdateSubrectangle(SubrectangleQueries* obj, int row1, int col1, int row2, int col2, int newValue) {
    for(int r = row1; r <= row2; r++)
    {
        for(int c = col1; c <= col2; c++)
        {
            obj->rectangle[r][c] = newValue;
        }
    }
}

int subrectangleQueriesGetValue(SubrectangleQueries* obj, int row, int col) 
{
    return obj->rectangle[row][col];
}

void subrectangleQueriesFree(SubrectangleQueries* obj) {
    free(obj->rectangle);
    free(obj);
}

/**
 * Your SubrectangleQueries struct will be instantiated and called as such:
 * SubrectangleQueries* obj = subrectangleQueriesCreate(rectangle, rectangleSize, rectangleColSize);
 * subrectangleQueriesUpdateSubrectangle(obj, row1, col1, row2, col2, newValue);
 
 * int param_2 = subrectangleQueriesGetValue(obj, row, col);
 
 * subrectangleQueriesFree(obj);
*/