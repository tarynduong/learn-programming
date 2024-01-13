using System;

namespace GettingInput
{
  class Basic
  {
    static void Main()
    {
      Console.WriteLine("What is your birth year?");
      string input = Console.ReadLine();
      Console.WriteLine($"You reached 22 years old in 2023!");
      
      // Because Console.ReadLine() will always return a string, use built-in method to convert a string to an int
      Console.WriteLine("What is your favorite number?");
      int faveNumber = Convert.ToInt32(Console.ReadLine());

      // Always put the character m after the number to tell C# that it's a decimal. This data type is used mostly for financial metrics
      decimal revenue = 8347209.7642m;

      // Built-in method
      int numberOne = 12.76;
      int numberTwo = -2;
      double numberOneSqrt = Math.Floor(Math.Sqrt(numberOne));
      double numberTwoSqrt = Math.Floor(Math.Sqrt(Math.Abs(numberTwo)));
      Console.WriteLine(Math.Min(numberOneSqrt, numberTwoSqrt));
      Console.WriteLine(Math.Pow(numberOne, numberTwo));
      Console.WriteLine(Math.Ceiling(numberOne));
      Console.WriteLine(Math.Max(numberOne, numberTwo));
  }
}
