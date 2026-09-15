namespace targets {

class Alien{
    // constructor that recieves x and y
    // and puts them into x_coordinate and y_coordinate
    public:

    int x_coordinate;
    int y_coordinate;
    
    Alien(int x, int y){
        x_coordinate = x;
        y_coordinate = y;
    }

    int get_health() const{
        return health; 
    }

    bool hit(){
        if (health > 0 ) {
            health--;
        }
        return true;
    }

    bool is_alive() const{
        return health > 0;
    }

    bool teleport(int x_new, int y_new){
        x_coordinate = x_new;
        y_coordinate = y_new;
        return true;
    }

    bool collision_detection(Alien diffAlien){
        if (diffAlien.x_coordinate == x_coordinate && diffAlien.y_coordinate == y_coordinate){
            return true;
        } else {
            return false;
        }
    }
    
    private:
    int health{3};
};

}  // namespace targets
