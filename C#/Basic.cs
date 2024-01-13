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
  }
}
