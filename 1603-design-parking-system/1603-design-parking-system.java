class ParkingSystem
{
    private int[] avaialbeSlots;
    
    public ParkingSystem(int big, int medium, int small)
    {
        avaialbeSlots = new int[3];
        avaialbeSlots[0] = big;
        avaialbeSlots[1] = medium;
        avaialbeSlots[2] = small;
    }
    
    public boolean addCar(int carType)
    {
        if(avaialbeSlots[carType - 1] > 0)
        {
            avaialbeSlots[carType - 1]--;
            return true;
        }
        return false;
    }
}

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem obj = new ParkingSystem(big, medium, small);
 * boolean param_1 = obj.addCar(carType);
 */