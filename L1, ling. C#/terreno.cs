using System;
class Program {
    static void Main() {
        double largura, comprimento, valor_m2, area, preco;
        Console.Write("Digite a largura do terreno (em metros): ");
        largura = double.Parse(Console.ReadLine());
        Console.Write("Digite o comprimento do terreno (em metros): ");
        comprimento = double.Parse(Console.ReadLine());
        Console.Write("Digite o valor do metro quadrado do terreno: R$ ");
        valor_m2 = double.Parse(Console.ReadLine());
        area = largura * comprimento;
        preco = area * valor_m2;
        Console.WriteLine("Area do terreno = " + area.ToString("F2") + " metros quadrados");
        Console.WriteLine("Preco do terreno = R$ " + preco.ToString("F2"));
        }
    }