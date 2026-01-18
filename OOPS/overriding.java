class overridding {
    void display() {
        System.out.println("Base class method");
    }
}
class Derived extends overridding {
    @Override
    void display() {
        System.out.println("Derived class method");
    }

    public static void main(String[] args) {
        overridding obj = new Derived();
        obj.display(); // This will call the overridden method in Derived class
    }
}