using System;

public class Program{
    public static void Main(string[] args){
        Console.WriteLine("Enter radius: ");
        double radius = Convert.ToDouble(Console.ReadLine());
        double area = Math.PI * radius * radius;
        Console.WriteLine("Area: " + area);
    }
}