using System;
using System.Globalization;
class Program {
    static void Main() {
        double peso, altura, imc;
        CultureInfo CI = CultureInfo.InvariantCulture;
        Console.Write("Digite o peso em kg: ");
        peso = double.Parse(Console.ReadLine(), CI);
        Console.Write("Digite a altura em m: ");
        altura = double.Parse(Console.ReadLine(), CI);
        imc = peso / (altura * altura);
        Console.WriteLine($"IMC = {imc:F2}");
    }
}
