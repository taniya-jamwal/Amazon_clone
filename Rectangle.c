import java.util.Scanner;

class Rectangle {
    private double length;
    private double breadth;

    public Rectangle(double length, double breadth) {
        this.length = length;
        this.breadth = breadth;
    }

    public double calculateArea() {
        return length * breadth;
    }

    public double calculateArea(double side) {
        return side * side;
    }
}

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the length of the rectangle: ");
        double length = scanner.nextDouble();

        System.out.print("Enter the breadth of the rectangle: ");
        double breadth = scanner.nextDouble();

        Rectangle rectangle = new Rectangle(length, breadth);
        System.out.println("Area of rectangle: " + rectangle.calculateArea());

        System.out.print("Enter the side of the square: ");
        double side = scanner.nextDouble();

        Rectangle square = new Rectangle(side, side);
        System.out.println("Area of square: " + square.calculateArea());
    }
}
