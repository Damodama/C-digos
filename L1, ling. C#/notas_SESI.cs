using System;
using System.Globalization;
class Program {
    static void Main() {
        double media1, media2, media_final;
        int i;
        CultureInfo CI = CultureInfo.InvariantCulture;
        double[] notas = new double[7];
        for (i = 0; i < 7; i++) {
            Console.Write($"Nota {i + 1}: ");
            notas[i] = double.Parse(Console.ReadLine(), CI);
        }
        media1 = (notas[0] + notas[1] + notas[2]) / 3.0;
        media2 = (notas[3] + notas[4] + notas[5]) / 3.0;
        media_final = (media1 + media2 + notas[6]) / 3.0;
        Console.WriteLine($"Nota final = {media_final:F1}");
        if (media_final < 60.0) {
            Console.WriteLine("Conceito C");
        } else if (media_final < 80.0) {
            Console.WriteLine("Conceito B");
        } else {
            Console.WriteLine("Conceito A");
        }
    }
}
