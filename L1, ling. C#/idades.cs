using System;
using System.Globalization;
class Program {
    static void Main() {
        int idade1, idade2;
        string nome1, nome2;
        double media;
        CultureInfo CI = CultureInfo.InvariantCulture;
        Console.Write("Nome da primeira pessoa: ");
        nome1 = Console.ReadLine();
        Console.Write("Idade: ");
        idade1 = int.Parse(Console.ReadLine());
        Console.Write("Nome da segunda pessoa: ");
        nome2 = Console.ReadLine();
        Console.Write("Idade: ");
        idade2 = int.Parse(Console.ReadLine());
        media = (idade1 + idade2) / 2.0;
        Console.WriteLine("A idade média de {nome1} e {nome2} é de {media:F1} anos");
    }
}
