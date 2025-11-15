using System;
using System.Globalization;
class Program {
    static void Main() {
        int minutos;
        double valor;
        CultureInfo CI = CultureInfo.InvariantCulture;
        Console.Write("Digite a quantidade de minutos usados: ");
        minutos = int.Parse(Console.ReadLine());
        valor = 50.0;
        if (minutos > 100) {
            valor += (minutos - 100) * 2.0;
        }
        Console.WriteLine($"Valor a pagar = R$ {valor:F2}");
    }
}
