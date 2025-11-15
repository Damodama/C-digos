using System;
using System.Globalization;
class Program {
    static void Main() {
        int quantidade;
        double recebido, troco, total, preco;
        CultureInfo CI = CultureInfo.InvariantCulture;
        Console.Write("Preço unitário do produto: ");
        preco = double.Parse(Console.ReadLine(), CI);
        Console.Write("Quantidade comprada: ");
        quantidade = int.Parse(Console.ReadLine());
        Console.Write("Dinheiro recebido: ");
        recebido = double.Parse(Console.ReadLine(), CI);
        total = preco * quantidade;
        troco = recebido - total;
        Console.WriteLine($"Troco = R$ {troco:F2}");
    }
}
