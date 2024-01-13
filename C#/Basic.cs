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

      // Work with string
      string drink = "wine";
      string madTeaParty = $"\"Have some {drink},\" the March Hare said in an encouraging tone. \nAlice looked all round the table, but there was nothing on it but tea.\n\
      "I don't see any {drink},\" she remarked.\n\"There isn't any,\" said the March Hare.";

      int storyLength = madTeaParty.Length;
      string toFind = "March Hare";

      string lowerCase = toFind.ToLower(); 
      int wordPosition = madTeaParty.IndexOf(toFind);

      Console.WriteLine(madTeaParty.Substring(findMarchHare));
      Console.WriteLine($"This scene is {storyLength} long.\n");
      Console.WriteLine($"The term we're looking for is {toFind} and is located at index {wordPosition}.");
  }
}
