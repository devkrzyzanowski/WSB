using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace zadFunkcje
{
    class Program
    {
        static void Main(string[] args)
        {
        }
        private void zad1(String name)
        {
            Console.WriteLine(name);
        }
        private Double zad2(Double val)
        {
            return val * val * val;
        }
        private void zad3()
        {

        }
        private void zad4(Double a, Double b, String type)
        {
            Double c;
            switch (type)
            {
                case "+": c = a + b; break;
                case "-": c = a - b; break;
                case "*": c = a * b; break;
                case "/": c = a / b; break;
                case "^": c = Math.Pow(a, b); break;
                default: break;
            }
        }
        private Boolean zad5(Int32 a)
        {
            return (a % 2 == 0) ? true : false; 
        }

        private void zad6(Int32 a, Int32 b)
        {
           Console.WriteLine((a >= b) ? a : b);
        }
        private Double zad7a(Double a)
        {
            return a * a;
        }
        private Double zad7b(Double a, Double b)
        {
            return a * b;
        }
        private Double zad7c(Double r)
        {
            return 3.14 * (r * r);
        }
        private Double zad7d(Double a, Double h)
        {
            return .5 * (a * h);
        }
        private float zad8(float a, int n)
        {
            float val = 1;
            for (int i = n; n > 0; n--)
            {
                val *= a;
            }
            return val;
        }
        private int zad9(int n)
        {
            int val = 1;
            for (int i = 1; i <= n; i++)
            {
                val *= i;
            }
            return val;
        }
        private int zad10(int a, int n)
        {
            return a + (n - 1) + 4;
        }
        private int zad11(DateTime first, DateTime acc)
        {
            TimeSpan ts = acc.Subtract(first);
            return Convert.ToInt32(ts.Days / 365);
        }
        private Boolean zad13(float a, float b, float c) //10, 4, 9
        {
            float[] values = new float[3] { a, b, c };
            Array.Sort(values);
            return (Math.Pow(values[0], 2) + Math.Pow(values[1], 2) == Math.Pow(values[2], 2)) ? true : false;
        }

    }
}
